//
//  MWMFrameworkUtils.h
//  Maps
//
//  Created by Ilya Grechuhin on 28.04.15.
//  Copyright (c) 2015 MapsWithMe. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface MWMFrameworkUtils : NSObject

+ (void)prepareFramework;
+ (void)resetFramework;

+ (BOOL)hasMWM;
+ (NSString *)currentCountryName;

+ (void)initSoftwareRenderer:(CGFloat)screenScale;
+ (void)releaseSoftwareRenderer;
+ (UIImage *)getFrame:(CGSize)frameSize withScreenScale:(CGFloat)screenScale andZoomModifier:(int)zoomModifier;

+ (void)searchAroundCurrentLocation:(NSString *)query callback:(void(^)(NSMutableArray *result))reply;

@end
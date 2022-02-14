
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {scalar_t__ backlight_level; int backlight_enabled; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 scalar_t__ FUNC_0 (struct drm_device*) ;

__attribute__((used)) static void FUNC_1(struct drm_device *VAR_0)
{
 struct drm_i915_private *VAR_1 = VAR_0->dev_private;

 VAR_1->backlight_level = FUNC_0(VAR_0);
 VAR_1->backlight_enabled = VAR_1->backlight_level != 0;
}

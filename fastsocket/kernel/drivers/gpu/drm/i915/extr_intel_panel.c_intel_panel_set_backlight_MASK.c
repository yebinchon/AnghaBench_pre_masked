
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {scalar_t__ backlight_enabled; int backlight_level; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (struct drm_device*,int ) ;

void FUNC_1(struct drm_device *VAR_0, u32 VAR_1)
{
 struct drm_i915_private *VAR_2 = VAR_0->dev_private;

 VAR_2->backlight_level = VAR_1;
 if (VAR_2->backlight_enabled)
  FUNC_0(VAR_0, VAR_1);
}

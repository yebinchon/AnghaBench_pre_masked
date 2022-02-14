
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct drm_i915_private {int quirks; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct drm_device*) ;

__attribute__((used)) static u32 FUNC_1(struct drm_device *VAR_2, u32 VAR_3)
{
 struct drm_i915_private *VAR_4 = VAR_2->dev_private;

 if (VAR_1 < 0)
  return VAR_3;

 if (VAR_1 > 0 ||
     VAR_4->quirks & VAR_0)
  return FUNC_0(VAR_2) - VAR_3;

 return VAR_3;
}

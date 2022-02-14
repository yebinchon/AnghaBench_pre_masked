
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*) ;

void FUNC_4(struct drm_device *VAR_1)
{
 struct drm_i915_private *VAR_2 = VAR_1->dev_private;
 u32 VAR_3 = FUNC_3(VAR_1);

 if (FUNC_1(VAR_3) != VAR_0) {
  FUNC_0("Something enabled VGA plane, disabling it\n");
  FUNC_2(VAR_1);
 }
}

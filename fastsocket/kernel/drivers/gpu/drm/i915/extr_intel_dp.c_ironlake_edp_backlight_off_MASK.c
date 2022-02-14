
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_dp {int backlight_off_delay; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 struct drm_device* FUNC_3 (struct intel_dp*) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_i915_private*) ;
 int FUNC_6 (struct intel_dp*) ;
 int FUNC_7 (int ) ;

void FUNC_8(struct intel_dp *VAR_2)
{
 struct drm_device *VAR_3 = FUNC_3(VAR_2);
 struct drm_i915_private *VAR_4 = VAR_3->dev_private;
 u32 VAR_5;

 if (!FUNC_6(VAR_2))
  return;

 FUNC_4(VAR_3);

 FUNC_0("\n");
 VAR_5 = FUNC_5(VAR_4);
 VAR_5 &= ~VAR_0;
 FUNC_1(VAR_1, VAR_5);
 FUNC_2(VAR_1);
 FUNC_7(VAR_2->backlight_off_delay);
}

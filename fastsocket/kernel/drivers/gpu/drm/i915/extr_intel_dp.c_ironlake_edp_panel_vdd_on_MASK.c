
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_dp {int want_panel_vdd; int panel_power_up_delay; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,char*) ;
 struct drm_device* FUNC_5 (struct intel_dp*) ;
 int FUNC_6 (struct intel_dp*) ;
 scalar_t__ FUNC_7 (struct intel_dp*) ;
 int FUNC_8 (struct drm_i915_private*) ;
 int FUNC_9 (struct intel_dp*) ;
 int FUNC_10 (struct intel_dp*) ;
 int FUNC_11 (int ) ;

void FUNC_12(struct intel_dp *VAR_3)
{
 struct drm_device *VAR_4 = FUNC_5(VAR_3);
 struct drm_i915_private *VAR_5 = VAR_4->dev_private;
 u32 VAR_6;

 if (!FUNC_10(VAR_3))
  return;
 FUNC_0("Turn eDP VDD on\n");

 FUNC_4(VAR_3->want_panel_vdd,
      "eDP VDD already requested on\n");

 VAR_3->want_panel_vdd = 1;

 if (FUNC_7(VAR_3)) {
  FUNC_0("eDP VDD already on\n");
  return;
 }

 if (!FUNC_6(VAR_3))
  FUNC_9(VAR_3);

 VAR_6 = FUNC_8(VAR_5);
 VAR_6 |= VAR_0;
 FUNC_2(VAR_1, VAR_6);
 FUNC_3(VAR_1);
 FUNC_0("PCH_PP_STATUS: 0x%08x PCH_PP_CONTROL: 0x%08x\n",
        FUNC_1(VAR_2), FUNC_1(VAR_1));




 if (!FUNC_6(VAR_3)) {
  FUNC_0("eDP was not running\n");
  FUNC_11(VAR_3->panel_power_up_delay);
 }
}

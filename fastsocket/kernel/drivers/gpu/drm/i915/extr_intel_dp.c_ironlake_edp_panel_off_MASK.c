
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_dp {int want_panel_vdd; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (int,char*) ;
 struct drm_device* FUNC_4 (struct intel_dp*) ;
 int FUNC_5 (struct drm_i915_private*) ;
 int FUNC_6 (struct intel_dp*) ;
 int FUNC_7 (struct intel_dp*) ;

void FUNC_8(struct intel_dp *VAR_5)
{
 struct drm_device *VAR_6 = FUNC_4(VAR_5);
 struct drm_i915_private *VAR_7 = VAR_6->dev_private;
 u32 VAR_8;

 if (!FUNC_7(VAR_5))
  return;

 FUNC_0("Turn eDP power off\n");

 FUNC_3(!VAR_5->want_panel_vdd, "Need VDD to turn off panel\n");

 VAR_8 = FUNC_5(VAR_7);


 VAR_8 &= ~(VAR_4 | VAR_1 | VAR_2 | VAR_0);
 FUNC_1(VAR_3, VAR_8);
 FUNC_2(VAR_3);

 VAR_5->want_panel_vdd = 0;

 FUNC_6(VAR_5);
}

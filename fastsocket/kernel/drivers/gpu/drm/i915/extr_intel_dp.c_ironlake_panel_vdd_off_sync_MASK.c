
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct intel_dp {int panel_power_down_delay; int want_panel_vdd; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_2__ {int mutex; } ;
struct drm_device {TYPE_1__ mode_config; struct drm_i915_private* dev_private; } ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 struct drm_device* FUNC_5 (struct intel_dp*) ;
 scalar_t__ FUNC_6 (struct intel_dp*) ;
 int FUNC_7 (struct drm_i915_private*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct intel_dp *VAR_3)
{
 struct drm_device *VAR_4 = FUNC_5(VAR_3);
 struct drm_i915_private *VAR_5 = VAR_4->dev_private;
 u32 VAR_6;

 FUNC_4(!FUNC_9(&VAR_4->mode_config.mutex));

 if (!VAR_3->want_panel_vdd && FUNC_6(VAR_3)) {
  VAR_6 = FUNC_7(VAR_5);
  VAR_6 &= ~VAR_0;
  FUNC_2(VAR_1, VAR_6);
  FUNC_3(VAR_1);


  FUNC_0("PCH_PP_STATUS: 0x%08x PCH_PP_CONTROL: 0x%08x\n",
         FUNC_1(VAR_2), FUNC_1(VAR_1));

  FUNC_8(VAR_3->panel_power_down_delay);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int saveFBC_CONTROL; int saveFBC_CONTROL2; int saveFBC_LL_BASE; int saveFBC_CFB_BASE; int saveDPFC_CB_BASE; int savePP_CONTROL; int savePP_DIVISOR; int savePP_OFF_DELAYS; int savePP_ON_DELAYS; int saveBLC_HIST_CTL; int saveBLC_PWM_CTL; int savePFIT_PGM_RATIOS; int saveMCHBAR_RENDER_STANDBY; int saveBLC_CPU_PWM_CTL; int saveBLC_CPU_PWM_CTL2; int saveBLC_PWM_CTL2; int savePFIT_CONTROL; int saveLVDS; int saveDSPARB; } ;
struct drm_i915_private {TYPE_1__ regfile; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct TYPE_4__ {int gen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (struct drm_device*) ;
 scalar_t__ FUNC_1 (struct drm_device*) ;
 int FUNC_2 (int ,int ) ;
 int VAR_14 ;
 TYPE_2__* FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*) ;
 scalar_t__ FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct drm_device*) ;
 scalar_t__ FUNC_7 (struct drm_device*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_8 (struct drm_device*,int ) ;
 int FUNC_9 (struct drm_device*) ;
 int FUNC_10 (struct drm_device*) ;
 int FUNC_11 (struct drm_device*) ;
 int FUNC_12 (struct drm_device*) ;

__attribute__((used)) static void FUNC_13(struct drm_device *VAR_28)
{
 struct drm_i915_private *VAR_29 = VAR_28->dev_private;


 if (FUNC_3(VAR_28)->gen <= 4)
  FUNC_2(VAR_9, VAR_29->regfile.saveDSPARB);

 if (!FUNC_8(VAR_28, VAR_8))
  FUNC_10(VAR_28);


 if (FUNC_3(VAR_28)->gen >= 4 && !FUNC_0(VAR_28))
  FUNC_2(VAR_4, VAR_29->regfile.saveBLC_PWM_CTL2);

 if (FUNC_0(VAR_28)) {
  FUNC_2(VAR_16, VAR_29->regfile.saveLVDS);
 } else if (FUNC_7(VAR_28) && !FUNC_6(VAR_28))
  FUNC_2(VAR_15, VAR_29->regfile.saveLVDS);

 if (!FUNC_6(VAR_28) && !FUNC_4(VAR_28) && !FUNC_0(VAR_28))
  FUNC_2(VAR_21, VAR_29->regfile.savePFIT_CONTROL);

 if (FUNC_0(VAR_28)) {
  FUNC_2(VAR_5, VAR_29->regfile.saveBLC_PWM_CTL);
  FUNC_2(VAR_6, VAR_29->regfile.saveBLC_PWM_CTL2);



  FUNC_2(VAR_2, VAR_29->regfile.saveBLC_CPU_PWM_CTL2);
  FUNC_2(VAR_1, VAR_29->regfile.saveBLC_CPU_PWM_CTL);
  FUNC_2(VAR_20, VAR_29->regfile.savePP_ON_DELAYS);
  FUNC_2(VAR_19, VAR_29->regfile.savePP_OFF_DELAYS);
  FUNC_2(VAR_18, VAR_29->regfile.savePP_DIVISOR);
  FUNC_2(VAR_17, VAR_29->regfile.savePP_CONTROL);
  FUNC_2(VAR_27,
      VAR_29->regfile.saveMCHBAR_RENDER_STANDBY);
 } else {
  FUNC_2(VAR_22, VAR_29->regfile.savePFIT_PGM_RATIOS);
  FUNC_2(VAR_3, VAR_29->regfile.saveBLC_PWM_CTL);
  FUNC_2(VAR_0, VAR_29->regfile.saveBLC_HIST_CTL);
  FUNC_2(VAR_26, VAR_29->regfile.savePP_ON_DELAYS);
  FUNC_2(VAR_25, VAR_29->regfile.savePP_OFF_DELAYS);
  FUNC_2(VAR_24, VAR_29->regfile.savePP_DIVISOR);
  FUNC_2(VAR_23, VAR_29->regfile.savePP_CONTROL);
 }


 FUNC_12(VAR_28);
 if (FUNC_1(VAR_28)) {
  if (FUNC_0(VAR_28)) {
   FUNC_2(VAR_14, VAR_29->regfile.saveDPFC_CB_BASE);
  } else if (FUNC_5(VAR_28)) {
   FUNC_2(VAR_7, VAR_29->regfile.saveDPFC_CB_BASE);
  } else {
   FUNC_2(VAR_10, VAR_29->regfile.saveFBC_CFB_BASE);
   FUNC_2(VAR_13, VAR_29->regfile.saveFBC_LL_BASE);
   FUNC_2(VAR_12, VAR_29->regfile.saveFBC_CONTROL2);
   FUNC_2(VAR_11, VAR_29->regfile.saveFBC_CONTROL);
  }
 }

 if (!FUNC_8(VAR_28, VAR_8))
  FUNC_11(VAR_28);
 else
  FUNC_9(VAR_28);
}

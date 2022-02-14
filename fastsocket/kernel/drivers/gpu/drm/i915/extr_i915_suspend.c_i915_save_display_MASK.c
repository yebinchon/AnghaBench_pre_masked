
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* saveFBC_CONTROL; void* saveFBC_CONTROL2; void* saveFBC_LL_BASE; void* saveFBC_CFB_BASE; void* saveDPFC_CB_BASE; void* savePP_DIVISOR; void* savePP_OFF_DELAYS; void* savePP_ON_DELAYS; void* savePFIT_CONTROL; void* saveLVDS; void* saveBLC_PWM_CTL2; void* saveBLC_HIST_CTL; void* saveBLC_PWM_CTL; void* savePFIT_PGM_RATIOS; void* savePP_CONTROL; void* saveBLC_CPU_PWM_CTL2; void* saveBLC_CPU_PWM_CTL; void* saveDSPARB; } ;
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
 void* FUNC_2 (int ) ;
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
 int FUNC_8 (struct drm_device*,int ) ;
 int FUNC_9 (struct drm_device*) ;
 int FUNC_10 (struct drm_device*) ;

__attribute__((used)) static void FUNC_11(struct drm_device *VAR_27)
{
 struct drm_i915_private *VAR_28 = VAR_27->dev_private;


 if (FUNC_3(VAR_27)->gen <= 4)
  VAR_28->regfile.saveDSPARB = FUNC_2(VAR_9);



 if (!FUNC_8(VAR_27, VAR_8))
  FUNC_9(VAR_27);


 if (FUNC_0(VAR_27)) {
  VAR_28->regfile.savePP_CONTROL = FUNC_2(VAR_17);
  VAR_28->regfile.saveBLC_PWM_CTL = FUNC_2(VAR_5);
  VAR_28->regfile.saveBLC_PWM_CTL2 = FUNC_2(VAR_6);
  VAR_28->regfile.saveBLC_CPU_PWM_CTL = FUNC_2(VAR_1);
  VAR_28->regfile.saveBLC_CPU_PWM_CTL2 = FUNC_2(VAR_2);
  VAR_28->regfile.saveLVDS = FUNC_2(VAR_16);
 } else {
  VAR_28->regfile.savePP_CONTROL = FUNC_2(VAR_23);
  VAR_28->regfile.savePFIT_PGM_RATIOS = FUNC_2(VAR_22);
  VAR_28->regfile.saveBLC_PWM_CTL = FUNC_2(VAR_3);
  VAR_28->regfile.saveBLC_HIST_CTL = FUNC_2(VAR_0);
  if (FUNC_3(VAR_27)->gen >= 4)
   VAR_28->regfile.saveBLC_PWM_CTL2 = FUNC_2(VAR_4);
  if (FUNC_7(VAR_27) && !FUNC_6(VAR_27))
   VAR_28->regfile.saveLVDS = FUNC_2(VAR_15);
 }

 if (!FUNC_6(VAR_27) && !FUNC_4(VAR_27) && !FUNC_0(VAR_27))
  VAR_28->regfile.savePFIT_CONTROL = FUNC_2(VAR_21);

 if (FUNC_0(VAR_27)) {
  VAR_28->regfile.savePP_ON_DELAYS = FUNC_2(VAR_20);
  VAR_28->regfile.savePP_OFF_DELAYS = FUNC_2(VAR_19);
  VAR_28->regfile.savePP_DIVISOR = FUNC_2(VAR_18);
 } else {
  VAR_28->regfile.savePP_ON_DELAYS = FUNC_2(VAR_26);
  VAR_28->regfile.savePP_OFF_DELAYS = FUNC_2(VAR_25);
  VAR_28->regfile.savePP_DIVISOR = FUNC_2(VAR_24);
 }


 if (FUNC_1(VAR_27)) {
  if (FUNC_0(VAR_27)) {
   VAR_28->regfile.saveDPFC_CB_BASE = FUNC_2(VAR_14);
  } else if (FUNC_5(VAR_27)) {
   VAR_28->regfile.saveDPFC_CB_BASE = FUNC_2(VAR_7);
  } else {
   VAR_28->regfile.saveFBC_CFB_BASE = FUNC_2(VAR_10);
   VAR_28->regfile.saveFBC_LL_BASE = FUNC_2(VAR_13);
   VAR_28->regfile.saveFBC_CONTROL2 = FUNC_2(VAR_12);
   VAR_28->regfile.saveFBC_CONTROL = FUNC_2(VAR_11);
  }
 }

 if (!FUNC_8(VAR_27, VAR_8))
  FUNC_10(VAR_27);
}

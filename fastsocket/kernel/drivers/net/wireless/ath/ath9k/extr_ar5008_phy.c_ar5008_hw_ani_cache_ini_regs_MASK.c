
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int macRev; int macVersion; } ;
struct ath_hw {int opmode; TYPE_1__ hw_version; struct ath9k_channel* curchan; } ;
struct ath_common {int dummy; } ;
struct ath9k_ani_default {void* cycpwrThr1Ext; void* cycpwrThr1; void* firstepLow; void* firstep; void* m2ThreshLowExt; void* m1ThreshLowExt; void* m2ThreshExt; void* m1ThreshExt; void* m2CountThrLow; void* m2ThreshLow; void* m1ThreshLow; void* m2CountThr; void* m2Thresh; void* m1Thresh; } ;
struct ar5416AniState {int mrcCCK; int ofdmWeakSigDetect; int firstepLevel; int spurImmunityLevel; struct ath9k_ani_default iniDef; } ;
struct ath9k_channel {int channelFlags; int channel; struct ar5416AniState ani; } ;


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
 int VAR_14 ;
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
 void* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ath_hw*,int ) ;
 void* FUNC_2 (struct ath_hw*,int ,int ) ;
 struct ath_common* FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath_common*,int ,char*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct ath_hw *VAR_25)
{
 struct ath_common *VAR_26 = FUNC_3(VAR_25);
 struct ath9k_channel *VAR_27 = VAR_25->curchan;
 struct ar5416AniState *VAR_28 = &VAR_27->ani;
 struct ath9k_ani_default *VAR_29;
 u32 VAR_30;

 VAR_29 = &VAR_28->iniDef;

 FUNC_4(VAR_26, VAR_0, "ver %d.%d opmode %u chan %d Mhz/0x%x\n",
  VAR_25->hw_version.macVersion,
  VAR_25->hw_version.macRev,
  VAR_25->opmode,
  VAR_27->channel,
  VAR_27->channelFlags);

 VAR_30 = FUNC_1(VAR_25, VAR_7);
 VAR_29->m1Thresh = FUNC_0(VAR_30, VAR_17);
 VAR_29->m2Thresh = FUNC_0(VAR_30, VAR_19);
 VAR_29->m2CountThr = FUNC_0(VAR_30, VAR_18);

 VAR_30 = FUNC_1(VAR_25, VAR_13);
 VAR_29->m1ThreshLow = FUNC_0(VAR_30, VAR_14);
 VAR_29->m2ThreshLow = FUNC_0(VAR_30, VAR_16);
 VAR_29->m2CountThrLow = FUNC_0(VAR_30, VAR_15);

 VAR_30 = FUNC_1(VAR_25, VAR_8);
 VAR_29->m1ThreshExt = FUNC_0(VAR_30, VAR_9);
 VAR_29->m2ThreshExt = FUNC_0(VAR_30, VAR_11);
 VAR_29->m1ThreshLowExt = FUNC_0(VAR_30, VAR_10);
 VAR_29->m2ThreshLowExt = FUNC_0(VAR_30, VAR_12);
 VAR_29->firstep = FUNC_2(VAR_25,
      VAR_3,
      VAR_4);
 VAR_29->firstepLow = FUNC_2(VAR_25,
         VAR_6,
         VAR_5);
 VAR_29->cycpwrThr1 = FUNC_2(VAR_25,
         VAR_20,
         VAR_21);
 VAR_29->cycpwrThr1Ext = FUNC_2(VAR_25,
            VAR_1,
            VAR_2);


 VAR_28->spurImmunityLevel = VAR_23;
 VAR_28->firstepLevel = VAR_22;
 VAR_28->ofdmWeakSigDetect = VAR_24;
 VAR_28->mrcCCK = 0;
}

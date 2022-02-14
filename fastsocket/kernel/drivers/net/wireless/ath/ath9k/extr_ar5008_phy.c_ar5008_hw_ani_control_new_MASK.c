
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_3__ {int ast_ani_spurdown; int ast_ani_spurup; int ast_ani_stepdown; int ast_ani_stepup; int ast_ani_ofdmoff; int ast_ani_ofdmon; } ;
struct ath_hw {int ani_function; TYPE_1__ stats; struct ath9k_channel* curchan; } ;
struct ath_common {int dummy; } ;
struct TYPE_4__ {int m1ThreshLow; int m2ThreshLow; int m1Thresh; int m2Thresh; int m2CountThr; int m2CountThrLow; int m1ThreshLowExt; int m2ThreshLowExt; int m1ThreshExt; int m2ThreshExt; int firstep; int firstepLow; int cycpwrThr1; int cycpwrThr1Ext; } ;
struct ar5416AniState {size_t ofdmWeakSigDetect; size_t firstepLevel; size_t spurImmunityLevel; int cckPhyErrCount; int ofdmPhyErrCount; int listenTime; scalar_t__ mrcCCK; TYPE_2__ iniDef; } ;
struct ath9k_channel {int channel; struct ar5416AniState ani; } ;
typedef int s32 ;
typedef enum ath9k_ani_cmd { ____Placeholder_ath9k_ani_cmd } ath9k_ani_cmd ;


 int VAR_0 ;
 size_t FUNC_0 (int*) ;
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

 size_t VAR_23 ;



 size_t VAR_24 ;

 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_1 (struct ath_hw*,int ,int ) ;
 int FUNC_2 (struct ath_hw*,int ,int ,int) ;
 int FUNC_3 (struct ath_hw*,int ,int ) ;
 int FUNC_4 (int) ;
 struct ath_common* FUNC_5 (struct ath_hw*) ;
 int FUNC_6 (struct ath_common*,int ,char*,size_t,...) ;
 int* VAR_29 ;
 int* VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;

__attribute__((used)) static bool FUNC_7(struct ath_hw *VAR_41,
          enum ath9k_ani_cmd VAR_42,
          int VAR_43)
{
 struct ath_common *VAR_44 = FUNC_5(VAR_41);
 struct ath9k_channel *VAR_45 = VAR_41->curchan;
 struct ar5416AniState *VAR_46 = &VAR_45->ani;
 s32 VAR_47, VAR_48;

 switch (VAR_42 & VAR_41->ani_function) {
 case 130:{







  u32 VAR_49 = VAR_43 ? 1 : 0;




  int VAR_50 = VAR_49 ?
   VAR_46->iniDef.m1ThreshLow : VAR_33;
  int VAR_51 = VAR_49 ?
   VAR_46->iniDef.m2ThreshLow : VAR_39;
  int VAR_52 = VAR_49 ?
   VAR_46->iniDef.m1Thresh : VAR_34;
  int VAR_53 = VAR_49 ?
   VAR_46->iniDef.m2Thresh : VAR_40;
  int VAR_54 = VAR_49 ?
   VAR_46->iniDef.m2CountThr : VAR_36;
  int VAR_55 = VAR_49 ?
   VAR_46->iniDef.m2CountThrLow : VAR_35;
  int VAR_56 = VAR_49 ?
   VAR_46->iniDef.m1ThreshLowExt : VAR_32;
  int VAR_57 = VAR_49 ?
   VAR_46->iniDef.m2ThreshLowExt : VAR_38;
  int VAR_58 = VAR_49 ?
   VAR_46->iniDef.m1ThreshExt : VAR_31;
  int VAR_59 = VAR_49 ?
   VAR_46->iniDef.m2ThreshExt : VAR_37;

  FUNC_2(VAR_41, VAR_13,
         VAR_14,
         VAR_50);
  FUNC_2(VAR_41, VAR_13,
         VAR_16,
         VAR_51);
  FUNC_2(VAR_41, VAR_7,
         VAR_18, VAR_52);
  FUNC_2(VAR_41, VAR_7,
         VAR_20, VAR_53);
  FUNC_2(VAR_41, VAR_7,
         VAR_19, VAR_54);
  FUNC_2(VAR_41, VAR_13,
         VAR_15,
         VAR_55);

  FUNC_2(VAR_41, VAR_8,
         VAR_10, VAR_56);
  FUNC_2(VAR_41, VAR_8,
         VAR_12, VAR_57);
  FUNC_2(VAR_41, VAR_8,
         VAR_9, VAR_58);
  FUNC_2(VAR_41, VAR_8,
         VAR_11, VAR_59);

  if (VAR_49)
   FUNC_3(VAR_41, VAR_13,
        VAR_17);
  else
   FUNC_1(VAR_41, VAR_13,
        VAR_17);

  if (VAR_49 != VAR_46->ofdmWeakSigDetect) {
   FUNC_6(VAR_44, VAR_0,
    "** ch %d: ofdm weak signal: %s=>%s\n",
    VAR_45->channel,
    VAR_46->ofdmWeakSigDetect ?
    "on" : "off",
    VAR_49 ? "on" : "off");
   if (VAR_49)
    VAR_41->stats.ast_ani_ofdmon++;
   else
    VAR_41->stats.ast_ani_ofdmoff++;
   VAR_46->ofdmWeakSigDetect = VAR_49;
  }
  break;
 }
 case 132:{
  u32 VAR_60 = VAR_43;

  if (VAR_60 >= FUNC_0(VAR_30)) {
   FUNC_6(VAR_44, VAR_0,
    "ATH9K_ANI_FIRSTEP_LEVEL: level out of range (%u > %zu)\n",
    VAR_60, FUNC_0(VAR_30));
   return 0;
  }





  VAR_47 = VAR_30[VAR_60] -
   VAR_30[VAR_23] +
   VAR_46->iniDef.firstep;
  if (VAR_47 < VAR_26)
   VAR_47 = VAR_26;
  if (VAR_47 > VAR_25)
   VAR_47 = VAR_25;
  FUNC_2(VAR_41, VAR_3,
         VAR_4,
         VAR_47);





  VAR_48 = VAR_30[VAR_60] -
    VAR_30[VAR_23] +
    VAR_46->iniDef.firstepLow;
  if (VAR_48 < VAR_26)
   VAR_48 = VAR_26;
  if (VAR_48 > VAR_25)
   VAR_48 = VAR_25;

  FUNC_2(VAR_41, VAR_6,
         VAR_5, VAR_48);

  if (VAR_60 != VAR_46->firstepLevel) {
   FUNC_6(VAR_44, VAR_0,
    "** ch %d: level %d=>%d[def:%d] firstep[level]=%d ini=%d\n",
    VAR_45->channel,
    VAR_46->firstepLevel,
    VAR_60,
    VAR_23,
    VAR_47,
    VAR_46->iniDef.firstep);
   FUNC_6(VAR_44, VAR_0,
    "** ch %d: level %d=>%d[def:%d] firstep_low[level]=%d ini=%d\n",
    VAR_45->channel,
    VAR_46->firstepLevel,
    VAR_60,
    VAR_23,
    VAR_48,
    VAR_46->iniDef.firstepLow);
   if (VAR_60 > VAR_46->firstepLevel)
    VAR_41->stats.ast_ani_stepup++;
   else if (VAR_60 < VAR_46->firstepLevel)
    VAR_41->stats.ast_ani_stepdown++;
   VAR_46->firstepLevel = VAR_60;
  }
  break;
 }
 case 128:{
  u32 VAR_61 = VAR_43;

  if (VAR_61 >= FUNC_0(VAR_29)) {
   FUNC_6(VAR_44, VAR_0,
    "ATH9K_ANI_SPUR_IMMUNITY_LEVEL: level out of range (%u > %zu)\n",
    VAR_61, FUNC_0(VAR_29));
   return 0;
  }




  VAR_47 = VAR_29[VAR_61] -
   VAR_29[VAR_24] +
   VAR_46->iniDef.cycpwrThr1;
  if (VAR_47 < VAR_28)
   VAR_47 = VAR_28;
  if (VAR_47 > VAR_27)
   VAR_47 = VAR_27;
  FUNC_2(VAR_41, VAR_21,
         VAR_22,
         VAR_47);






  VAR_48 = VAR_29[VAR_61] -
    VAR_29[VAR_24] +
    VAR_46->iniDef.cycpwrThr1Ext;
  if (VAR_48 < VAR_28)
   VAR_48 = VAR_28;
  if (VAR_48 > VAR_27)
   VAR_48 = VAR_27;
  FUNC_2(VAR_41, VAR_1,
         VAR_2, VAR_48);

  if (VAR_61 != VAR_46->spurImmunityLevel) {
   FUNC_6(VAR_44, VAR_0,
    "** ch %d: level %d=>%d[def:%d] cycpwrThr1[level]=%d ini=%d\n",
    VAR_45->channel,
    VAR_46->spurImmunityLevel,
    VAR_61,
    VAR_24,
    VAR_47,
    VAR_46->iniDef.cycpwrThr1);
   FUNC_6(VAR_44, VAR_0,
    "** ch %d: level %d=>%d[def:%d] cycpwrThr1Ext[level]=%d ini=%d\n",
    VAR_45->channel,
    VAR_46->spurImmunityLevel,
    VAR_61,
    VAR_24,
    VAR_48,
    VAR_46->iniDef.cycpwrThr1Ext);
   if (VAR_61 > VAR_46->spurImmunityLevel)
    VAR_41->stats.ast_ani_spurup++;
   else if (VAR_61 < VAR_46->spurImmunityLevel)
    VAR_41->stats.ast_ani_spurdown++;
   VAR_46->spurImmunityLevel = VAR_61;
  }
  break;
 }
 case 131:




  FUNC_4(1);
  break;
 case 129:
  break;
 default:
  FUNC_6(VAR_44, VAR_0, "invalid cmd %u\n", VAR_42);
  return 0;
 }

 FUNC_6(VAR_44, VAR_0,
  "ANI parameters: SI=%d, ofdmWS=%s FS=%d MRCcck=%s listenTime=%d ofdmErrs=%d cckErrs=%d\n",
  VAR_46->spurImmunityLevel,
  VAR_46->ofdmWeakSigDetect ? "on" : "off",
  VAR_46->firstepLevel,
  VAR_46->mrcCCK ? "on" : "off",
  VAR_46->listenTime,
  VAR_46->ofdmPhyErrCount,
  VAR_46->cckPhyErrCount);
 return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_4__ {int ast_ani_cckhigh; int ast_ani_ccklow; int ast_ani_spurdown; int ast_ani_spurup; int ast_ani_stepdown; int ast_ani_stepup; int ast_ani_ofdmoff; int ast_ani_ofdmon; } ;
struct ath_hw {int ani_function; TYPE_2__ stats; struct ath9k_channel* curchan; } ;
struct ath_common {int dummy; } ;
struct TYPE_3__ {int firstep; int firstepLow; int cycpwrThr1; int cycpwrThr1Ext; } ;
struct ar5416AniState {size_t ofdmWeakSigDetect; size_t firstepLevel; size_t spurImmunityLevel; int mrcCCK; int cckPhyErrCount; int ofdmPhyErrCount; int listenTime; TYPE_1__ iniDef; } ;
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

 size_t VAR_14 ;



 size_t VAR_15 ;

 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (struct ath_hw*,int ,int ) ;
 int FUNC_2 (struct ath_hw*,int ,int ,int) ;
 int FUNC_3 (struct ath_hw*,int ,int ) ;
 struct ath_common* FUNC_4 (struct ath_hw*) ;
 int FUNC_5 (struct ath_common*,int ,char*,size_t,...) ;
 int* VAR_20 ;
 int* VAR_21 ;

__attribute__((used)) static bool FUNC_6(struct ath_hw *VAR_22,
      enum ath9k_ani_cmd VAR_23, int VAR_24)
{
 struct ath_common *VAR_25 = FUNC_4(VAR_22);
 struct ath9k_channel *VAR_26 = VAR_22->curchan;
 struct ar5416AniState *VAR_27 = &VAR_26->ani;
 s32 VAR_28, VAR_29;

 switch (VAR_23 & VAR_22->ani_function) {
 case 130:{







  u32 VAR_30 = VAR_24 ? 1 : 0;

  if (VAR_30)
   FUNC_3(VAR_22, VAR_10,
        VAR_11);
  else
   FUNC_1(VAR_22, VAR_10,
        VAR_11);

  if (VAR_30 != VAR_27->ofdmWeakSigDetect) {
   FUNC_5(VAR_25, VAR_0,
    "** ch %d: ofdm weak signal: %s=>%s\n",
    VAR_26->channel,
    VAR_27->ofdmWeakSigDetect ?
    "on" : "off",
    VAR_30 ? "on" : "off");
   if (VAR_30)
    VAR_22->stats.ast_ani_ofdmon++;
   else
    VAR_22->stats.ast_ani_ofdmoff++;
   VAR_27->ofdmWeakSigDetect = VAR_30;
  }
  break;
 }
 case 132:{
  u32 VAR_31 = VAR_24;

  if (VAR_31 >= FUNC_0(VAR_21)) {
   FUNC_5(VAR_25, VAR_0,
    "ATH9K_ANI_FIRSTEP_LEVEL: level out of range (%u > %zu)\n",
    VAR_31, FUNC_0(VAR_21));
   return 0;
  }





  VAR_28 = VAR_21[VAR_31] -
   VAR_21[VAR_14] +
   VAR_27->iniDef.firstep;
  if (VAR_28 < VAR_17)
   VAR_28 = VAR_17;
  if (VAR_28 > VAR_16)
   VAR_28 = VAR_16;
  FUNC_2(VAR_22, VAR_3,
         VAR_4,
         VAR_28);





  VAR_29 = VAR_21[VAR_31] -
    VAR_21[VAR_14] +
    VAR_27->iniDef.firstepLow;
  if (VAR_29 < VAR_17)
   VAR_29 = VAR_17;
  if (VAR_29 > VAR_16)
   VAR_29 = VAR_16;

  FUNC_2(VAR_22, VAR_5,
         VAR_6, VAR_29);

  if (VAR_31 != VAR_27->firstepLevel) {
   FUNC_5(VAR_25, VAR_0,
    "** ch %d: level %d=>%d[def:%d] firstep[level]=%d ini=%d\n",
    VAR_26->channel,
    VAR_27->firstepLevel,
    VAR_31,
    VAR_14,
    VAR_28,
    VAR_27->iniDef.firstep);
   FUNC_5(VAR_25, VAR_0,
    "** ch %d: level %d=>%d[def:%d] firstep_low[level]=%d ini=%d\n",
    VAR_26->channel,
    VAR_27->firstepLevel,
    VAR_31,
    VAR_14,
    VAR_29,
    VAR_27->iniDef.firstepLow);
   if (VAR_31 > VAR_27->firstepLevel)
    VAR_22->stats.ast_ani_stepup++;
   else if (VAR_31 < VAR_27->firstepLevel)
    VAR_22->stats.ast_ani_stepdown++;
   VAR_27->firstepLevel = VAR_31;
  }
  break;
 }
 case 128:{
  u32 VAR_32 = VAR_24;

  if (VAR_32 >= FUNC_0(VAR_20)) {
   FUNC_5(VAR_25, VAR_0,
    "ATH9K_ANI_SPUR_IMMUNITY_LEVEL: level out of range (%u > %zu)\n",
    VAR_32, FUNC_0(VAR_20));
   return 0;
  }




  VAR_28 = VAR_20[VAR_32] -
   VAR_20[VAR_15] +
   VAR_27->iniDef.cycpwrThr1;
  if (VAR_28 < VAR_19)
   VAR_28 = VAR_19;
  if (VAR_28 > VAR_18)
   VAR_28 = VAR_18;
  FUNC_2(VAR_22, VAR_12,
         VAR_13,
         VAR_28);






  VAR_29 = VAR_20[VAR_32] -
    VAR_20[VAR_15] +
    VAR_27->iniDef.cycpwrThr1Ext;
  if (VAR_29 < VAR_19)
   VAR_29 = VAR_19;
  if (VAR_29 > VAR_18)
   VAR_29 = VAR_18;
  FUNC_2(VAR_22, VAR_1,
         VAR_2, VAR_29);

  if (VAR_32 != VAR_27->spurImmunityLevel) {
   FUNC_5(VAR_25, VAR_0,
    "** ch %d: level %d=>%d[def:%d] cycpwrThr1[level]=%d ini=%d\n",
    VAR_26->channel,
    VAR_27->spurImmunityLevel,
    VAR_32,
    VAR_15,
    VAR_28,
    VAR_27->iniDef.cycpwrThr1);
   FUNC_5(VAR_25, VAR_0,
    "** ch %d: level %d=>%d[def:%d] cycpwrThr1Ext[level]=%d ini=%d\n",
    VAR_26->channel,
    VAR_27->spurImmunityLevel,
    VAR_32,
    VAR_15,
    VAR_29,
    VAR_27->iniDef.cycpwrThr1Ext);
   if (VAR_32 > VAR_27->spurImmunityLevel)
    VAR_22->stats.ast_ani_spurup++;
   else if (VAR_32 < VAR_27->spurImmunityLevel)
    VAR_22->stats.ast_ani_spurdown++;
   VAR_27->spurImmunityLevel = VAR_32;
  }
  break;
 }
 case 131:{




  bool VAR_33 = VAR_24 ? 1 : 0;
  FUNC_2(VAR_22, VAR_7,
         VAR_8, VAR_33);
  FUNC_2(VAR_22, VAR_7,
         VAR_9, VAR_33);
  if (VAR_33 != VAR_27->mrcCCK) {
   FUNC_5(VAR_25, VAR_0, "** ch %d: MRC CCK: %s=>%s\n",
    VAR_26->channel,
    VAR_27->mrcCCK ? "on" : "off",
    VAR_33 ? "on" : "off");
  if (VAR_33)
   VAR_22->stats.ast_ani_ccklow++;
  else
   VAR_22->stats.ast_ani_cckhigh++;
  VAR_27->mrcCCK = VAR_33;
  }
 break;
 }
 case 129:
  break;
 default:
  FUNC_5(VAR_25, VAR_0, "invalid cmd %u\n", VAR_23);
  return 0;
 }

 FUNC_5(VAR_25, VAR_0,
  "ANI parameters: SI=%d, ofdmWS=%s FS=%d MRCcck=%s listenTime=%d ofdmErrs=%d cckErrs=%d\n",
  VAR_27->spurImmunityLevel,
  VAR_27->ofdmWeakSigDetect ? "on" : "off",
  VAR_27->firstepLevel,
  VAR_27->mrcCCK ? "on" : "off",
  VAR_27->listenTime,
  VAR_27->ofdmPhyErrCount,
  VAR_27->cckPhyErrCount);
 return 1;
}

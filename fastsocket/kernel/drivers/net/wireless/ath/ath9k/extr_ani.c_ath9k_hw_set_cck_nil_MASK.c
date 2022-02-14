
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int8_t ;
struct ath_hw {scalar_t__ opmode; TYPE_1__* curchan; } ;
struct ath_common {int dummy; } ;
struct ar5416AniState {size_t cckNoiseImmunityLevel; size_t ofdmNoiseImmunityLevel; scalar_t__ firstepLevel; scalar_t__ mrcCCK; } ;
struct ani_ofdm_level_entry {scalar_t__ fir_step_level; } ;
struct ani_cck_level_entry {scalar_t__ fir_step_level; scalar_t__ mrc_cck_on; } ;
struct TYPE_2__ {struct ar5416AniState ani; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 scalar_t__ FUNC_2 (struct ath_hw*) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_3 (struct ath_hw*) ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (struct ath_hw*,int ,scalar_t__) ;
 struct ath_common* FUNC_5 (struct ath_hw*) ;
 int FUNC_6 (struct ath_common*,int ,char*,size_t,size_t,scalar_t__,scalar_t__,int ) ;
 struct ani_cck_level_entry* VAR_7 ;
 struct ani_ofdm_level_entry* VAR_8 ;

__attribute__((used)) static void FUNC_7(struct ath_hw *VAR_9, u_int8_t VAR_10,
     bool VAR_11)
{
 struct ar5416AniState *VAR_12 = &VAR_9->curchan->ani;
 struct ath_common *VAR_13 = FUNC_5(VAR_9);
 const struct ani_ofdm_level_entry *VAR_14;
 const struct ani_cck_level_entry *VAR_15;

 FUNC_6(VAR_13, VAR_0, "**** ccklevel %d=>%d, rssi=%d[lo=%d hi=%d]\n",
  VAR_12->cckNoiseImmunityLevel, VAR_10,
  FUNC_3(VAR_9), VAR_5,
  VAR_4);

 if (VAR_9->opmode == VAR_6 &&
     FUNC_3(VAR_9) <= VAR_5 &&
     VAR_10 > VAR_1)
  VAR_10 = VAR_1;

 if (!VAR_11)
  VAR_12->cckNoiseImmunityLevel = VAR_10;

 VAR_14 = &VAR_8[VAR_12->ofdmNoiseImmunityLevel];
 VAR_15 = &VAR_7[VAR_12->cckNoiseImmunityLevel];

 if (VAR_12->firstepLevel != VAR_15->fir_step_level &&
     VAR_15->fir_step_level >= VAR_14->fir_step_level)
  FUNC_4(VAR_9,
         VAR_2,
         VAR_15->fir_step_level);


 if (!FUNC_0(VAR_9) || FUNC_1(VAR_9) || FUNC_2(VAR_9))
  return;

 if (VAR_12->mrcCCK != VAR_15->mrc_cck_on)
  FUNC_4(VAR_9,
         VAR_3,
         VAR_15->mrc_cck_on);
}

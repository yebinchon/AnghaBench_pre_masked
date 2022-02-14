
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ enable_ani; int ani_poll_interval; int cck_trig_low; int cck_trig_high; int ofdm_trig_low; int ofdm_trig_high; } ;
struct ath_hw {int proc_phyerr; TYPE_1__ config; int aniperiod; struct ath9k_channel* channels; } ;
struct ath_common {int dummy; } ;
struct ar5416AniState {int mrcCCK; int ofdmsTurn; int ofdmNoiseImmunityLevel; int cckNoiseImmunityLevel; int ofdmWeakSigDetect; int firstepLevel; int spurImmunityLevel; } ;
struct ath9k_channel {struct ar5416AniState ani; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath9k_channel*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
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
 int FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_hw*) ;
 struct ath_common* FUNC_4 (struct ath_hw*) ;
 int FUNC_5 (struct ath_common*,int ,char*) ;

void FUNC_6(struct ath_hw *VAR_13)
{
 struct ath_common *VAR_14 = FUNC_4(VAR_13);
 int VAR_15;

 FUNC_5(VAR_14, VAR_0, "Initialize ANI\n");

 VAR_13->config.ofdm_trig_high = VAR_6;
 VAR_13->config.ofdm_trig_low = VAR_7;

 VAR_13->config.cck_trig_high = VAR_2;
 VAR_13->config.cck_trig_low = VAR_3;

 for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_13->channels); VAR_15++) {
  struct ath9k_channel *VAR_16 = &VAR_13->channels[VAR_15];
  struct ar5416AniState *VAR_17 = &VAR_16->ani;

  VAR_17->spurImmunityLevel = VAR_10;

  VAR_17->firstepLevel = VAR_4;

  VAR_17->mrcCCK = FUNC_1(VAR_13) ? 1 : 0;

  VAR_17->ofdmsTurn = 1;

  VAR_17->ofdmWeakSigDetect = VAR_11;
  VAR_17->cckNoiseImmunityLevel = VAR_1;
  VAR_17->ofdmNoiseImmunityLevel = VAR_5;
 }





 VAR_13->aniperiod = VAR_8;
 VAR_13->config.ani_poll_interval = VAR_9;

 if (VAR_13->config.enable_ani)
  VAR_13->proc_phyerr |= VAR_12;

 FUNC_2(VAR_13);
 FUNC_3(VAR_13);
}

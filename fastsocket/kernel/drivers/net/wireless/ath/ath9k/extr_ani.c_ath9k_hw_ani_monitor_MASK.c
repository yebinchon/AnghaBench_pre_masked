
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {scalar_t__ cck_trig_low; scalar_t__ ofdm_trig_low; scalar_t__ ofdm_trig_high; scalar_t__ cck_trig_high; } ;
struct ath_hw {int aniperiod; TYPE_2__ config; TYPE_1__* curchan; } ;
struct ath_common {int dummy; } ;
struct ath9k_channel {int dummy; } ;
struct ar5416AniState {int ofdmPhyErrCount; int listenTime; int cckPhyErrCount; int ofdmsTurn; int cckNoiseImmunityLevel; int ofdmNoiseImmunityLevel; } ;
struct TYPE_3__ {struct ar5416AniState ani; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath_hw*) ;
 int FUNC_5 (struct ath_hw*) ;
 struct ath_common* FUNC_6 (struct ath_hw*) ;
 int FUNC_7 (struct ath_common*,int ,char*,int,int ,scalar_t__,int ,scalar_t__,int) ;

void FUNC_8(struct ath_hw *VAR_1, struct ath9k_channel *VAR_2)
{
 struct ar5416AniState *VAR_3;
 struct ath_common *VAR_4 = FUNC_6(VAR_1);
 u32 VAR_5, VAR_6;

 if (!FUNC_0(VAR_1))
  return;

 VAR_3 = &VAR_1->curchan->ani;
 if (!FUNC_5(VAR_1))
  return;

 VAR_5 = VAR_3->ofdmPhyErrCount * 1000 /
    VAR_3->listenTime;
 VAR_6 = VAR_3->cckPhyErrCount * 1000 /
    VAR_3->listenTime;

 FUNC_7(VAR_4, VAR_0,
  "listenTime=%d OFDM:%d errs=%d/s CCK:%d errs=%d/s ofdm_turn=%d\n",
  VAR_3->listenTime,
  VAR_3->ofdmNoiseImmunityLevel,
  VAR_5, VAR_3->cckNoiseImmunityLevel,
  VAR_6, VAR_3->ofdmsTurn);

 if (VAR_3->listenTime > VAR_1->aniperiod) {
  if (VAR_6 < VAR_1->config.cck_trig_low &&
      VAR_5 < VAR_1->config.ofdm_trig_low) {
   FUNC_3(VAR_1);
   VAR_3->ofdmsTurn = !VAR_3->ofdmsTurn;
  } else if (VAR_5 > VAR_1->config.ofdm_trig_high) {
   FUNC_4(VAR_1);
   VAR_3->ofdmsTurn = 0;
  } else if (VAR_6 > VAR_1->config.cck_trig_high) {
   FUNC_2(VAR_1);
   VAR_3->ofdmsTurn = 1;
  }
  FUNC_1(VAR_1);
 }
}

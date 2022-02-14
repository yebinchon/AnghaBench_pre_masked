
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int txpowlimit; } ;
struct ath9k_hw_cal_data {scalar_t__ chanmode; int channel; } ;
struct ath_softc {TYPE_2__ config; struct ath9k_hw_cal_data caldata; struct ath_hw* sc_ah; } ;
struct ath9k_hw_mci {int concur_tx; int config; } ;
struct TYPE_4__ {struct ath9k_hw_mci mci; } ;
struct ath_hw {TYPE_3__* curchan; TYPE_1__ btcoex_hw; } ;
struct TYPE_6__ {int channel; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (struct ath_hw*,int ,int) ;

void FUNC_2(struct ath_softc *VAR_3, bool VAR_4,
      bool VAR_5)
{
 struct ath_hw *VAR_6 = VAR_3->sc_ah;
 struct ath9k_hw_mci *VAR_7 = &VAR_3->sc_ah->btcoex_hw.mci;
 bool VAR_8 = VAR_7->concur_tx;

 if (!(VAR_7->config & VAR_0)) {
  VAR_7->concur_tx = 0;
  return;
 }

 if (!FUNC_0(VAR_6->curchan))
  return;

 if (VAR_4) {
  struct ath9k_hw_cal_data *VAR_9 = &VAR_3->caldata;
  if ((VAR_9->chanmode == VAR_2) &&
      (VAR_6->curchan->channel > VAR_9->channel) &&
      (VAR_6->curchan->channel <= VAR_9->channel + 20))
   return;
  if ((VAR_9->chanmode == VAR_1) &&
      (VAR_6->curchan->channel < VAR_9->channel) &&
      (VAR_6->curchan->channel >= VAR_9->channel - 20))
   return;
  VAR_7->concur_tx = 0;
 } else
  VAR_7->concur_tx = VAR_5;

 if (VAR_8 != VAR_7->concur_tx)
  FUNC_1(VAR_6, VAR_3->config.txpowlimit, 0);
}

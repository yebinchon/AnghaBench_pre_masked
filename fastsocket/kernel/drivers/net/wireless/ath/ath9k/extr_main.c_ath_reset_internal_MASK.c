
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ath9k_hw_cal_data {int dummy; } ;
struct ath_softc {int intr_tq; int sc_pcu_lock; TYPE_2__* hw; struct ath_hw* sc_ah; struct ath9k_hw_cal_data caldata; } ;
struct ath_hw {struct ath9k_channel* curchan; } ;
struct ath_common {int dummy; } ;
struct ath9k_channel {int channel; } ;
struct TYPE_3__ {int flags; } ;
struct TYPE_4__ {TYPE_1__ conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ath9k_channel*) ;
 int VAR_3 ;
 int FUNC_1 (struct ath_softc*) ;
 struct ath_common* FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_hw*) ;
 scalar_t__ FUNC_4 (struct ath_hw*) ;
 int FUNC_5 (struct ath_hw*,struct ath9k_channel*,struct ath9k_hw_cal_data*,int) ;
 int FUNC_6 (struct ath_softc*,int,int) ;
 int FUNC_7 (struct ath_softc*,int ) ;
 int FUNC_8 (struct ath_softc*,int) ;
 int FUNC_9 (struct ath_common*,int ,char*,int ,int ,int) ;
 int FUNC_10 (struct ath_common*,char*,int) ;
 int FUNC_11 (struct ath_softc*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(struct ath_softc *VAR_4, struct ath9k_channel *VAR_5)
{
 struct ath_hw *VAR_6 = VAR_4->sc_ah;
 struct ath_common *VAR_7 = FUNC_2(VAR_6);
 struct ath9k_hw_cal_data *VAR_8 = ((void*)0);
 bool VAR_9 = 1;
 int VAR_10;

 FUNC_1(VAR_4);

 FUNC_14(&VAR_4->intr_tq);
 FUNC_12(&VAR_4->sc_pcu_lock);

 if (!(VAR_4->hw->conf.flags & VAR_2)) {
  VAR_9 = 0;
  VAR_8 = &VAR_4->caldata;
 }

 if (!VAR_5) {
  VAR_9 = 0;
  VAR_5 = VAR_6->curchan;
 }

 if (!FUNC_11(VAR_4))
  VAR_9 = 0;

 FUNC_9(VAR_7, VAR_0, "Reset to %u MHz, HT40: %d fastcc: %d\n",
  VAR_5->channel, FUNC_0(VAR_5), VAR_9);

 VAR_10 = FUNC_5(VAR_6, VAR_5, VAR_8, VAR_9);
 if (VAR_10) {
  FUNC_10(VAR_7,
   "Unable to reset channel, reset status %d\n", VAR_10);

  FUNC_3(VAR_6);
  FUNC_7(VAR_4, VAR_3);

  goto out;
 }

 if (FUNC_4(VAR_4->sc_ah) &&
     (VAR_4->hw->conf.flags & VAR_2))
  FUNC_6(VAR_4, 1, 0);

 if (!FUNC_8(VAR_4, 1))
  VAR_10 = -VAR_1;

out:
 FUNC_13(&VAR_4->sc_pcu_lock);
 FUNC_15(&VAR_4->intr_tq);

 return VAR_10;
}

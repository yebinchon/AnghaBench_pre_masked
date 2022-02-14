
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_hw {struct ath_softc* priv; } ;
struct TYPE_2__ {int * frag; } ;
struct ath_softc {int ps_idle; int mutex; int sc_flags; int sc_pcu_lock; TYPE_1__ rx; int bcon_tasklet; int intr_tq; int irq; int rx_poll_timer; struct ath_hw* sc_ah; } ;
struct ath_hw {scalar_t__ led_pin; int caldata; scalar_t__ curchan; int imask; } ;
struct ath_common {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct ieee80211_hw*,struct ath_hw*) ;
 int FUNC_1 (struct ath_hw*,scalar_t__) ;
 struct ath_common* FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_hw*,int) ;
 int FUNC_4 (struct ath_hw*) ;
 int FUNC_5 (struct ath_hw*) ;
 int FUNC_6 (struct ath_hw*,scalar_t__,int ,int) ;
 int FUNC_7 (struct ath_hw*,scalar_t__,int) ;
 int FUNC_8 (struct ath_softc*) ;
 int FUNC_9 (struct ath_softc*) ;
 int FUNC_10 (struct ath_softc*) ;
 int FUNC_11 (struct ath_common*,int ,char*) ;
 int FUNC_12 (struct ath_softc*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ,int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int *) ;
 scalar_t__ FUNC_22 (int ,int *) ;

__attribute__((used)) static void FUNC_23(struct ieee80211_hw *VAR_4)
{
 struct ath_softc *VAR_5 = VAR_4->priv;
 struct ath_hw *VAR_6 = VAR_5->sc_ah;
 struct ath_common *VAR_7 = FUNC_2(VAR_6);
 bool VAR_8;

 FUNC_15(&VAR_5->mutex);

 FUNC_10(VAR_5);
 FUNC_13(&VAR_5->rx_poll_timer);

 if (FUNC_22(VAR_3, &VAR_5->sc_flags)) {
  FUNC_11(VAR_7, VAR_0, "Device not present\n");
  FUNC_16(&VAR_5->mutex);
  return;
 }


 FUNC_9(VAR_5);

 FUNC_18(&VAR_5->sc_pcu_lock);


 VAR_6->imask &= ~VAR_1;



 FUNC_4(VAR_6);

 FUNC_19(&VAR_5->sc_pcu_lock);



 FUNC_20(VAR_5->irq);
 FUNC_21(&VAR_5->intr_tq);
 FUNC_21(&VAR_5->bcon_tasklet);

 VAR_8 = VAR_5->ps_idle;
 VAR_5->ps_idle = 1;

 FUNC_18(&VAR_5->sc_pcu_lock);

 if (VAR_6->led_pin >= 0) {
  FUNC_7(VAR_6, VAR_6->led_pin, 1);
  FUNC_1(VAR_6, VAR_6->led_pin);
 }

 FUNC_12(VAR_5);

 if (VAR_5->rx.frag) {
  FUNC_14(VAR_5->rx.frag);
  VAR_5->rx.frag = ((void*)0);
 }

 if (!VAR_6->curchan)
  VAR_6->curchan = FUNC_0(VAR_4, VAR_6);

 FUNC_6(VAR_6, VAR_6->curchan, VAR_6->caldata, 0);
 FUNC_5(VAR_6);

 FUNC_3(VAR_6, 1);

 FUNC_19(&VAR_5->sc_pcu_lock);

 FUNC_8(VAR_5);

 FUNC_17(VAR_3, &VAR_5->sc_flags);
 VAR_5->ps_idle = VAR_8;

 FUNC_16(&VAR_5->mutex);

 FUNC_11(VAR_7, VAR_2, "Driver halt\n");
}

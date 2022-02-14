
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int u32 ;
struct ath_softc {int paprd_work; int hw; struct ath_hw* sc_ah; int sc_pm_lock; int ps_flags; } ;
struct TYPE_4__ {unsigned int ani_poll_interval; scalar_t__ enable_ani; } ;
struct ath_hw {scalar_t__ opmode; scalar_t__ power_mode; scalar_t__ ani_skip_count; int paprd_table_write_done; TYPE_3__* caldata; TYPE_1__ config; int rxchainmask; int curchan; } ;
struct TYPE_5__ {unsigned int longcal_timer; unsigned int shortcal_timer; unsigned int resetcal_timer; unsigned int checkani_timer; int timer; scalar_t__ caldone; } ;
struct ath_common {TYPE_2__ ani; int cc_lock; } ;
struct TYPE_6__ {int paprd_done; scalar_t__ nfcal_interference; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_softc*) ;
 int FUNC_2 (struct ath_hw*,int ) ;
 scalar_t__ FUNC_3 (struct ath_hw*,int ,int ,int) ;
 struct ath_common* FUNC_4 (struct ath_hw*) ;
 scalar_t__ FUNC_5 (struct ath_hw*) ;
 int FUNC_6 (struct ath_softc*) ;
 int FUNC_7 (struct ath_softc*) ;
 int FUNC_8 (struct ath_common*,int ,char*,scalar_t__,char*,char*,char*,char*) ;
 int FUNC_9 (struct ath_softc*) ;
 int FUNC_10 (struct ath_softc*) ;
 int FUNC_11 (int ,int *) ;
 scalar_t__ VAR_10 ;
 unsigned int FUNC_12 (scalar_t__) ;
 unsigned int FUNC_13 (unsigned int,unsigned int) ;
 int FUNC_14 (int *,scalar_t__) ;
 scalar_t__ FUNC_15 (unsigned int) ;
 int FUNC_16 (int *,unsigned long) ;
 int FUNC_17 (int *,unsigned long) ;

void FUNC_18(unsigned long VAR_11)
{
 struct ath_softc *VAR_12 = (struct ath_softc *)VAR_11;
 struct ath_hw *VAR_13 = VAR_12->sc_ah;
 struct ath_common *VAR_14 = FUNC_4(VAR_13);
 bool VAR_15 = 0;
 bool VAR_16 = 0;
 bool VAR_17 = 0;
 unsigned int VAR_18 = FUNC_12(VAR_10);
 u32 VAR_19, VAR_20, VAR_21;
 unsigned long VAR_22;

 if (VAR_13->caldata && VAR_13->caldata->nfcal_interference)
  VAR_21 = VAR_5;
 else
  VAR_21 = VAR_4;

 VAR_20 = (VAR_13->opmode == VAR_8) ?
  VAR_3 : VAR_7;


 if (VAR_12->sc_ah->power_mode != VAR_1) {
  if (++VAR_13->ani_skip_count >= VAR_2) {
   FUNC_16(&VAR_12->sc_pm_lock, VAR_22);
   VAR_12->ps_flags |= VAR_9;
   FUNC_17(&VAR_12->sc_pm_lock, VAR_22);
  }
  goto set_timer;
 }
 VAR_13->ani_skip_count = 0;
 FUNC_16(&VAR_12->sc_pm_lock, VAR_22);
 VAR_12->ps_flags &= ~VAR_9;
 FUNC_17(&VAR_12->sc_pm_lock, VAR_22);

 FUNC_7(VAR_12);


 if ((VAR_18 - VAR_14->ani.longcal_timer) >= VAR_21) {
  VAR_15 = 1;
  VAR_14->ani.longcal_timer = VAR_18;
 }


 if (!VAR_14->ani.caldone) {
  if ((VAR_18 - VAR_14->ani.shortcal_timer) >= VAR_20) {
   VAR_16 = 1;
   VAR_14->ani.shortcal_timer = VAR_18;
   VAR_14->ani.resetcal_timer = VAR_18;
  }
 } else {
  if ((VAR_18 - VAR_14->ani.resetcal_timer) >=
      VAR_6) {
   VAR_14->ani.caldone = FUNC_5(VAR_13);
   if (VAR_14->ani.caldone)
    VAR_14->ani.resetcal_timer = VAR_18;
  }
 }


 if (VAR_12->sc_ah->config.enable_ani
     && (VAR_18 - VAR_14->ani.checkani_timer) >=
     VAR_13->config.ani_poll_interval) {
  VAR_17 = 1;
  VAR_14->ani.checkani_timer = VAR_18;
 }


 if (VAR_17) {
  FUNC_16(&VAR_14->cc_lock, VAR_22);
  FUNC_2(VAR_13, VAR_13->curchan);
  FUNC_10(VAR_12);
  FUNC_17(&VAR_14->cc_lock, VAR_22);
 }


 if (VAR_15 || VAR_16) {
  VAR_14->ani.caldone =
   FUNC_3(VAR_13, VAR_13->curchan,
        VAR_13->rxchainmask, VAR_15);
 }

 FUNC_8(VAR_14, VAR_0,
  "Calibration @%lu finished: %s %s %s, caldone: %s\n",
  VAR_10,
  VAR_15 ? "long" : "", VAR_16 ? "short" : "",
  VAR_17 ? "ani" : "", VAR_14->ani.caldone ? "true" : "false");

 FUNC_1(VAR_12);
 FUNC_6(VAR_12);

set_timer:





 VAR_19 = VAR_4;
 if (VAR_12->sc_ah->config.enable_ani)
  VAR_19 = FUNC_13(VAR_19,
       (u32)VAR_13->config.ani_poll_interval);
 if (!VAR_14->ani.caldone)
  VAR_19 = FUNC_13(VAR_19, (u32)VAR_20);

 FUNC_14(&VAR_14->ani.timer, VAR_10 + FUNC_15(VAR_19));

 if (FUNC_0(VAR_13) && VAR_13->caldata) {
  if (!VAR_13->caldata->paprd_done) {
   FUNC_11(VAR_12->hw, &VAR_12->paprd_work);
  } else if (!VAR_13->paprd_table_write_done) {
   FUNC_7(VAR_12);
   FUNC_9(VAR_12);
   FUNC_6(VAR_12);
  }
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int txpowlimit; } ;
struct ath_softc {int ps_flags; int ant_rx; TYPE_4__* hw; int sc_pm_lock; int sc_flags; int curtxpow; TYPE_1__ config; struct ath_hw* sc_ah; } ;
struct TYPE_7__ {int hw_caps; } ;
struct ath_hw {scalar_t__ opmode; TYPE_3__ caps; } ;
struct ath_common {int dummy; } ;
struct TYPE_6__ {int flags; } ;
struct TYPE_8__ {TYPE_2__ conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ath_hw*,int ,int ,int *) ;
 struct ath_common* FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath_softc*) ;
 int FUNC_5 (struct ath_softc*) ;
 int FUNC_6 (struct ath_common*,char*) ;
 int FUNC_7 (struct ath_softc*) ;
 scalar_t__ FUNC_8 (struct ath_softc*) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;
 scalar_t__ FUNC_13 (int ,int *) ;

__attribute__((used)) static bool FUNC_14(struct ath_softc *VAR_8, bool VAR_9)
{
 struct ath_hw *VAR_10 = VAR_8->sc_ah;
 struct ath_common *VAR_11 = FUNC_1(VAR_10);
 unsigned long VAR_12;

 if (FUNC_8(VAR_8) != 0) {
  FUNC_6(VAR_11, "Unable to restart recv logic\n");
  return 0;
 }

 FUNC_0(VAR_10, VAR_8->curtxpow,
          VAR_8->config.txpowlimit, &VAR_8->curtxpow);

 FUNC_9(VAR_6, &VAR_8->sc_flags);
 FUNC_3(VAR_10);
 FUNC_2(VAR_10);

 if (!(VAR_8->hw->conf.flags & VAR_1) && VAR_9) {
  if (!FUNC_13(VAR_5, &VAR_8->sc_flags))
   goto work;

  if (VAR_10->opmode == VAR_2 &&
      FUNC_13(VAR_7, &VAR_8->sc_flags)) {
   FUNC_11(&VAR_8->sc_pm_lock, VAR_12);
   VAR_8->ps_flags |= VAR_3 | VAR_4;
   FUNC_12(&VAR_8->sc_pm_lock, VAR_12);
  } else {
   FUNC_4(VAR_8);
  }
 work:
  FUNC_7(VAR_8);
 }

 if ((VAR_10->caps.hw_caps & VAR_0) && VAR_8->ant_rx != 3)
  FUNC_5(VAR_8);

 FUNC_10(VAR_8->hw);

 return 1;
}

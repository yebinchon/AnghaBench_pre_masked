
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ath_softc {int intrstatus; int ps_flags; int sc_pcu_lock; int sc_pm_lock; scalar_t__ ps_enabled; struct ath_hw* sc_ah; } ;
struct TYPE_2__ {int hw_caps; } ;
struct ath_hw {TYPE_1__ caps; } ;
struct ath_common {int dummy; } ;
typedef enum ath_reset_type { ____Placeholder_ath_reset_type } ath_reset_type ;


 int VAR_0 ;
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
 int FUNC_0 (struct ath_softc*,int) ;
 struct ath_common* FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_softc*) ;
 int FUNC_4 (struct ath_softc*) ;
 int FUNC_5 (struct ath_softc*,int) ;
 int FUNC_6 (struct ath_common*,int ,char*) ;
 int FUNC_7 (struct ath_softc*,int ,int) ;
 int FUNC_8 (struct ath_softc*) ;
 int FUNC_9 (struct ath_softc*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,unsigned long) ;

void FUNC_14(unsigned long VAR_15)
{
 struct ath_softc *VAR_16 = (struct ath_softc *)VAR_15;
 struct ath_hw *VAR_17 = VAR_16->sc_ah;
 struct ath_common *VAR_18 = FUNC_1(VAR_17);
 enum ath_reset_type VAR_19;
 unsigned long VAR_20;
 u32 VAR_21 = VAR_16->intrstatus;
 u32 VAR_22;

 FUNC_4(VAR_16);
 FUNC_10(&VAR_16->sc_pcu_lock);

 if ((VAR_21 & VAR_2) ||
     (VAR_21 & VAR_1)) {

  if (VAR_21 & VAR_2)
   VAR_19 = VAR_14;
  else
   VAR_19 = VAR_13;

  FUNC_5(VAR_16, VAR_19);
  goto out;
 }

 FUNC_11(&VAR_16->sc_pm_lock, VAR_20);
 if ((VAR_21 & VAR_8) && VAR_16->ps_enabled) {




  FUNC_6(VAR_18, VAR_10, "TSFOOR - Sync with next Beacon\n");
  VAR_16->ps_flags |= VAR_12 | VAR_11;
 }
 FUNC_13(&VAR_16->sc_pm_lock, VAR_20);

 if (VAR_17->caps.hw_caps & VAR_0)
  VAR_22 = (VAR_5 | VAR_6 | VAR_4 |
     VAR_7);
 else
  VAR_22 = (VAR_3 | VAR_4 | VAR_7);

 if (VAR_21 & VAR_22) {

  if ((VAR_17->caps.hw_caps & VAR_0) &&
      (VAR_21 & VAR_5))
   FUNC_7(VAR_16, 0, 1);

  FUNC_7(VAR_16, 0, 0);
 }

 if (VAR_21 & VAR_9) {
  if (VAR_17->caps.hw_caps & VAR_0)
   FUNC_8(VAR_16);
  else
   FUNC_9(VAR_16);
 }

 FUNC_0(VAR_16, VAR_21);

out:

 FUNC_2(VAR_17);

 FUNC_12(&VAR_16->sc_pcu_lock);
 FUNC_3(VAR_16);
}

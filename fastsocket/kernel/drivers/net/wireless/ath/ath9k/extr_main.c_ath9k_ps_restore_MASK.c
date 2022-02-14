
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_softc {scalar_t__ ps_usecount; int ps_flags; int sc_pm_lock; int sc_ah; scalar_t__ ps_enabled; scalar_t__ ps_idle; } ;
struct ath_common {int cc_lock; } ;
typedef enum ath9k_power_mode { ____Placeholder_ath9k_power_mode } ath9k_power_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ath_softc*) ;
 scalar_t__ FUNC_1 (int ) ;
 struct ath_common* FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int*) ;
 int FUNC_6 (struct ath_common*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,unsigned long) ;

void FUNC_11(struct ath_softc *VAR_7)
{
 struct ath_common *VAR_8 = FUNC_2(VAR_7->sc_ah);
 enum ath9k_power_mode VAR_9;
 unsigned long VAR_10;
 bool VAR_11;

 FUNC_8(&VAR_7->sc_pm_lock, VAR_10);
 if (--VAR_7->ps_usecount != 0)
  goto unlock;

 if (VAR_7->ps_idle) {
  FUNC_4(VAR_7->sc_ah, 1);
  FUNC_5(VAR_7->sc_ah, &VAR_11);
  VAR_9 = VAR_0;
 } else if (VAR_7->ps_enabled &&
     !(VAR_7->ps_flags & (VAR_3 |
         VAR_4 |
         VAR_5 |
         VAR_6 |
         VAR_2))) {
  VAR_9 = VAR_1;
  if (FUNC_1(VAR_7->sc_ah))
   FUNC_0(VAR_7);
 } else {
  goto unlock;
 }

 FUNC_7(&VAR_8->cc_lock);
 FUNC_6(VAR_8);
 FUNC_9(&VAR_8->cc_lock);

 FUNC_3(VAR_7->sc_ah, VAR_9);

 unlock:
 FUNC_10(&VAR_7->sc_pm_lock, VAR_10);
}

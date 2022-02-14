
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_vif {scalar_t__ type; scalar_t__ drv_priv; } ;
struct ath_vif {int primary_sta_vif; } ;
struct ath_softc {int nbcnvifs; int sc_flags; TYPE_1__* sc_ah; } ;
struct ath_common {int dummy; } ;
struct TYPE_2__ {scalar_t__ opmode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct ath_common* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct ath_common*,int ,char*) ;
 scalar_t__ FUNC_2 (int ,int *) ;

bool FUNC_3(struct ath_softc *VAR_4, struct ieee80211_vif *VAR_5)
{
 struct ath_common *VAR_6 = FUNC_0(VAR_4->sc_ah);
 struct ath_vif *VAR_7 = (void *)VAR_5->drv_priv;

 if (VAR_4->sc_ah->opmode == VAR_1) {
  if ((VAR_5->type != VAR_1) ||
      (VAR_4->nbcnvifs > 1)) {
   FUNC_1(VAR_6, VAR_0,
    "An AP interface is already present !\n");
   return 0;
  }
 }

 if (VAR_4->sc_ah->opmode == VAR_2) {
  if ((VAR_5->type == VAR_2) &&
      FUNC_2(VAR_3, &VAR_4->sc_flags) &&
      !VAR_7->primary_sta_vif) {
   FUNC_1(VAR_6, VAR_0,
    "Beacon already configured for a station interface\n");
   return 0;
  }
 }

 return 1;
}

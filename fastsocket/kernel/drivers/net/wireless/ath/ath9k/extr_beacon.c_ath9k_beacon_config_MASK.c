
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ieee80211_bss_conf {scalar_t__ enable_beacon; int ibss_creator; } ;
struct ieee80211_vif {struct ieee80211_bss_conf bss_conf; } ;
struct ath_beacon_config {int enable_beacon; scalar_t__ beacon_interval; } ;
struct ath_softc {int nbcnvifs; int ps_flags; int sc_flags; int sc_pm_lock; TYPE_1__* sc_ah; struct ath_beacon_config cur_beacon_conf; } ;
struct TYPE_2__ {scalar_t__ opmode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ath_softc*,struct ieee80211_bss_conf*) ;
 int FUNC_1 (struct ath_softc*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void FUNC_6(struct ath_softc *VAR_6, struct ieee80211_vif *VAR_7,
    u32 VAR_8)
{
 struct ieee80211_bss_conf *VAR_9 = &VAR_7->bss_conf;
 struct ath_beacon_config *VAR_10 = &VAR_6->cur_beacon_conf;
 unsigned long VAR_11;
 bool VAR_12 = 0;

 if (VAR_6->sc_ah->opmode == VAR_2) {
  FUNC_0(VAR_6, VAR_9);
  FUNC_1(VAR_6);
  FUNC_3(VAR_5, &VAR_6->sc_flags);
  return;

 }





 if (VAR_8 & VAR_0) {
  if (!VAR_9->enable_beacon &&
      (VAR_6->nbcnvifs <= 1)) {
   VAR_10->enable_beacon = 0;
  } else if (VAR_9->enable_beacon) {
   VAR_10->enable_beacon = 1;
   FUNC_0(VAR_6, VAR_9);
  }
 }





 if (VAR_10->beacon_interval) {





  if ((VAR_8 & VAR_1) && !VAR_9->ibss_creator &&
      VAR_9->enable_beacon) {
   FUNC_4(&VAR_6->sc_pm_lock, VAR_11);
   VAR_6->ps_flags |= VAR_3 | VAR_4;
   FUNC_5(&VAR_6->sc_pm_lock, VAR_11);
   VAR_12 = 1;
  } else {
   FUNC_1(VAR_6);
  }





  if (VAR_10->enable_beacon && !VAR_12)
   FUNC_3(VAR_5, &VAR_6->sc_flags);
  else
   FUNC_2(VAR_5, &VAR_6->sc_flags);
 }
}

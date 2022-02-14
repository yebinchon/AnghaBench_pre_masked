
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ieee80211_bss_conf {int aid; int bssid; } ;
struct ieee80211_vif {int addr; struct ieee80211_bss_conf bss_conf; scalar_t__ drv_priv; } ;
struct ath_vif {int primary_sta_vif; } ;
struct ath_softc {int ps_flags; TYPE_2__* sc_ah; int sc_pm_lock; void* last_rssi; int sc_flags; } ;
struct ath_common {int curbssid; int curaid; } ;
struct TYPE_5__ {void* avgbrssi; } ;
struct TYPE_6__ {scalar_t__ opmode; TYPE_1__ stats; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct ath_common* FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct ath_softc*,int) ;
 int FUNC_4 (struct ath_common*,int ,char*,int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_9(struct ath_softc *VAR_7,
      struct ieee80211_vif *VAR_8)
{
 struct ath_common *VAR_9 = FUNC_0(VAR_7->sc_ah);
 struct ath_vif *VAR_10 = (void *)VAR_8->drv_priv;
 struct ieee80211_bss_conf *VAR_11 = &VAR_8->bss_conf;
 unsigned long VAR_12;

 FUNC_6(VAR_6, &VAR_7->sc_flags);
 VAR_10->primary_sta_vif = 1;







 if (VAR_7->sc_ah->opmode != VAR_3)
  return;

 FUNC_5(VAR_9->curbssid, VAR_11->bssid, VAR_2);
 VAR_9->curaid = VAR_11->aid;
 FUNC_2(VAR_7->sc_ah);

 VAR_7->last_rssi = VAR_0;
 VAR_7->sc_ah->stats.avgbrssi = VAR_0;

 FUNC_7(&VAR_7->sc_pm_lock, VAR_12);
 VAR_7->ps_flags |= VAR_4 | VAR_5;
 FUNC_8(&VAR_7->sc_pm_lock, VAR_12);

 if (FUNC_1(VAR_7->sc_ah))
  FUNC_3(VAR_7, 0);

 FUNC_4(VAR_9, VAR_1,
  "Primary Station interface: %pM, BSSID: %pM\n",
  VAR_8->addr, VAR_9->curbssid);
}

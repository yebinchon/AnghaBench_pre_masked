
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {scalar_t__ drv_priv; } ;
struct ieee80211_key_conf {scalar_t__ hw_key_idx; } ;
struct ath_softc {int sc_ah; } ;
struct ath_node {scalar_t__ ps_key; } ;
struct ath_common {int dummy; } ;


 struct ath_common* FUNC_0 (int ) ;
 int FUNC_1 (struct ath_common*,struct ieee80211_key_conf*) ;

__attribute__((used)) static void FUNC_2(struct ath_softc *VAR_0,
        struct ieee80211_vif *VAR_1,
        struct ieee80211_sta *VAR_2)
{
 struct ath_common *VAR_3 = FUNC_0(VAR_0->sc_ah);
 struct ath_node *VAR_4 = (struct ath_node *) VAR_2->drv_priv;
 struct ieee80211_key_conf VAR_5 = { .hw_key_idx = VAR_4->ps_key };

 if (!VAR_4->ps_key)
     return;

 FUNC_1(VAR_3, &VAR_5);
 VAR_4->ps_key = 0;
}

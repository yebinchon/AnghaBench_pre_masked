
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_vif {int dummy; } ;
struct TYPE_2__ {int ampdu_factor; int ampdu_density; scalar_t__ ht_supported; } ;
struct ieee80211_sta {TYPE_1__ ht_cap; scalar_t__ drv_priv; } ;
struct ath_softc {int dummy; } ;
struct ath_node {int maxampdu; int mpdudensity; struct ieee80211_vif* vif; struct ieee80211_sta* sta; struct ath_softc* sc; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ath_softc*,struct ath_node*) ;

__attribute__((used)) static void FUNC_2(struct ath_softc *VAR_1, struct ieee80211_sta *VAR_2,
       struct ieee80211_vif *VAR_3)
{
 struct ath_node *VAR_4;
 VAR_4 = (struct ath_node *)VAR_2->drv_priv;

 VAR_4->sc = VAR_1;
 VAR_4->sta = VAR_2;
 VAR_4->vif = VAR_3;

 FUNC_1(VAR_1, VAR_4);

 if (VAR_2->ht_cap.ht_supported) {
  VAR_4->maxampdu = 1 << (VAR_0 +
         VAR_2->ht_cap.ampdu_factor);
  VAR_4->mpdudensity = FUNC_0(VAR_2->ht_cap.ampdu_density);
 }
}

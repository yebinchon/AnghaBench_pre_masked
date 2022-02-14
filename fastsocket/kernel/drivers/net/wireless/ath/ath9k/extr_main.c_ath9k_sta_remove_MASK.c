
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_hw {struct ath_softc* priv; } ;
struct ath_softc {int dummy; } ;


 int FUNC_0 (struct ath_softc*,struct ieee80211_vif*,struct ieee80211_sta*) ;
 int FUNC_1 (struct ath_softc*,struct ieee80211_sta*) ;

__attribute__((used)) static int FUNC_2(struct ieee80211_hw *VAR_0,
       struct ieee80211_vif *VAR_1,
       struct ieee80211_sta *VAR_2)
{
 struct ath_softc *VAR_3 = VAR_0->priv;

 FUNC_0(VAR_3, VAR_1, VAR_2);
 FUNC_1(VAR_3, VAR_2);

 return 0;
}

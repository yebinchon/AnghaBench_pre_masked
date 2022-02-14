
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct ath_softc* priv; } ;
struct ath_softc {int mutex; int sc_ah; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ath_softc*) ;
 int FUNC_2 (struct ath_softc*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static u64 FUNC_5(struct ieee80211_hw *VAR_0, struct ieee80211_vif *VAR_1)
{
 struct ath_softc *VAR_2 = VAR_0->priv;
 u64 VAR_3;

 FUNC_3(&VAR_2->mutex);
 FUNC_2(VAR_2);
 VAR_3 = FUNC_0(VAR_2->sc_ah);
 FUNC_1(VAR_2);
 FUNC_4(&VAR_2->mutex);

 return VAR_3;
}

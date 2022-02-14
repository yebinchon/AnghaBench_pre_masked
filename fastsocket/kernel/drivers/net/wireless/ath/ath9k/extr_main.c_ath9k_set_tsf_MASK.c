
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct ath_softc* priv; } ;
struct ath_softc {int mutex; int sc_ah; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ath_softc*) ;
 int FUNC_2 (struct ath_softc*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_0,
     struct ieee80211_vif *VAR_1,
     u64 VAR_2)
{
 struct ath_softc *VAR_3 = VAR_0->priv;

 FUNC_3(&VAR_3->mutex);
 FUNC_2(VAR_3);
 FUNC_0(VAR_3->sc_ah, VAR_2);
 FUNC_1(VAR_3);
 FUNC_4(&VAR_3->mutex);
}

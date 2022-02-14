
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ieee80211_hw {struct ath_softc* priv; } ;
struct ath_softc {int ant_rx; int ant_tx; } ;



__attribute__((used)) static int FUNC_0(struct ieee80211_hw *VAR_0, u32 *VAR_1, u32 *VAR_2)
{
 struct ath_softc *VAR_3 = VAR_0->priv;

 *VAR_1 = VAR_3->ant_tx;
 *VAR_2 = VAR_3->ant_rx;
 return 0;
}

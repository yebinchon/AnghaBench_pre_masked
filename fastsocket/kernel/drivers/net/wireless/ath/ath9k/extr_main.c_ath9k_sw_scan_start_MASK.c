
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_hw {struct ath_softc* priv; } ;
struct ath_softc {int scanning; } ;



__attribute__((used)) static void FUNC_0(struct ieee80211_hw *VAR_0)
{
 struct ath_softc *VAR_1 = VAR_0->priv;

 VAR_1->scanning = 1;
}

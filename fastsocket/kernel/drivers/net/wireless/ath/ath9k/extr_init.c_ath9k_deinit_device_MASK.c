
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_hw {int wiphy; } ;
struct ath_softc {struct ieee80211_hw* hw; } ;


 int FUNC_0 (struct ath_softc*) ;
 int FUNC_1 (struct ath_softc*) ;
 int FUNC_2 (struct ath_softc*) ;
 int FUNC_3 (struct ath_softc*) ;
 int FUNC_4 (struct ath_softc*) ;
 int FUNC_5 (struct ath_softc*) ;
 int FUNC_6 (struct ieee80211_hw*) ;
 int FUNC_7 (int ) ;

void FUNC_8(struct ath_softc *VAR_0)
{
 struct ieee80211_hw *VAR_1 = VAR_0->hw;

 FUNC_3(VAR_0);

 FUNC_7(VAR_0->hw->wiphy);
 FUNC_4(VAR_0);

 FUNC_2(VAR_0);

 FUNC_0(VAR_0);
 FUNC_6(VAR_1);
 FUNC_5(VAR_0);
 FUNC_1(VAR_0);
}

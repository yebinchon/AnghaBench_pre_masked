
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211_hw {struct ath_softc* priv; } ;
struct ath_softc {int mutex; struct ath_hw* sc_ah; } ;
struct ath_hw {int coverage_class; } ;


 int FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_softc*) ;
 int FUNC_2 (struct ath_softc*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_0, u8 VAR_1)
{
 struct ath_softc *VAR_2 = VAR_0->priv;
 struct ath_hw *VAR_3 = VAR_2->sc_ah;

 FUNC_3(&VAR_2->mutex);
 VAR_3->coverage_class = VAR_1;

 FUNC_2(VAR_2);
 FUNC_0(VAR_3);
 FUNC_1(VAR_2);

 FUNC_4(&VAR_2->mutex);
}

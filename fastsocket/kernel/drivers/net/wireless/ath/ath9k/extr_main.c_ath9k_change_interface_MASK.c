
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_vif {int type; int p2p; } ;
struct ieee80211_hw {struct ath_softc* priv; } ;
struct ath_softc {int mutex; int sc_ah; } ;
struct ath_common {int dummy; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;


 int VAR_0 ;
 int FUNC_0 (struct ath_softc*,struct ieee80211_vif*) ;
 int FUNC_1 (struct ath_softc*,struct ieee80211_vif*) ;
 int FUNC_2 (struct ieee80211_hw*,struct ieee80211_vif*) ;
 struct ath_common* FUNC_3 (int ) ;
 int FUNC_4 (struct ath_softc*) ;
 int FUNC_5 (struct ath_softc*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct ath_common*,int ,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct ieee80211_hw *VAR_1,
      struct ieee80211_vif *VAR_2,
      enum nl80211_iftype VAR_3,
      bool VAR_4)
{
 struct ath_softc *VAR_5 = VAR_1->priv;
 struct ath_common *VAR_6 = FUNC_3(VAR_5->sc_ah);

 FUNC_7(VAR_6, VAR_0, "Change Interface\n");
 FUNC_8(&VAR_5->mutex);

 if (FUNC_6(VAR_2->type))
  FUNC_1(VAR_5, VAR_2);

 VAR_2->type = VAR_3;
 VAR_2->p2p = VAR_4;

 FUNC_5(VAR_5);
 FUNC_2(VAR_1, VAR_2);
 FUNC_4(VAR_5);

 if (FUNC_6(VAR_2->type))
  FUNC_0(VAR_5, VAR_2);

 FUNC_9(&VAR_5->mutex);
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_vif {int type; } ;
struct ieee80211_hw {struct ath_softc* priv; } ;
struct ath_softc {int mutex; int nvifs; int sc_ah; } ;
struct ath_common {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath_softc*,struct ieee80211_vif*) ;
 int FUNC_1 (struct ieee80211_hw*,int *) ;
 struct ath_common* FUNC_2 (int ) ;
 int FUNC_3 (struct ath_softc*) ;
 int FUNC_4 (struct ath_softc*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct ath_common*,int ,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct ieee80211_hw *VAR_1,
       struct ieee80211_vif *VAR_2)
{
 struct ath_softc *VAR_3 = VAR_1->priv;
 struct ath_common *VAR_4 = FUNC_2(VAR_3->sc_ah);

 FUNC_6(VAR_4, VAR_0, "Detach Interface\n");

 FUNC_7(&VAR_3->mutex);

 VAR_3->nvifs--;

 if (FUNC_5(VAR_2->type))
  FUNC_0(VAR_3, VAR_2);

 FUNC_4(VAR_3);
 FUNC_1(VAR_1, ((void*)0));
 FUNC_3(VAR_3);

 FUNC_8(&VAR_3->mutex);
}

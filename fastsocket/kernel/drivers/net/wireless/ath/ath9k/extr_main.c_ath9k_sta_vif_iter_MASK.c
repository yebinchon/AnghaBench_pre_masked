
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211_vif {scalar_t__ type; scalar_t__ drv_priv; } ;
struct ath_vif {scalar_t__ primary_sta_vif; } ;
struct ath_softc {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ath_softc*,struct ieee80211_vif*) ;

__attribute__((used)) static void FUNC_1(void *VAR_1, u8 *VAR_2, struct ieee80211_vif *VAR_3)
{
 struct ath_softc *VAR_4 = VAR_1;
 struct ath_vif *VAR_5 = (void *)VAR_3->drv_priv;

 if (VAR_3->type != VAR_0)
  return;

 if (VAR_5->primary_sta_vif)
  FUNC_0(VAR_4, VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_vif {int dummy; } ;
struct TYPE_2__ {int ht_supported; } ;
struct ieee80211_sta {TYPE_1__ ht_cap; scalar_t__ drv_priv; } ;
struct ieee80211_hw {struct ath_softc* priv; } ;
struct ath_softc {int dummy; } ;
struct ath_node {int sleeping; } ;
typedef enum sta_notify_cmd { ____Placeholder_sta_notify_cmd } sta_notify_cmd ;




 int FUNC_0 (struct ieee80211_sta*,struct ath_softc*,struct ath_node*) ;
 int FUNC_1 (struct ath_softc*,struct ath_node*) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_0,
    struct ieee80211_vif *VAR_1,
    enum sta_notify_cmd VAR_2,
    struct ieee80211_sta *VAR_3)
{
 struct ath_softc *VAR_4 = VAR_0->priv;
 struct ath_node *VAR_5 = (struct ath_node *) VAR_3->drv_priv;

 if (!VAR_3->ht_cap.ht_supported)
  return;

 switch (VAR_2) {
 case 128:
  VAR_5->sleeping = 1;
  FUNC_0(VAR_3, VAR_4, VAR_5);
  break;
 case 129:
  VAR_5->sleeping = 0;
  FUNC_1(VAR_4, VAR_5);
  break;
 }
}

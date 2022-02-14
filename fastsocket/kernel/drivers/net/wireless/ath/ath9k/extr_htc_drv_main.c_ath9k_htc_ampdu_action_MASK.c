
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u16 ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {scalar_t__ drv_priv; int addr; } ;
struct ieee80211_hw {struct ath9k_htc_priv* priv; } ;
struct ath9k_htc_sta {int * tid_state; } ;
struct TYPE_2__ {int tx_lock; } ;
struct ath9k_htc_priv {int mutex; int ah; TYPE_1__ tx; } ;
typedef enum ieee80211_ampdu_mlme_action { ____Placeholder_ieee80211_ampdu_mlme_action } ieee80211_ampdu_mlme_action ;


 int VAR_0 ;







 int FUNC_0 (struct ath9k_htc_priv*) ;
 int FUNC_1 (struct ath9k_htc_priv*) ;
 int FUNC_2 (struct ath9k_htc_priv*,struct ieee80211_vif*,struct ieee80211_sta*,int,size_t) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct ieee80211_vif*,int ,size_t) ;
 int FUNC_6 (struct ieee80211_vif*,int ,size_t) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct ieee80211_hw *VAR_1,
      struct ieee80211_vif *VAR_2,
      enum ieee80211_ampdu_mlme_action VAR_3,
      struct ieee80211_sta *VAR_4,
      u16 VAR_5, u16 *VAR_6, u8 VAR_7)
{
 struct ath9k_htc_priv *VAR_8 = VAR_1->priv;
 struct ath9k_htc_sta *VAR_9;
 int VAR_10 = 0;

 FUNC_7(&VAR_8->mutex);
 FUNC_1(VAR_8);

 switch (VAR_3) {
 case 134:
  break;
 case 133:
  break;
 case 131:
  VAR_10 = FUNC_2(VAR_8, VAR_2, VAR_4, VAR_3, VAR_5);
  if (!VAR_10)
   FUNC_5(VAR_2, VAR_4->addr, VAR_5);
  break;
 case 130:
 case 129:
 case 128:
  FUNC_2(VAR_8, VAR_2, VAR_4, VAR_3, VAR_5);
  FUNC_6(VAR_2, VAR_4->addr, VAR_5);
  break;
 case 132:
  VAR_9 = (struct ath9k_htc_sta *) VAR_4->drv_priv;
  FUNC_9(&VAR_8->tx.tx_lock);
  VAR_9->tid_state[VAR_5] = VAR_0;
  FUNC_10(&VAR_8->tx.tx_lock);
  break;
 default:
  FUNC_4(FUNC_3(VAR_8->ah), "Unknown AMPDU action\n");
 }

 FUNC_0(VAR_8);
 FUNC_8(&VAR_8->mutex);

 return VAR_10;
}

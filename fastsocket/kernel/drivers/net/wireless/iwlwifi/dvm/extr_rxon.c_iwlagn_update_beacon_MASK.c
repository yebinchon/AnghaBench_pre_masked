
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_priv {int beacon_skb; int hw; int mutex; } ;
struct ieee80211_vif {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct ieee80211_vif*) ;
 int FUNC_2 (struct iwl_priv*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct iwl_priv *VAR_1,
    struct ieee80211_vif *VAR_2)
{
 FUNC_3(&VAR_1->mutex);

 FUNC_0(VAR_1->beacon_skb);
 VAR_1->beacon_skb = FUNC_1(VAR_1->hw, VAR_2);
 if (!VAR_1->beacon_skb)
  return -VAR_0;
 return FUNC_2(VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm_vif {int tx_key_idx; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 struct iwl_mvm_vif* FUNC_0 (struct ieee80211_vif*) ;

void FUNC_1(struct ieee80211_hw *VAR_0,
         struct ieee80211_vif *VAR_1, int VAR_2)
{
 struct iwl_mvm_vif *VAR_3 = FUNC_0(VAR_1);

 VAR_3->tx_key_idx = VAR_2;
}

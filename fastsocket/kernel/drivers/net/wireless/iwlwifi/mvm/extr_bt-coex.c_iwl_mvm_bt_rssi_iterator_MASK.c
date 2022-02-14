
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iwl_mvm_vif {size_t ap_sta_id; } ;
struct iwl_mvm_sta {int bt_reduced_txpower; } ;
struct iwl_mvm {int mutex; int * fw_id_to_mac_id; } ;
struct iwl_bt_iterator_data {int reduced_tx_power; struct iwl_mvm* mvm; } ;
struct ieee80211_vif {scalar_t__ type; scalar_t__ drv_priv; } ;
struct ieee80211_sta {scalar_t__ drv_priv; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 struct ieee80211_sta* FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_2, u8 *VAR_3,
       struct ieee80211_vif *VAR_4)
{
 struct iwl_mvm_vif *VAR_5 = (void *)VAR_4->drv_priv;
 struct iwl_bt_iterator_data *VAR_6 = VAR_2;
 struct iwl_mvm *VAR_7 = VAR_6->mvm;

 struct ieee80211_sta *VAR_8;
 struct iwl_mvm_sta *VAR_9;

 if (VAR_4->type != VAR_1 ||
     VAR_5->ap_sta_id == VAR_0)
  return;

 VAR_8 = FUNC_1(VAR_7->fw_id_to_mac_id[VAR_5->ap_sta_id],
     FUNC_0(&VAR_7->mutex));
 VAR_9 = (void *)VAR_8->drv_priv;





 if (!VAR_9->bt_reduced_txpower)
  VAR_6->reduced_tx_power = 0;

}

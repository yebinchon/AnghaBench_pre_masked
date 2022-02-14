
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct iwl_mvm_vif {struct ieee80211_tx_queue_params* queue_params; } ;
struct iwl_mvm {int mutex; } ;
struct ieee80211_vif {scalar_t__ type; } ;
struct ieee80211_tx_queue_params {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 struct iwl_mvm* FUNC_0 (struct ieee80211_hw*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct iwl_mvm*,struct ieee80211_vif*) ;
 struct iwl_mvm_vif* FUNC_2 (struct ieee80211_vif*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct ieee80211_hw *VAR_1,
          struct ieee80211_vif *VAR_2, u16 VAR_3,
          const struct ieee80211_tx_queue_params *VAR_4)
{
 struct iwl_mvm *VAR_5 = FUNC_0(VAR_1);
 struct iwl_mvm_vif *VAR_6 = FUNC_2(VAR_2);

 VAR_6->queue_params[VAR_3] = *VAR_4;





 if (VAR_2->type == VAR_0) {
  int VAR_7;

  FUNC_3(&VAR_5->mutex);
  VAR_7 = FUNC_1(VAR_5, VAR_2);
  FUNC_4(&VAR_5->mutex);
  return VAR_7;
 }
 return 0;
}

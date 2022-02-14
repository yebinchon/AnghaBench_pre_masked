
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm_time_event_data {int dummy; } ;
struct iwl_mvm_vif {struct iwl_mvm_time_event_data time_event_data; } ;
struct iwl_mvm {int mutex; } ;
struct ieee80211_vif {int dummy; } ;


 int FUNC_0 (struct iwl_mvm*,struct iwl_mvm_vif*,struct iwl_mvm_time_event_data*) ;
 struct iwl_mvm_vif* FUNC_1 (struct ieee80211_vif*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct iwl_mvm *VAR_0,
         struct ieee80211_vif *VAR_1)
{
 struct iwl_mvm_vif *VAR_2 = FUNC_1(VAR_1);
 struct iwl_mvm_time_event_data *VAR_3 = &VAR_2->time_event_data;

 FUNC_2(&VAR_0->mutex);
 FUNC_0(VAR_0, VAR_2, VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm_vif {int monitor_active; int * phy_ctxt; int time_event_data; } ;
struct iwl_mvm {int mutex; } ;
struct ieee80211_vif {int type; } ;
struct ieee80211_hw {int dummy; } ;
struct ieee80211_chanctx_conf {int dummy; } ;


 struct iwl_mvm* FUNC_0 (struct ieee80211_hw*) ;
 int VAR_0 ;

 int FUNC_1 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_2 (struct iwl_mvm*,struct iwl_mvm_vif*,int *) ;
 int FUNC_3 (struct iwl_mvm*,int *) ;
 struct iwl_mvm_vif* FUNC_4 (struct ieee80211_vif*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct ieee80211_hw *VAR_1,
      struct ieee80211_vif *VAR_2,
      struct ieee80211_chanctx_conf *VAR_3)
{
 struct iwl_mvm *VAR_4 = FUNC_0(VAR_1);
 struct iwl_mvm_vif *VAR_5 = FUNC_4(VAR_2);

 FUNC_5(&VAR_4->mutex);

 FUNC_2(VAR_4, VAR_5, &VAR_5->time_event_data);

 if (VAR_2->type == VAR_0)
  goto out_unlock;

 switch (VAR_2->type) {
 case 128:
  VAR_5->monitor_active = 0;
  FUNC_3(VAR_4, ((void*)0));
  break;
 default:
  break;
 }

 FUNC_1(VAR_4, VAR_2);
out_unlock:
 VAR_5->phy_ctxt = ((void*)0);
 FUNC_6(&VAR_4->mutex);
}

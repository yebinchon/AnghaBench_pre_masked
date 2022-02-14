
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm {int status; int mutex; int trans; int hw; } ;
struct iwl_d3_iter_data {struct ieee80211_vif* vif; scalar_t__ error; struct iwl_mvm* mvm; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum iwl_d3_status { ____Placeholder_iwl_d3_status } iwl_d3_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwl_mvm*,char*) ;
 struct iwl_mvm* FUNC_1 (struct ieee80211_hw*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int ,struct iwl_d3_iter_data*) ;
 int FUNC_4 (struct ieee80211_vif*) ;
 int VAR_3 ;
 int FUNC_5 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_6 (int ,int*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int *) ;

int FUNC_10(struct ieee80211_hw *VAR_4)
{
 struct iwl_mvm *VAR_5 = FUNC_1(VAR_4);
 struct iwl_d3_iter_data VAR_6 = {
  .mvm = VAR_5,
 };
 struct ieee80211_vif *VAR_7 = ((void*)0);
 int VAR_8;
 enum iwl_d3_status VAR_9;

 FUNC_7(&VAR_5->mutex);


 FUNC_3(
  VAR_5->hw, VAR_0,
  VAR_3, &VAR_6);

 if (FUNC_2(VAR_6.error || !VAR_6.vif))
  goto out_unlock;

 VAR_7 = VAR_6.vif;

 VAR_8 = FUNC_6(VAR_5->trans, &VAR_9);
 if (VAR_8)
  goto out_unlock;

 if (VAR_9 != VAR_1) {
  FUNC_0(VAR_5, "Device was reset during suspend\n");
  goto out_unlock;
 }

 FUNC_5(VAR_5, VAR_7);

 out_unlock:
 FUNC_8(&VAR_5->mutex);

 if (VAR_7)
  FUNC_4(VAR_7);


 FUNC_9(VAR_2, &VAR_5->status);
 return 1;
}

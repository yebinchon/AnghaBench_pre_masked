
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm_vif {int ap_active; int bcast_sta; } ;
struct iwl_mvm {int mutex; scalar_t__ p2p_device_vif; } ;
struct ieee80211_vif {scalar_t__ p2p; } ;
struct ieee80211_hw {int dummy; } ;


 struct iwl_mvm* FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_2 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_3 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_4 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_5 (struct iwl_mvm*,scalar_t__) ;
 int FUNC_6 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_7 (struct iwl_mvm*,struct ieee80211_vif*,int *) ;
 int FUNC_8 (struct iwl_mvm*,int *) ;
 int FUNC_9 (struct iwl_mvm*,struct ieee80211_vif*) ;
 struct iwl_mvm_vif* FUNC_10 (struct ieee80211_vif*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct ieee80211_hw *VAR_0, struct ieee80211_vif *VAR_1)
{
 struct iwl_mvm *VAR_2 = FUNC_0(VAR_0);
 struct iwl_mvm_vif *VAR_3 = FUNC_10(VAR_1);
 int VAR_4;

 FUNC_11(&VAR_2->mutex);


 VAR_4 = FUNC_4(VAR_2, VAR_1);
 if (VAR_4)
  goto out_unlock;


 VAR_4 = FUNC_3(VAR_2, VAR_1);
 if (VAR_4)
  goto out_unlock;


 VAR_4 = FUNC_1(VAR_2, VAR_1);
 if (VAR_4)
  goto out_remove;

 VAR_3->ap_active = 1;



 VAR_4 = FUNC_7(VAR_2, VAR_1, &VAR_3->bcast_sta);
 if (VAR_4)
  goto out_unbind;

 VAR_4 = FUNC_9(VAR_2, VAR_1);
 if (VAR_4)
  goto out_rm_bcast;


 if (VAR_1->p2p && VAR_2->p2p_device_vif)
  FUNC_5(VAR_2, VAR_2->p2p_device_vif);

 FUNC_12(&VAR_2->mutex);
 return 0;

out_rm_bcast:
 FUNC_8(VAR_2, &VAR_3->bcast_sta);
out_unbind:
 FUNC_2(VAR_2, VAR_1);
out_remove:
 FUNC_6(VAR_2, VAR_1);
out_unlock:
 FUNC_12(&VAR_2->mutex);
 return VAR_4;
}

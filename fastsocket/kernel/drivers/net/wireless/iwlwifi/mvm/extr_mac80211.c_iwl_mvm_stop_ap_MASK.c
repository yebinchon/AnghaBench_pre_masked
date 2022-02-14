
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
 int FUNC_2 (struct iwl_mvm*,scalar_t__) ;
 int FUNC_3 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_4 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_5 (struct iwl_mvm*,int *) ;
 int FUNC_6 (struct iwl_mvm*,int *) ;
 struct iwl_mvm_vif* FUNC_7 (struct ieee80211_vif*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct ieee80211_hw *VAR_0, struct ieee80211_vif *VAR_1)
{
 struct iwl_mvm *VAR_2 = FUNC_0(VAR_0);
 struct iwl_mvm_vif *VAR_3 = FUNC_7(VAR_1);

 FUNC_4(VAR_2, VAR_1);

 FUNC_8(&VAR_2->mutex);

 VAR_3->ap_active = 0;


 if (VAR_1->p2p && VAR_2->p2p_device_vif)
  FUNC_2(VAR_2, VAR_2->p2p_device_vif);

 FUNC_6(VAR_2, ((void*)0));
 FUNC_5(VAR_2, &VAR_3->bcast_sta);
 FUNC_1(VAR_2, VAR_1);
 FUNC_3(VAR_2, VAR_1);

 FUNC_9(&VAR_2->mutex);
}

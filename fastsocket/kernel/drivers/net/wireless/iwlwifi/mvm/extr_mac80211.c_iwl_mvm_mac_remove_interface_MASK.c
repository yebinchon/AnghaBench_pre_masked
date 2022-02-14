
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm_vif {int * phy_ctxt; int bcast_sta; } ;
struct iwl_mvm {int vif_count; int mutex; int hw; int * p2p_device_vif; } ;
struct ieee80211_vif {scalar_t__ type; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_mvm*,char*,int) ;
 struct iwl_mvm* FUNC_1 (struct ieee80211_hw*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,int ,int ,struct iwl_mvm*) ;
 int FUNC_3 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_4 (struct iwl_mvm*,int *) ;
 int FUNC_5 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_6 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_7 (struct iwl_mvm*,int *) ;
 int VAR_3 ;
 int FUNC_8 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_9 (struct iwl_mvm*,int *) ;
 int FUNC_10 (struct iwl_mvm*,struct ieee80211_vif*) ;
 struct iwl_mvm_vif* FUNC_11 (struct ieee80211_vif*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static void FUNC_14(struct ieee80211_hw *VAR_4,
      struct ieee80211_vif *VAR_5)
{
 struct iwl_mvm *VAR_6 = FUNC_1(VAR_4);
 struct iwl_mvm_vif *VAR_7 = FUNC_11(VAR_5);

 FUNC_8(VAR_6, VAR_5);

 FUNC_12(&VAR_6->mutex);

 FUNC_10(VAR_6, VAR_5);





 if (VAR_5->type == VAR_1) {
  FUNC_4(VAR_6, &VAR_7->bcast_sta);
  goto out_release;
 }

 if (VAR_5->type == VAR_2) {
  VAR_6->p2p_device_vif = ((void*)0);
  FUNC_9(VAR_6, &VAR_7->bcast_sta);
  FUNC_3(VAR_6, VAR_5);
  FUNC_7(VAR_6, VAR_7->phy_ctxt);
  VAR_7->phy_ctxt = ((void*)0);
 }







 if (VAR_6->vif_count && VAR_5->type != VAR_2)
  VAR_6->vif_count--;
 FUNC_0(VAR_6, "Currently %d interfaces active\n",
      VAR_6->vif_count);
 if (VAR_6->vif_count == 1) {
  FUNC_2(
     VAR_6->hw, VAR_0,
     VAR_3, VAR_6);
 }

 FUNC_6(VAR_6, VAR_5);

out_release:
 FUNC_5(VAR_6, VAR_5);
 FUNC_13(&VAR_6->mutex);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct iwl_mvm_vif {int * phy_ctxt; int bcast_sta; } ;
struct iwl_mvm {int vif_count; int mutex; TYPE_3__* hw; struct ieee80211_vif* p2p_device_vif; int phy_ctxt_roc; } ;
struct ieee80211_vif {scalar_t__ type; } ;
struct ieee80211_hw {int dummy; } ;
struct ieee80211_channel {int dummy; } ;
struct cfg80211_chan_def {int dummy; } ;
struct TYPE_7__ {TYPE_2__* wiphy; } ;
struct TYPE_6__ {TYPE_1__** bands; } ;
struct TYPE_5__ {struct ieee80211_channel* channels; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwl_mvm*,char*,...) ;
 int FUNC_1 (struct iwl_mvm*,char*) ;
 struct iwl_mvm* FUNC_2 (struct ieee80211_hw*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (struct cfg80211_chan_def*,struct ieee80211_channel*,int ) ;
 int FUNC_4 (TYPE_3__*,int ,int ,struct iwl_mvm*) ;
 int FUNC_5 (TYPE_3__*,int ,int ,struct iwl_mvm*) ;
 int FUNC_6 (struct iwl_mvm*,struct ieee80211_vif*,int *) ;
 int FUNC_7 (struct iwl_mvm*,int *,int ) ;
 int FUNC_8 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_9 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_10 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_11 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_12 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_13 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_14 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_15 (struct iwl_mvm*,int *,struct cfg80211_chan_def*,int,int) ;
 int FUNC_16 (struct iwl_mvm*,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_17 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_18 (struct iwl_mvm*,struct ieee80211_vif*) ;
 struct iwl_mvm_vif* FUNC_19 (struct ieee80211_vif*) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;

__attribute__((used)) static int FUNC_22(struct ieee80211_hw *VAR_7,
         struct ieee80211_vif *VAR_8)
{
 struct iwl_mvm *VAR_9 = FUNC_2(VAR_7);
 struct iwl_mvm_vif *VAR_10 = FUNC_19(VAR_8);
 int VAR_11;







 FUNC_20(&VAR_9->mutex);


 VAR_11 = FUNC_11(VAR_9, VAR_8);
 if (VAR_11)
  goto out_unlock;
 if (VAR_8->type == VAR_3) {
  u32 VAR_12 = FUNC_14(VAR_9, VAR_8);
  VAR_11 = FUNC_7(VAR_9, &VAR_10->bcast_sta,
            VAR_12);
  if (VAR_11) {
   FUNC_1(VAR_9, "Failed to allocate bcast sta\n");
   goto out_release;
  }

  goto out_unlock;
 }
 if (VAR_8->type != VAR_4)
  VAR_9->vif_count++;
 if (VAR_9->vif_count > 1) {
  FUNC_0(VAR_9,
       "Disable power on existing interfaces\n");
  FUNC_5(
         VAR_9->hw,
         VAR_1,
         VAR_5, VAR_9);
 }

 VAR_11 = FUNC_10(VAR_9, VAR_8);
 if (VAR_11)
  goto out_release;





 FUNC_17(VAR_9, VAR_8);






 if (VAR_8->type == VAR_4) {
  struct ieee80211_channel *VAR_13;
  struct cfg80211_chan_def VAR_14;

  VAR_10->phy_ctxt = &VAR_9->phy_ctxt_roc;






  VAR_13 = &VAR_9->hw->wiphy->bands[VAR_0]->channels[0];
  FUNC_3(&VAR_14, VAR_13, VAR_2);
  VAR_11 = FUNC_15(VAR_9, VAR_10->phy_ctxt,
        &VAR_14, 1, 1);
  if (VAR_11)
   goto out_remove_mac;

  VAR_11 = FUNC_8(VAR_9, VAR_8);
  if (VAR_11)
   goto out_remove_phy;

  VAR_11 = FUNC_6(VAR_9, VAR_8, &VAR_10->bcast_sta);
  if (VAR_11)
   goto out_unbind;



  VAR_9->p2p_device_vif = VAR_8;
 }

 FUNC_18(VAR_9, VAR_8);
 goto out_unlock;

 out_unbind:
 FUNC_9(VAR_9, VAR_8);
 out_remove_phy:
 FUNC_16(VAR_9, VAR_10->phy_ctxt);
 out_remove_mac:
 VAR_10->phy_ctxt = ((void*)0);
 FUNC_13(VAR_9, VAR_8);
 out_release:






 if (VAR_8->type != VAR_4)
  VAR_9->vif_count--;
 FUNC_0(VAR_9, "Currently %d interfaces active\n",
      VAR_9->vif_count);
 if (VAR_9->vif_count == 1) {
  FUNC_4(
     VAR_9->hw, VAR_1,
     VAR_6, VAR_9);
 }
 FUNC_12(VAR_9, VAR_8);
 out_unlock:
 FUNC_21(&VAR_9->mutex);

 return VAR_11;
}

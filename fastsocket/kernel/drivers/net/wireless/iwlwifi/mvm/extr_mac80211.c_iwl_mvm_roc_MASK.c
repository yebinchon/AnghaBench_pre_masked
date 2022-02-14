
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm {int mutex; int phy_ctxt_roc; } ;
struct ieee80211_vif {int type; } ;
struct ieee80211_hw {int dummy; } ;
struct ieee80211_channel {int hw_value; } ;
struct cfg80211_chan_def {int dummy; } ;
typedef enum ieee80211_roc_type { ____Placeholder_ieee80211_roc_type } ieee80211_roc_type ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_mvm*,char*,...) ;
 int FUNC_1 (struct iwl_mvm*,char*,int ) ;
 struct iwl_mvm* FUNC_2 (struct ieee80211_hw*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct cfg80211_chan_def*,struct ieee80211_channel*,int ) ;
 int FUNC_4 (struct iwl_mvm*,int *,struct cfg80211_chan_def*,int,int) ;
 int FUNC_5 (struct iwl_mvm*,struct ieee80211_vif*,int,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct ieee80211_hw *VAR_3,
         struct ieee80211_vif *VAR_4,
         struct ieee80211_channel *VAR_5,
         int VAR_6,
         enum ieee80211_roc_type VAR_7)
{
 struct iwl_mvm *VAR_8 = FUNC_2(VAR_3);
 struct cfg80211_chan_def VAR_9;
 int VAR_10;

 if (VAR_4->type != VAR_2) {
  FUNC_1(VAR_8, "vif isn't a P2P_DEVICE: %d\n", VAR_4->type);
  return -VAR_0;
 }

 FUNC_0(VAR_8, "enter (%d, %d, %d)\n", VAR_5->hw_value,
      VAR_6, VAR_7);

 FUNC_6(&VAR_8->mutex);

 FUNC_3(&VAR_9, VAR_5, VAR_1);
 VAR_10 = FUNC_4(VAR_8, &VAR_8->phy_ctxt_roc,
           &VAR_9, 1, 1);


 VAR_10 = FUNC_5(VAR_8, VAR_4, VAR_6, VAR_7);

 FUNC_7(&VAR_8->mutex);
 FUNC_0(VAR_8, "leave\n");

 return VAR_10;
}

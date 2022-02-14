
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct iwl_mvm_sta {int mac_id_n_color; int sta_id; } ;
struct iwl_mvm_add_sta_cmd {int sleep_state_flags; int mac_id_n_color; int sleep_tx_count; int modify_mask; int sta_id; int add_modify; } ;
struct iwl_mvm {int dummy; } ;
struct ieee80211_sta {scalar_t__ drv_priv; } ;
typedef enum ieee80211_frame_release_type { ____Placeholder_ieee80211_frame_release_type } ieee80211_frame_release_type ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iwl_mvm*,char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct iwl_mvm*,int ,int ,int,struct iwl_mvm_add_sta_cmd*) ;

void FUNC_4(struct iwl_mvm *VAR_7,
           struct ieee80211_sta *VAR_8,
           enum ieee80211_frame_release_type VAR_9,
           u16 VAR_10)
{
 u16 VAR_11 =
  (VAR_9 == VAR_2) ?
   VAR_6 : VAR_5;
 struct iwl_mvm_sta *VAR_12 = (void *)VAR_8->drv_priv;
 struct iwl_mvm_add_sta_cmd VAR_13 = {
  .add_modify = VAR_3,
  .sta_id = VAR_12->sta_id,
  .modify_mask = VAR_4,
  .sleep_tx_count = FUNC_1(VAR_10),
  .mac_id_n_color = FUNC_2(VAR_12->mac_id_n_color),




  .sleep_state_flags = FUNC_1(VAR_11),
 };
 int VAR_14;


 VAR_14 = FUNC_3(VAR_7, VAR_0, VAR_1, sizeof(VAR_13), &VAR_13);
 if (VAR_14)
  FUNC_0(VAR_7, "Failed to send ADD_STA command (%d)\n", VAR_14);
}

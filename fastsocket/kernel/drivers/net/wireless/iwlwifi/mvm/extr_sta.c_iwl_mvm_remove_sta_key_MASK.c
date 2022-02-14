
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct iwl_mvm_sta {int mac_id_n_color; struct ieee80211_vif* vif; } ;
struct TYPE_2__ {int key_offset; int key_flags; } ;
struct iwl_mvm_add_sta_cmd {size_t sta_id; int add_modify; int modify_mask; TYPE_1__ key; int mac_id_n_color; } ;
struct iwl_mvm {int mutex; int * fw_id_to_mac_id; int fw_key_table; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {scalar_t__ drv_priv; } ;
struct ieee80211_key_conf {int keyidx; scalar_t__ cipher; int flags; int hw_key_idx; } ;
typedef int cmd ;
typedef int __le16 ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct iwl_mvm*,char*,...) ;
 int FUNC_1 (struct iwl_mvm*,char*,...) ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ VAR_14 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 size_t FUNC_6 (struct ieee80211_vif*,struct ieee80211_sta*) ;
 int FUNC_7 (struct iwl_mvm*,int ,int,struct iwl_mvm_add_sta_cmd*,int*) ;
 int FUNC_8 (struct iwl_mvm*,struct ieee80211_key_conf*,size_t,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 struct ieee80211_sta* FUNC_11 (int ,int ) ;

int FUNC_12(struct iwl_mvm *VAR_15,
      struct ieee80211_vif *VAR_16,
      struct ieee80211_sta *VAR_17,
      struct ieee80211_key_conf *VAR_18)
{
 struct iwl_mvm_sta *VAR_19;
 struct iwl_mvm_add_sta_cmd VAR_20 = {};
 __le16 VAR_21;
 int VAR_22, VAR_23;
 u8 VAR_24;

 FUNC_9(&VAR_15->mutex);


 VAR_24 = FUNC_6(VAR_16, VAR_17);

 FUNC_0(VAR_15, "mvm remove dynamic key: idx=%d sta=%d\n",
        VAR_18->keyidx, VAR_24);

 if (VAR_18->cipher == VAR_14)
  return FUNC_8(VAR_15, VAR_18, VAR_24, 1);

 VAR_22 = FUNC_3(VAR_18->hw_key_idx, VAR_15->fw_key_table);
 if (!VAR_22) {
  FUNC_1(VAR_15, "offset %d not used in fw key table.\n",
   VAR_18->hw_key_idx);
  return -VAR_3;
 }

 if (VAR_24 == VAR_5) {
  FUNC_0(VAR_15, "station non-existent, early return.\n");
  return 0;
 }







 if (!VAR_17) {
  VAR_17 = FUNC_11(VAR_15->fw_id_to_mac_id[VAR_24],
      FUNC_10(&VAR_15->mutex));
  if (!VAR_17) {
   FUNC_1(VAR_15, "Invalid station id\n");
   return -VAR_1;
  }
 }

 VAR_19 = (struct iwl_mvm_sta *)VAR_17->drv_priv;
 if (FUNC_2(VAR_19->vif != VAR_16))
  return -VAR_1;

 VAR_21 = FUNC_4((VAR_18->keyidx << VAR_7) &
     VAR_6);
 VAR_21 |= FUNC_4(VAR_8 | VAR_9);
 VAR_21 |= FUNC_4(VAR_11);

 if (!(VAR_18->flags & VAR_4))
  VAR_21 |= FUNC_4(VAR_10);

 VAR_20.mac_id_n_color = FUNC_5(VAR_19->mac_id_n_color);
 VAR_20.key.key_flags = VAR_21;
 VAR_20.key.key_offset = VAR_18->hw_key_idx;
 VAR_20.sta_id = VAR_24;

 VAR_20.modify_mask = VAR_13;
 VAR_20.add_modify = VAR_12;

 VAR_23 = 128;
 VAR_22 = FUNC_7(VAR_15, VAR_0, sizeof(VAR_20),
       &VAR_20, &VAR_23);

 switch (VAR_23) {
 case 128:
  FUNC_0(VAR_15, "MODIFY_STA: remove sta key passed\n");
  break;
 default:
  VAR_22 = -VAR_2;
  FUNC_1(VAR_15, "MODIFY_STA: remove sta key failed\n");
  break;
 }

 return VAR_22;
}

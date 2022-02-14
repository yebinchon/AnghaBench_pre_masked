
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct iwl_rxon_context {int key_mapping_keys; int vif; } ;
struct iwl_priv {int ucode_key_table; int mutex; int sta_lock; TYPE_1__* stations; } ;
struct TYPE_6__ {int modify_mask; } ;
struct TYPE_5__ {int key_flags; int key_offset; } ;
struct iwl_addsta_cmd {int mode; TYPE_3__ sta; TYPE_2__ key; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_key_conf {int keyidx; int flags; int hw_key_idx; } ;
typedef int sta_cmd ;
typedef int __le16 ;
struct TYPE_4__ {int used; int sta; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iwl_priv*,char*,int,size_t) ;
 int FUNC_1 (struct iwl_priv*,char*,int ) ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct iwl_priv*,struct iwl_addsta_cmd*,int ) ;
 size_t FUNC_4 (struct iwl_priv*,int ,struct ieee80211_sta*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct iwl_addsta_cmd*,int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int *) ;

int FUNC_10(struct iwl_priv *VAR_12,
      struct iwl_rxon_context *VAR_13,
      struct ieee80211_key_conf *VAR_14,
      struct ieee80211_sta *VAR_15)
{
 struct iwl_addsta_cmd VAR_16;
 u8 VAR_17 = FUNC_4(VAR_12, VAR_13->vif, VAR_15);
 __le16 VAR_18;


 if (VAR_17 == VAR_3)
  return -VAR_1;

 FUNC_7(&VAR_12->sta_lock);
 FUNC_6(&VAR_16, &VAR_12->stations[VAR_17].sta, sizeof(VAR_16));
 if (!(VAR_12->stations[VAR_17].used & VAR_4))
  VAR_17 = VAR_3;
 FUNC_8(&VAR_12->sta_lock);

 if (VAR_17 == VAR_3)
  return 0;

 FUNC_5(&VAR_12->mutex);

 VAR_13->key_mapping_keys--;

 FUNC_0(VAR_12, "Remove dynamic key: idx=%d sta=%d\n",
        VAR_14->keyidx, VAR_17);

 if (!FUNC_9(VAR_14->hw_key_idx, &VAR_12->ucode_key_table))
  FUNC_1(VAR_12, "offset %d not used in uCode key table.\n",
   VAR_14->hw_key_idx);

 VAR_18 = FUNC_2(VAR_14->keyidx << VAR_7);
 VAR_18 |= VAR_8 | VAR_9 |
       VAR_6;

 if (!(VAR_14->flags & VAR_2))
  VAR_18 |= VAR_10;

 VAR_16.key.key_flags = VAR_18;
 VAR_16.key.key_offset = VAR_14->hw_key_idx;
 VAR_16.sta.modify_mask = VAR_11;
 VAR_16.mode = VAR_5;

 return FUNC_3(VAR_12, &VAR_16, VAR_0);
}

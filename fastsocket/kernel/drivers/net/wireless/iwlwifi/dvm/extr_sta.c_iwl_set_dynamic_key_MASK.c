
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct TYPE_3__ {scalar_t__* bssid_addr; } ;
struct iwl_rxon_context {int key_mapping_keys; TYPE_1__ active; int vif; } ;
struct iwl_priv {int ucode_key_table; int mutex; } ;
struct ieee80211_sta {scalar_t__* addr; } ;
struct TYPE_4__ {int iv32; } ;
struct ieee80211_key_seq {TYPE_2__ tkip; } ;
struct ieee80211_key_conf {scalar_t__ hw_key_idx; int cipher; int keyidx; int keylen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iwl_priv*,char*,int,int ,int ,scalar_t__*,int) ;
 int FUNC_1 (struct iwl_priv*,char*,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;




 int FUNC_2 (scalar_t__,int *) ;
 int FUNC_3 (struct ieee80211_key_conf*,int ,struct ieee80211_key_seq*) ;
 int FUNC_4 (struct ieee80211_key_conf*,scalar_t__ const*,int ,int *) ;
 scalar_t__ FUNC_5 (struct iwl_priv*) ;
 scalar_t__ FUNC_6 (struct iwl_priv*,int ,struct ieee80211_sta*) ;
 int FUNC_7 (struct iwl_priv*,struct ieee80211_key_conf*,scalar_t__,int ,int *,int ) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct iwl_priv *VAR_5,
   struct iwl_rxon_context *VAR_6,
   struct ieee80211_key_conf *VAR_7,
   struct ieee80211_sta *VAR_8)
{
 struct ieee80211_key_seq VAR_9;
 u16 VAR_10[5];
 int VAR_11;
 u8 VAR_12 = FUNC_6(VAR_5, VAR_6->vif, VAR_8);
 const u8 *VAR_13;

 if (VAR_12 == VAR_3)
  return -VAR_1;

 FUNC_8(&VAR_5->mutex);

 VAR_7->hw_key_idx = FUNC_5(VAR_5);
 if (VAR_7->hw_key_idx == VAR_4)
  return -VAR_2;

 VAR_6->key_mapping_keys++;

 switch (VAR_7->cipher) {
 case 130:
  if (VAR_8)
   VAR_13 = VAR_8->addr;
  else
   VAR_13 = VAR_6->active.bssid_addr;


  FUNC_3(VAR_7, 0, &VAR_9);
  FUNC_4(VAR_7, VAR_13, VAR_9.tkip.iv32, VAR_10);
  VAR_11 = FUNC_7(VAR_5, VAR_7, VAR_12,
       VAR_9.tkip.iv32, VAR_10, VAR_0);
  break;
 case 131:
 case 128:
 case 129:
  VAR_11 = FUNC_7(VAR_5, VAR_7, VAR_12,
       0, ((void*)0), VAR_0);
  break;
 default:
  FUNC_1(VAR_5, "Unknown cipher %x\n", VAR_7->cipher);
  VAR_11 = -VAR_1;
 }

 if (VAR_11) {
  VAR_6->key_mapping_keys--;
  FUNC_2(VAR_7->hw_key_idx, &VAR_5->ucode_key_table);
 }

 FUNC_0(VAR_5, "Set dynamic key: cipher=%x len=%d idx=%d sta=%pM ret=%d\n",
        VAR_7->cipher, VAR_7->keylen, VAR_7->keyidx,
        VAR_8 ? VAR_8->addr : ((void*)0), VAR_11);

 return VAR_11;
}

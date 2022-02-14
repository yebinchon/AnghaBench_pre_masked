
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct iwl_mvm_sta {struct ieee80211_vif* vif; } ;
struct iwl_mvm {int fw_key_table; int mutex; int * fw_id_to_mac_id; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int addr; scalar_t__ drv_priv; } ;
struct TYPE_2__ {int iv32; } ;
struct ieee80211_key_seq {TYPE_1__ tkip; } ;
struct ieee80211_key_conf {int cipher; scalar_t__ hw_key_idx; int keyidx; int keylen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ieee80211_sta*) ;
 int FUNC_1 (struct iwl_mvm*,char*,int,int ,int ,int ,int) ;
 int FUNC_2 (struct iwl_mvm*,char*,...) ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_5 ;


 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (struct ieee80211_key_conf*,int ,struct ieee80211_key_seq*) ;
 int FUNC_6 (struct ieee80211_key_conf*,size_t*,int ,int *) ;
 size_t FUNC_7 (struct ieee80211_vif*,struct ieee80211_sta*) ;
 size_t* FUNC_8 (struct iwl_mvm*,struct ieee80211_vif*,struct ieee80211_sta*) ;
 int FUNC_9 (struct iwl_mvm*,struct ieee80211_key_conf*,size_t,int) ;
 int FUNC_10 (struct iwl_mvm*,struct iwl_mvm_sta*,struct ieee80211_key_conf*,size_t,int ,int *,int ) ;
 scalar_t__ FUNC_11 (struct iwl_mvm*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 struct ieee80211_sta* FUNC_14 (int ,int ) ;

int FUNC_15(struct iwl_mvm *VAR_6,
   struct ieee80211_vif *VAR_7,
   struct ieee80211_sta *VAR_8,
   struct ieee80211_key_conf *VAR_9,
   bool VAR_10)
{
 struct iwl_mvm_sta *VAR_11;
 int VAR_12;
 u8 *VAR_13, VAR_14;
 struct ieee80211_key_seq VAR_15;
 u16 VAR_16[5];

 FUNC_12(&VAR_6->mutex);


 VAR_14 = FUNC_7(VAR_7, VAR_8);
 if (VAR_14 == VAR_3) {
  FUNC_2(VAR_6, "Failed to find station id\n");
  return -VAR_1;
 }

 if (VAR_9->cipher == VAR_5) {
  VAR_12 = FUNC_9(VAR_6, VAR_9, VAR_14, 0);
  goto end;
 }





 if (!VAR_8) {
  VAR_8 = FUNC_14(VAR_6->fw_id_to_mac_id[VAR_14],
      FUNC_13(&VAR_6->mutex));
  if (FUNC_0(VAR_8)) {
   FUNC_2(VAR_6, "Invalid station id\n");
   return -VAR_1;
  }
 }

 VAR_11 = (struct iwl_mvm_sta *)VAR_8->drv_priv;
 if (FUNC_3(VAR_11->vif != VAR_7))
  return -VAR_1;

 if (!VAR_10) {





  VAR_9->hw_key_idx = FUNC_11(VAR_6);
  if (VAR_9->hw_key_idx == VAR_4)
   return -VAR_2;
 }

 switch (VAR_9->cipher) {
 case 128:
  VAR_13 = FUNC_8(VAR_6, VAR_7, VAR_8);

  FUNC_5(VAR_9, 0, &VAR_15);
  FUNC_6(VAR_9, VAR_13, VAR_15.tkip.iv32, VAR_16);
  VAR_12 = FUNC_10(VAR_6, VAR_11, VAR_9, VAR_14,
        VAR_15.tkip.iv32, VAR_16, VAR_0);
  break;
 case 129:
  VAR_12 = FUNC_10(VAR_6, VAR_11, VAR_9, VAR_14,
        0, ((void*)0), VAR_0);
  break;
 default:
  FUNC_2(VAR_6, "Unknown cipher %x\n", VAR_9->cipher);
  VAR_12 = -VAR_1;
 }

 if (VAR_12)
  FUNC_4(VAR_9->hw_key_idx, VAR_6->fw_key_table);

end:
 FUNC_1(VAR_6, "key: cipher=%x len=%d idx=%d sta=%pM ret=%d\n",
        VAR_9->cipher, VAR_9->keylen, VAR_9->keyidx,
        VAR_8->addr, VAR_12);
 return VAR_12;
}

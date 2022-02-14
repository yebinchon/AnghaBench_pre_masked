
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mwl8k_vif {int macid; int is_hw_crypto_enabled; int list; int bssid; scalar_t__ seqno; struct ieee80211_vif* vif; } ;
struct mwl8k_priv {int ap_macids_supported; int sta_macids_supported; int macids_used; int vif_list; int ap_fw; struct mwl8k_device_info* device_info; scalar_t__ sniffer_enabled; } ;
struct mwl8k_device_info {int fw_image_sta; int fw_image_ap; } ;
struct ieee80211_vif {int type; int addr; } ;
struct ieee80211_hw {int wiphy; struct mwl8k_priv* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mwl8k_vif* FUNC_0 (struct ieee80211_vif*) ;


 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct mwl8k_vif*,int ,int) ;
 int FUNC_6 (struct ieee80211_hw*,struct ieee80211_vif*,int ) ;
 int FUNC_7 (struct ieee80211_hw*,struct ieee80211_vif*) ;
 int FUNC_8 (struct ieee80211_hw*,int ) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ,char*) ;

__attribute__((used)) static int FUNC_11(struct ieee80211_hw *VAR_3,
          struct ieee80211_vif *VAR_4)
{
 struct mwl8k_priv *VAR_5 = VAR_3->priv;
 struct mwl8k_vif *VAR_6;
 u32 VAR_7;
 int VAR_8, VAR_9;
 struct mwl8k_device_info *VAR_10;






 if (VAR_5->sniffer_enabled) {
  FUNC_9(VAR_3->wiphy,
      "unable to create STA interface because sniffer mode is enabled\n");
  return -VAR_1;
 }

 VAR_10 = VAR_5->device_info;
 switch (VAR_4->type) {
 case 129:
  if (!VAR_5->ap_fw && VAR_10->fw_image_ap) {

   if (!FUNC_3(&VAR_5->vif_list))
    return -VAR_0;
   VAR_9 = FUNC_8(VAR_3, VAR_10->fw_image_ap);
   if (VAR_9)
    return VAR_9;
  }
  VAR_7 = VAR_5->ap_macids_supported;
  break;
 case 128:
  if (VAR_5->ap_fw && VAR_10->fw_image_sta) {
   if (!FUNC_3(&VAR_5->vif_list)) {
    FUNC_10(VAR_3->wiphy, "AP interface is running.\n"
        "Adding STA interface for WDS");
   } else {



    VAR_9 = FUNC_8(VAR_3,
          VAR_10->fw_image_sta);
    if (VAR_9)
     return VAR_9;
   }
  }
  VAR_7 = VAR_5->sta_macids_supported;
  break;
 default:
  return -VAR_1;
 }

 VAR_8 = FUNC_1(VAR_7 & ~VAR_5->macids_used);
 if (!VAR_8--)
  return -VAR_0;


 VAR_6 = FUNC_0(VAR_4);
 FUNC_5(VAR_6, 0, sizeof(*VAR_6));
 VAR_6->vif = VAR_4;
 VAR_6->macid = VAR_8;
 VAR_6->seqno = 0;
 FUNC_4(VAR_6->bssid, VAR_4->addr, VAR_2);
 VAR_6->is_hw_crypto_enabled = 0;


 FUNC_6(VAR_3, VAR_4, VAR_4->addr);

 if (VAR_4->type == 129)
  FUNC_7(VAR_3, VAR_4);

 VAR_5->macids_used |= 1 << VAR_6->macid;
 FUNC_2(&VAR_6->list, &VAR_5->vif_list);

 return 0;
}

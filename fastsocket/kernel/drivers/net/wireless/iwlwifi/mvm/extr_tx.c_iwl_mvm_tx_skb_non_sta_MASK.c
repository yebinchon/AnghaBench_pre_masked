
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {scalar_t__ data; } ;
struct iwl_tx_cmd {int hdr; } ;
struct TYPE_6__ {int sta_id; } ;
struct iwl_mvm_vif {TYPE_2__ bcast_sta; } ;
struct TYPE_7__ {int sta_id; } ;
struct iwl_mvm {int trans; TYPE_3__ aux_sta; } ;
struct iwl_device_cmd {scalar_t__ payload; } ;
struct TYPE_5__ {TYPE_4__* vif; } ;
struct ieee80211_tx_info {int flags; scalar_t__ hw_queue; TYPE_1__ control; } ;
struct ieee80211_hdr {int frame_control; } ;
struct TYPE_8__ {scalar_t__ cab_queue; scalar_t__ type; } ;


 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct iwl_mvm*,char*,int ,scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 struct iwl_device_cmd* FUNC_4 (struct iwl_mvm*,struct sk_buff*,int *,int ) ;
 struct iwl_mvm_vif* FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (int ,struct iwl_device_cmd*) ;
 scalar_t__ FUNC_7 (int ,struct sk_buff*,struct iwl_device_cmd*,scalar_t__) ;
 int FUNC_8 (int ,struct ieee80211_hdr*,int ) ;

int FUNC_9(struct iwl_mvm *VAR_4, struct sk_buff *VAR_5)
{
 struct ieee80211_hdr *VAR_6 = (struct ieee80211_hdr *)VAR_5->data;
 struct ieee80211_tx_info *VAR_7 = FUNC_0(VAR_5);
 struct iwl_device_cmd *VAR_8;
 struct iwl_tx_cmd *VAR_9;
 u8 VAR_10;

 if (FUNC_2(VAR_7->flags & VAR_0))
  return -1;

 if (FUNC_2(VAR_7->flags & VAR_1 &&
    (!VAR_7->control.vif ||
     VAR_7->hw_queue != VAR_7->control.vif->cab_queue)))
  return -1;






 if (VAR_7->control.vif &&
     (VAR_7->control.vif->type == VAR_3 ||
      VAR_7->control.vif->type == VAR_2)) {
  struct iwl_mvm_vif *VAR_11 =
   FUNC_5(VAR_7->control.vif);
  VAR_10 = VAR_11->bcast_sta.sta_id;
 } else {
  VAR_10 = VAR_4->aux_sta.sta_id;
 }

 FUNC_1(VAR_4, "station Id %d, queue=%d\n", VAR_10, VAR_7->hw_queue);

 VAR_8 = FUNC_4(VAR_4, VAR_5, ((void*)0), VAR_10);
 if (!VAR_8)
  return -1;


 VAR_9 = (struct iwl_tx_cmd *)VAR_8->payload;


 FUNC_8(VAR_9->hdr, VAR_6, FUNC_3(VAR_6->frame_control));

 if (FUNC_7(VAR_4->trans, VAR_5, VAR_8, VAR_7->hw_queue)) {
  FUNC_6(VAR_4->trans, VAR_8);
  return -1;
 }

 return 0;
}

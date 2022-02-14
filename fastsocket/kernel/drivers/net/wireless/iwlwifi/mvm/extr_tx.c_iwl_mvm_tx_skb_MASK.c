
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct sk_buff {scalar_t__ data; } ;
struct iwl_tx_cmd {int hdr; } ;
struct iwl_mvm_sta {size_t sta_id; int lock; TYPE_1__* tid_data; } ;
struct iwl_mvm {int trans; int * pending_frames; } ;
struct iwl_device_cmd {scalar_t__ payload; } ;
struct ieee80211_tx_info {size_t hw_queue; int flags; } ;
struct ieee80211_sta {scalar_t__ drv_priv; } ;
struct ieee80211_hdr {int seq_ctrl; int frame_control; } ;
typedef int __le16 ;
struct TYPE_2__ {int seq_number; scalar_t__ state; size_t txq_id; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct iwl_mvm*,char*,size_t,size_t,size_t,int) ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 size_t* FUNC_5 (struct ieee80211_hdr*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 struct iwl_device_cmd* FUNC_10 (struct iwl_mvm*,struct sk_buff*,struct ieee80211_sta*,size_t) ;
 int FUNC_11 (int ,struct iwl_device_cmd*) ;
 scalar_t__ FUNC_12 (int ,struct sk_buff*,struct iwl_device_cmd*,size_t) ;
 int FUNC_13 (int ,struct ieee80211_hdr*,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

int FUNC_16(struct iwl_mvm *VAR_9, struct sk_buff *VAR_10,
     struct ieee80211_sta *VAR_11)
{
 struct ieee80211_hdr *VAR_12 = (struct ieee80211_hdr *)VAR_10->data;
 struct ieee80211_tx_info *VAR_13 = FUNC_0(VAR_10);
 struct iwl_mvm_sta *VAR_14;
 struct iwl_device_cmd *VAR_15;
 struct iwl_tx_cmd *VAR_16;
 __le16 VAR_17;
 u16 VAR_18 = 0;
 u8 VAR_19 = VAR_6;
 u8 VAR_20 = VAR_13->hw_queue;
 bool VAR_21 = 0, VAR_22 = 0;

 VAR_14 = (void *)VAR_11->drv_priv;
 VAR_17 = VAR_12->frame_control;

 if (FUNC_2(!VAR_14))
  return -1;

 if (FUNC_2(VAR_14->sta_id == VAR_8))
  return -1;

 VAR_15 = FUNC_10(VAR_9, VAR_10, VAR_11, VAR_14->sta_id);
 if (!VAR_15)
  goto drop;

 VAR_16 = (struct iwl_tx_cmd *)VAR_15->payload;


 FUNC_14(&VAR_14->lock);

 if (FUNC_8(VAR_17) && !FUNC_9(VAR_17)) {
  u8 *VAR_23 = ((void*)0);
  VAR_23 = FUNC_5(VAR_12);
  VAR_19 = VAR_23[0] & VAR_0;
  if (FUNC_2(VAR_19 >= VAR_6))
   goto drop_unlock_sta;

  VAR_18 = VAR_14->tid_data[VAR_19].seq_number;
  VAR_18 &= VAR_2;
  VAR_12->seq_ctrl &= FUNC_4(VAR_1);
  VAR_12->seq_ctrl |= FUNC_4(VAR_18);
  VAR_18 += 0x10;
  VAR_21 = 1;
  VAR_22 = VAR_13->flags & VAR_3;
 }


 FUNC_13(VAR_16->hdr, VAR_12, FUNC_7(VAR_17));

 FUNC_2(VAR_13->flags & VAR_4);

 if (VAR_22) {
  if (FUNC_2(VAR_14->tid_data[VAR_19].state != VAR_5))
   goto drop_unlock_sta;
  VAR_20 = VAR_14->tid_data[VAR_19].txq_id;
 }

 FUNC_1(VAR_9, "TX to [%d|%d] Q:%d - seq: 0x%x\n", VAR_14->sta_id,
       VAR_19, VAR_20, VAR_18);


 if (FUNC_12(VAR_9->trans, VAR_10, VAR_15, VAR_20))
  goto drop_unlock_sta;

 if (VAR_21 && !FUNC_6(VAR_17))
  VAR_14->tid_data[VAR_19].seq_number = VAR_18;

 FUNC_15(&VAR_14->lock);

 if (VAR_20 < VAR_7)
  FUNC_3(&VAR_9->pending_frames[VAR_14->sta_id]);

 return 0;

drop_unlock_sta:
 FUNC_11(VAR_9->trans, VAR_15);
 FUNC_15(&VAR_14->lock);
drop:
 return -1;
}

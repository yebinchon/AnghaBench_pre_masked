
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct sk_buff {scalar_t__ len; scalar_t__ data; } ;
struct iwl_wipan_noa_data {size_t length; struct ieee80211_hdr* data; } ;
struct iwl_tx_cmd {int hdr; int len; } ;
struct TYPE_4__ {scalar_t__ state; int txq_id; } ;
struct iwl_tid_data {int seq_number; TYPE_2__ agg; } ;
struct iwl_station_priv {int pending_frames; scalar_t__ client; scalar_t__ asleep; } ;
struct iwl_rxon_context {size_t bcast_sta_id; int mcast_queue; int* ac_to_queue; scalar_t__ payload; } ;
struct iwl_priv {int* queue_to_mac80211; int sta_lock; int trans; struct iwl_tid_data** tid_data; int noa_data; struct iwl_rxon_context* contexts; } ;
struct iwl_device_cmd {size_t bcast_sta_id; int mcast_queue; int* ac_to_queue; scalar_t__ payload; } ;
struct TYPE_3__ {scalar_t__ hw_key; scalar_t__ vif; } ;
struct ieee80211_tx_info {int flags; int hw_queue; struct iwl_rxon_context** driver_data; struct iwl_rxon_context status; TYPE_1__ control; } ;
struct ieee80211_sta {scalar_t__ drv_priv; } ;
struct ieee80211_hdr {int frame_control; int seq_ctrl; int addr1; } ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 struct ieee80211_tx_info* FUNC_1 (struct sk_buff*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct iwl_priv*,char*,...) ;
 int FUNC_3 (struct iwl_priv*,char*,...) ;
 int FUNC_4 (struct iwl_priv*,char*,size_t,size_t,...) ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 scalar_t__ FUNC_5 (int,char*,scalar_t__) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int) ;
 size_t* FUNC_9 (struct ieee80211_hdr*) ;
 int FUNC_10 (int ) ;
 size_t FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (int ) ;
 scalar_t__ FUNC_19 (struct iwl_priv*) ;
 struct iwl_rxon_context* FUNC_20 (scalar_t__) ;
 int FUNC_21 (struct iwl_priv*) ;
 size_t FUNC_22 (struct iwl_rxon_context*,struct ieee80211_sta*) ;
 int FUNC_23 (struct iwl_priv*,size_t,int) ;
 struct iwl_rxon_context* FUNC_24 (int ) ;
 int FUNC_25 (int ,struct iwl_rxon_context*) ;
 scalar_t__ FUNC_26 (int ,struct sk_buff*,struct iwl_rxon_context*,int) ;
 int FUNC_27 (struct iwl_priv*,struct sk_buff*,struct iwl_tx_cmd*,struct ieee80211_tx_info*,struct ieee80211_hdr*,size_t) ;
 int FUNC_28 (struct iwl_priv*,struct ieee80211_tx_info*,struct iwl_tx_cmd*,struct sk_buff*) ;
 int FUNC_29 (struct iwl_priv*,struct iwl_tx_cmd*,struct ieee80211_tx_info*,struct ieee80211_sta*,int ) ;
 int FUNC_30 (int ,struct ieee80211_hdr*,size_t) ;
 int FUNC_31 (struct iwl_rxon_context*,int ,int) ;
 scalar_t__ FUNC_32 (struct sk_buff*,int ,size_t,int ) ;
 struct iwl_wipan_noa_data* FUNC_33 (int ) ;
 size_t FUNC_34 (struct sk_buff*) ;
 int FUNC_35 (struct sk_buff*,size_t) ;
 int FUNC_36 (int *) ;
 int FUNC_37 (int *) ;
 scalar_t__ FUNC_38 (int) ;

int FUNC_39(struct iwl_priv *VAR_15,
    struct ieee80211_sta *VAR_16,
    struct sk_buff *VAR_17)
{
 struct ieee80211_hdr *VAR_18 = (struct ieee80211_hdr *)VAR_17->data;
 struct ieee80211_tx_info *VAR_19 = FUNC_1(VAR_17);
 struct iwl_station_priv *VAR_20 = ((void*)0);
 struct iwl_rxon_context *VAR_21 = &VAR_15->contexts[VAR_14];
 struct iwl_device_cmd *VAR_22;
 struct iwl_tx_cmd *VAR_23;
 __le16 VAR_24;
 u8 VAR_25;
 u16 VAR_26, VAR_27 = 0;
 u8 VAR_28, VAR_29 = VAR_13;
 bool VAR_30 = 0, VAR_31 = 0;
 int VAR_32;

 if (VAR_19->control.vif)
  VAR_21 = FUNC_20(VAR_19->control.vif);

 if (FUNC_19(VAR_15)) {
  FUNC_2(VAR_15, "Dropping - RF KILL\n");
  goto drop_unlock_priv;
 }

 VAR_24 = VAR_18->frame_control;
 if (FUNC_38(FUNC_16(VAR_24))) {
  struct iwl_wipan_noa_data *VAR_33 =
   FUNC_33(VAR_15->noa_data);

  if (VAR_33 &&
      FUNC_32(VAR_17, 0, VAR_33->length,
         VAR_0) == 0) {
   FUNC_30(FUNC_35(VAR_17, VAR_33->length),
          VAR_33->data, VAR_33->length);
   VAR_18 = (struct ieee80211_hdr *)VAR_17->data;
  }
 }

 VAR_25 = FUNC_11(VAR_24);


 if (!FUNC_14(VAR_24))
  VAR_28 = VAR_21->bcast_sta_id;
 else {

  VAR_28 = FUNC_22(VAR_21, VAR_16);
  if (VAR_28 == VAR_12) {
   FUNC_2(VAR_15, "Dropping - INVALID STATION: %pM\n",
           VAR_18->addr1);
   goto drop_unlock_priv;
  }
 }

 if (VAR_16)
  VAR_20 = (void *)VAR_16->drv_priv;

 if (VAR_20 && VAR_20->asleep &&
     (VAR_19->flags & VAR_6)) {
  FUNC_23(VAR_15, VAR_28, 1);
 }

 VAR_22 = FUNC_24(VAR_15->trans);

 if (FUNC_38(!VAR_22))
  goto drop_unlock_priv;

 FUNC_31(VAR_22, 0, sizeof(*VAR_22));
 VAR_23 = (struct iwl_tx_cmd *) VAR_22->payload;


 VAR_26 = (u16)VAR_17->len;
 VAR_23->len = FUNC_8(VAR_26);

 if (VAR_19->control.hw_key)
  FUNC_28(VAR_15, VAR_19, VAR_23, VAR_17);


 FUNC_27(VAR_15, VAR_17, VAR_23, VAR_19, VAR_18, VAR_28);

 FUNC_29(VAR_15, VAR_23, VAR_19, VAR_16, VAR_24);

 FUNC_31(&VAR_19->status, 0, sizeof(VAR_19->status));

 VAR_19->driver_data[0] = VAR_21;
 VAR_19->driver_data[1] = VAR_22;


 FUNC_36(&VAR_15->sta_lock);

 if (FUNC_15(VAR_24) && !FUNC_17(VAR_24)) {
  u8 *VAR_34 = ((void*)0);
  struct iwl_tid_data *VAR_35;
  VAR_34 = FUNC_9(VAR_18);
  VAR_29 = VAR_34[0] & VAR_2;
  if (FUNC_6(VAR_29 >= VAR_13))
   goto drop_unlock_sta;
  VAR_35 = &VAR_15->tid_data[VAR_28][VAR_29];


  if (VAR_19->flags & VAR_5 &&
      VAR_35->agg.state != VAR_10) {
   FUNC_4(VAR_15, "TX_CTL_AMPDU while not in AGG:"
    " Tx flags = 0x%08x, agg.state = %d",
    VAR_19->flags, VAR_35->agg.state);
   FUNC_4(VAR_15, "sta_id = %d, tid = %d seq_num = %d",
    VAR_28, VAR_29,
    FUNC_0(VAR_35->seq_number));
   goto drop_unlock_sta;
  }




  if (FUNC_5(VAR_35->agg.state != VAR_10 &&
         VAR_35->agg.state != VAR_9,
      "Tx while agg.state = %d", VAR_35->agg.state))
   goto drop_unlock_sta;

  VAR_27 = VAR_35->seq_number;
  VAR_27 &= VAR_4;
  VAR_18->seq_ctrl &= FUNC_8(VAR_3);
  VAR_18->seq_ctrl |= FUNC_8(VAR_27);
  VAR_27 += 0x10;

  if (VAR_19->flags & VAR_5)
   VAR_30 = 1;
  VAR_31 = 1;
 }


 FUNC_30(VAR_23->hdr, VAR_18, VAR_25);

 if (VAR_30)
  VAR_32 = VAR_15->tid_data[VAR_28][VAR_29].agg.txq_id;
 else if (VAR_19->flags & VAR_7) {




  VAR_32 = VAR_21->mcast_queue;





  VAR_18->frame_control |=
   FUNC_8(VAR_1);
 } else if (VAR_19->flags & VAR_8)
  VAR_32 = VAR_11;
 else
  VAR_32 = VAR_21->ac_to_queue[FUNC_34(VAR_17)];

 FUNC_6(!VAR_30 && VAR_32 != VAR_19->hw_queue);
 FUNC_6(VAR_30 &&
       VAR_15->queue_to_mac80211[VAR_32] != VAR_19->hw_queue);

 FUNC_3(VAR_15, "TX to [%d|%d] Q:%d - seq: 0x%x\n", VAR_28, VAR_29,
       VAR_32, VAR_27);

 if (FUNC_26(VAR_15->trans, VAR_17, VAR_22, VAR_32))
  goto drop_unlock_sta;

 if (VAR_31 && !FUNC_10(VAR_24))
  VAR_15->tid_data[VAR_28][VAR_29].seq_number = VAR_27;

 FUNC_37(&VAR_15->sta_lock);
 if (VAR_20 && VAR_20->client && !VAR_30)
  FUNC_7(&VAR_20->pending_frames);

 if (VAR_19->flags & VAR_8)
  FUNC_21(VAR_15);

 return 0;

drop_unlock_sta:
 if (VAR_22)
  FUNC_25(VAR_15->trans, VAR_22);
 FUNC_37(&VAR_15->sta_lock);
drop_unlock_priv:
 return -1;
}

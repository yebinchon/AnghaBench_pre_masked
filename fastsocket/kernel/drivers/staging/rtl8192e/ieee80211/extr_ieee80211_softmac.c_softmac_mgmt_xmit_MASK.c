
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ cb; scalar_t__ data; } ;
struct ieee80211_hdr_3addr {void* seq_ctl; } ;
struct ieee80211_device {short softmac_features; int* seq_ctrl; int mgmt_tx_lock; int dev; int (* softmac_hard_start_xmit ) (struct sk_buff*,int ) ;int * skb_waitQ; scalar_t__ queue_stop; int (* check_nic_enough_desc ) (int ,size_t) ;int lock; int basic_rate; int (* softmac_data_hard_start_xmit ) (struct sk_buff*,int ,int ) ;} ;
struct TYPE_2__ {size_t queue_index; int RATRIndex; int bTxDisableRateFallBack; int bTxUseDriverAssingedRate; int data_rate; } ;
typedef TYPE_1__ cb_desc ;


 short VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct ieee80211_device*) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct ieee80211_device*,struct sk_buff*) ;
 int FUNC_3 (struct ieee80211_device*,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,struct sk_buff*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct sk_buff*,int ,int ) ;
 int FUNC_9 (int ,size_t) ;
 int FUNC_10 (struct sk_buff*,int ) ;

inline void FUNC_11(struct sk_buff *VAR_2, struct ieee80211_device *VAR_3)
{
 unsigned long VAR_4;
 short VAR_5 = VAR_3->softmac_features & VAR_0;
 struct ieee80211_hdr_3addr *VAR_6=
  (struct ieee80211_hdr_3addr *) VAR_2->data;

 cb_desc *VAR_7 = (cb_desc *)(VAR_2->cb + 8);
 FUNC_6(&VAR_3->lock, VAR_4);


 FUNC_3(VAR_3,0);

 VAR_7->queue_index = VAR_1;
 VAR_7->data_rate = FUNC_0(VAR_3);
        VAR_7->RATRIndex = 7;
        VAR_7->bTxDisableRateFallBack = 1;
        VAR_7->bTxUseDriverAssingedRate = 1;

 if(VAR_5){
  if(VAR_3->queue_stop){
   FUNC_2(VAR_3,VAR_2);
  }else{
   VAR_6->seq_ctl = FUNC_1(VAR_3->seq_ctrl[0]<<4);

   if (VAR_3->seq_ctrl[0] == 0xFFF)
    VAR_3->seq_ctrl[0] = 0;
   else
    VAR_3->seq_ctrl[0]++;



   VAR_3->softmac_data_hard_start_xmit(VAR_2,VAR_3->dev,VAR_3->basic_rate);

  }

  FUNC_7(&VAR_3->lock, VAR_4);
 }else{
  FUNC_7(&VAR_3->lock, VAR_4);
  FUNC_6(&VAR_3->mgmt_tx_lock, VAR_4);

  VAR_6->seq_ctl = FUNC_1(VAR_3->seq_ctrl[0] << 4);

  if (VAR_3->seq_ctrl[0] == 0xFFF)
   VAR_3->seq_ctrl[0] = 0;
  else
   VAR_3->seq_ctrl[0]++;


  if(!VAR_3->check_nic_enough_desc(VAR_3->dev,VAR_7->queue_index)|| (FUNC_4(&VAR_3->skb_waitQ[VAR_7->queue_index]) != 0)|| (VAR_3->queue_stop) ) {







   FUNC_5(&VAR_3->skb_waitQ[VAR_7->queue_index], VAR_2);
  } else {

   VAR_3->softmac_hard_start_xmit(VAR_2,VAR_3->dev);

  }
  FUNC_7(&VAR_3->mgmt_tx_lock, VAR_4);
 }
}

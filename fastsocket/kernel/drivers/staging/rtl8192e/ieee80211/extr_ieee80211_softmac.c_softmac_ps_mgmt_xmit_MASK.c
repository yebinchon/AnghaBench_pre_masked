
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ cb; scalar_t__ data; } ;
struct ieee80211_hdr_3addr {void* seq_ctl; } ;
struct ieee80211_device {short softmac_features; int* seq_ctrl; int dev; int (* softmac_hard_start_xmit ) (struct sk_buff*,int ) ;int basic_rate; int (* softmac_data_hard_start_xmit ) (struct sk_buff*,int ,int ) ;} ;
struct TYPE_2__ {int RATRIndex; int bTxDisableRateFallBack; int bTxUseDriverAssingedRate; int data_rate; int queue_index; } ;
typedef TYPE_1__ cb_desc ;


 short VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ieee80211_device*) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct sk_buff*,int ,int ) ;
 int FUNC_3 (struct sk_buff*,int ) ;

inline void FUNC_4(struct sk_buff *VAR_2, struct ieee80211_device *VAR_3)
{

 short VAR_4 = VAR_3->softmac_features & VAR_0;
 struct ieee80211_hdr_3addr *VAR_5 =
  (struct ieee80211_hdr_3addr *) VAR_2->data;
        cb_desc *VAR_6 = (cb_desc *)(VAR_2->cb + 8);

 VAR_6->queue_index = VAR_1;
 VAR_6->data_rate = FUNC_0(VAR_3);
 VAR_6->RATRIndex = 7;
 VAR_6->bTxDisableRateFallBack = 1;
 VAR_6->bTxUseDriverAssingedRate = 1;

 if(VAR_4){

  VAR_5->seq_ctl = FUNC_1(VAR_3->seq_ctrl[0] << 4);

  if (VAR_3->seq_ctrl[0] == 0xFFF)
   VAR_3->seq_ctrl[0] = 0;
  else
   VAR_3->seq_ctrl[0]++;



  VAR_3->softmac_data_hard_start_xmit(VAR_2,VAR_3->dev,VAR_3->basic_rate);

 }else{

  VAR_5->seq_ctl = FUNC_1(VAR_3->seq_ctrl[0] << 4);

  if (VAR_3->seq_ctrl[0] == 0xFFF)
   VAR_3->seq_ctrl[0] = 0;
  else
   VAR_3->seq_ctrl[0]++;

  VAR_3->softmac_hard_start_xmit(VAR_2,VAR_3->dev);

 }

}

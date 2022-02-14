
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct ieee80211_hdr_3addr {void* seq_ctl; } ;
struct ieee80211_device {short softmac_features; int* seq_ctrl; TYPE_1__* dev; int (* softmac_hard_start_xmit ) (struct sk_buff*,TYPE_1__*) ;int basic_rate; int (* softmac_data_hard_start_xmit ) (struct sk_buff*,TYPE_1__*,int ) ;} ;
struct TYPE_3__ {void* trans_start; } ;


 short VAR_0 ;
 void* FUNC_0 (int) ;
 void* VAR_1 ;
 int FUNC_1 (struct sk_buff*,TYPE_1__*,int ) ;
 int FUNC_2 (struct sk_buff*,TYPE_1__*) ;

inline void FUNC_3(struct sk_buff *VAR_2, struct ieee80211_device *VAR_3)
{

 short VAR_4 = VAR_3->softmac_features & VAR_0;
 struct ieee80211_hdr_3addr *VAR_5 =
  (struct ieee80211_hdr_3addr *) VAR_2->data;


 if(VAR_4){

  VAR_5->seq_ctl = FUNC_0(VAR_3->seq_ctrl[0] << 4);

  if (VAR_3->seq_ctrl[0] == 0xFFF)
   VAR_3->seq_ctrl[0] = 0;
  else
   VAR_3->seq_ctrl[0]++;


  VAR_3->dev->trans_start = VAR_1;
  VAR_3->softmac_data_hard_start_xmit(VAR_2,VAR_3->dev,VAR_3->basic_rate);

 }else{

  VAR_5->seq_ctl = FUNC_0(VAR_3->seq_ctrl[0] << 4);

  if (VAR_3->seq_ctrl[0] == 0xFFF)
   VAR_3->seq_ctrl[0] = 0;
  else
   VAR_3->seq_ctrl[0]++;


  VAR_3->dev->trans_start = VAR_1;
  VAR_3->softmac_hard_start_xmit(VAR_2,VAR_3->dev);

 }

}

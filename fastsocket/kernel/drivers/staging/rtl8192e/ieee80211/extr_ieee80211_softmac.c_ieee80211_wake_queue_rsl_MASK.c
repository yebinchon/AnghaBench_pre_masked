
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct ieee80211_hdr_3addr {int seq_ctl; } ;
struct TYPE_4__ {int swtxawake; } ;
struct TYPE_3__ {scalar_t__ txb; } ;
struct ieee80211_device {int softmac_features; int* seq_ctrl; int lock; int dev; TYPE_2__ softmac_stats; scalar_t__ queue_stop; TYPE_1__ tx_pending; int basic_rate; int (* softmac_data_hard_start_xmit ) (struct sk_buff*,int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct sk_buff* FUNC_1 (struct ieee80211_device*) ;
 int FUNC_2 (struct ieee80211_device*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct sk_buff*,int ,int ) ;

void FUNC_8(struct ieee80211_device *VAR_1)
{

 unsigned long VAR_2;
 struct sk_buff *VAR_3;
 struct ieee80211_hdr_3addr *VAR_4;

 FUNC_5(&VAR_1->lock,VAR_2);
 if (! VAR_1->queue_stop) goto exit;

 VAR_1->queue_stop = 0;

 if(VAR_1->softmac_features & VAR_0){
  while (!VAR_1->queue_stop && (VAR_3 = FUNC_1(VAR_1))){

   VAR_4 = (struct ieee80211_hdr_3addr *) VAR_3->data;

   VAR_4->seq_ctl = FUNC_0(VAR_1->seq_ctrl[0] << 4);

   if (VAR_1->seq_ctrl[0] == 0xFFF)
    VAR_1->seq_ctrl[0] = 0;
   else
    VAR_1->seq_ctrl[0]++;

   VAR_1->softmac_data_hard_start_xmit(VAR_3,VAR_1->dev,VAR_1->basic_rate);

  }
 }
 if (!VAR_1->queue_stop && VAR_1->tx_pending.txb)
  FUNC_2(VAR_1);

 if (!VAR_1->queue_stop && FUNC_3(VAR_1->dev)){
  VAR_1->softmac_stats.swtxawake++;
  FUNC_4(VAR_1->dev);
 }

exit :
 FUNC_6(&VAR_1->lock,VAR_2);
}

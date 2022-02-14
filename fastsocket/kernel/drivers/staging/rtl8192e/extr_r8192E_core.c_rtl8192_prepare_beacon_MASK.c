
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ cb; } ;
struct r8192_priv {TYPE_2__* ieee80211; } ;
struct TYPE_3__ {int data_rate; int RATRIndex; int bTxDisableRateFallBack; int bTxUseDriverAssingedRate; int queue_index; } ;
typedef TYPE_1__ cb_desc ;
struct TYPE_4__ {int dev; int tx_headroom; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,int ) ;

void FUNC_3(struct r8192_priv *VAR_1)
{
 struct sk_buff *VAR_2;

 cb_desc *VAR_3;

 VAR_2 = FUNC_0(VAR_1->ieee80211);
 VAR_3 = (cb_desc *)(VAR_2->cb + 8);



 VAR_3->queue_index = VAR_0;

 VAR_3->data_rate = 2;
 VAR_3->RATRIndex = 7;
 VAR_3->bTxDisableRateFallBack = 1;
 VAR_3->bTxUseDriverAssingedRate = 1;

 FUNC_2(VAR_2, VAR_1->ieee80211->tx_headroom);
 if(VAR_2){
  FUNC_1(VAR_1->ieee80211->dev,VAR_2);
 }

}

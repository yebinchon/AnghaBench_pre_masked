
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int frag; TYPE_4__* txb; } ;
struct TYPE_5__ {int tx_packets; } ;
struct ieee80211_device {TYPE_2__ tx_pending; TYPE_3__* dev; TYPE_1__ stats; int rate; int (* softmac_data_hard_start_xmit ) (int ,TYPE_3__*,int ) ;scalar_t__ queue_stop; } ;
struct TYPE_8__ {int nr_frags; int * fragments; } ;
struct TYPE_7__ {int trans_start; } ;


 int FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 int FUNC_1 (int ,TYPE_3__*,int ) ;

void FUNC_2(struct ieee80211_device *VAR_1)
{
 int VAR_2;
 for(VAR_2 = VAR_1->tx_pending.frag; VAR_2 < VAR_1->tx_pending.txb->nr_frags; VAR_2++) {

  if (VAR_1->queue_stop){
   VAR_1->tx_pending.frag = VAR_2;
   return;
  }else{

   VAR_1->softmac_data_hard_start_xmit(
    VAR_1->tx_pending.txb->fragments[VAR_2],
    VAR_1->dev,VAR_1->rate);

   VAR_1->stats.tx_packets++;
   VAR_1->dev->trans_start = VAR_0;
  }
 }


 FUNC_0(VAR_1->tx_pending.txb);
 VAR_1->tx_pending.txb = ((void*)0);
}

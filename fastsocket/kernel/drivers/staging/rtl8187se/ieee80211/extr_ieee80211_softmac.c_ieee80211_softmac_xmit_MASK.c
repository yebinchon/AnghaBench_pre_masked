
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ieee80211_txb {int nr_frags; TYPE_3__** fragments; } ;
struct TYPE_6__ {int tx_bytes; int tx_packets; } ;
struct TYPE_5__ {int frag; struct ieee80211_txb* txb; } ;
struct ieee80211_device {int lock; TYPE_4__* dev; TYPE_2__ stats; int rate; int (* softmac_data_hard_start_xmit ) (TYPE_3__*,TYPE_4__*,int ) ;TYPE_1__ tx_pending; scalar_t__ queue_stop; } ;
struct TYPE_8__ {int trans_start; } ;
struct TYPE_7__ {scalar_t__ len; } ;


 int FUNC_0 (struct ieee80211_device*,int ) ;
 int FUNC_1 (struct ieee80211_txb*) ;
 int VAR_0 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (TYPE_3__*,TYPE_4__*,int ) ;

void FUNC_5(struct ieee80211_txb *VAR_1, struct ieee80211_device *VAR_2)
{


 unsigned long VAR_3;
 int VAR_4;

 FUNC_2(&VAR_2->lock,VAR_3);


 FUNC_0(VAR_2,0);

 for(VAR_4 = 0; VAR_4 < VAR_1->nr_frags; VAR_4++) {

  if (VAR_2->queue_stop){
   VAR_2->tx_pending.txb = VAR_1;
   VAR_2->tx_pending.frag = VAR_4;
   goto exit;
  }else{
   VAR_2->softmac_data_hard_start_xmit(
    VAR_1->fragments[VAR_4],
    VAR_2->dev,VAR_2->rate);

   VAR_2->stats.tx_packets++;
   VAR_2->stats.tx_bytes += VAR_1->fragments[VAR_4]->len;
   VAR_2->dev->trans_start = VAR_0;
  }
 }

 FUNC_1(VAR_1);

 exit:
 FUNC_3(&VAR_2->lock,VAR_3);

}

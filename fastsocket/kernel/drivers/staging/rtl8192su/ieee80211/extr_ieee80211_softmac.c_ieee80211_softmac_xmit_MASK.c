
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ieee80211_txb {unsigned int queue_index; int nr_frags; TYPE_3__** fragments; } ;
struct TYPE_5__ {int multicast; } ;
struct ieee80211_device {int lock; int rate; int dev; int (* softmac_data_hard_start_xmit ) (TYPE_3__*,int ,int ) ;int * skb_waitQ; scalar_t__ queue_stop; int (* check_nic_enough_desc ) (int ,unsigned int) ;TYPE_1__ stats; } ;
struct TYPE_6__ {scalar_t__ bMulticast; } ;
typedef TYPE_2__ cb_desc ;
struct TYPE_7__ {scalar_t__ cb; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ieee80211_device*,int ) ;
 int FUNC_1 (struct ieee80211_txb*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_3__*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ,unsigned int) ;
 int FUNC_7 (TYPE_3__*,int ,int ) ;

void FUNC_8(struct ieee80211_txb *VAR_1, struct ieee80211_device *VAR_2)
{

 unsigned int VAR_3 = VAR_1->queue_index;
 unsigned long VAR_4;
 int VAR_5;
 cb_desc *VAR_6 = ((void*)0);

 FUNC_4(&VAR_2->lock,VAR_4);


 FUNC_0(VAR_2,0);




 VAR_6 = (cb_desc *)(VAR_1->fragments[0]->cb + VAR_0);
 if(VAR_6->bMulticast) {
  VAR_2->stats.multicast++;
 }


 for(VAR_5 = 0; VAR_5 < VAR_1->nr_frags; VAR_5++) {
  if ((FUNC_2(&VAR_2->skb_waitQ[VAR_3]) != 0) ||
  (!VAR_2->check_nic_enough_desc(VAR_2->dev,VAR_3))|| (VAR_2->queue_stop)) {







   FUNC_3(&VAR_2->skb_waitQ[VAR_3], VAR_1->fragments[VAR_5]);
  }else{
   VAR_2->softmac_data_hard_start_xmit(
     VAR_1->fragments[VAR_5],
     VAR_2->dev,VAR_2->rate);



  }
 }

 FUNC_1(VAR_1);


 FUNC_5(&VAR_2->lock,VAR_4);

}

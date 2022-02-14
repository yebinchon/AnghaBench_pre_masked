
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * txb; } ;
struct ieee80211_device {int lock; scalar_t__ queue_stop; TYPE_1__ tx_pending; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ieee80211_device*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct ieee80211_device *VAR_0)
{
 unsigned long VAR_1;

 FUNC_2(&VAR_0->lock,VAR_1);
 FUNC_1(VAR_0);
 if (VAR_0->tx_pending.txb){
  FUNC_0(VAR_0->tx_pending.txb);
  VAR_0->tx_pending.txb = ((void*)0);
 }
 VAR_0->queue_stop = 0;
 FUNC_3(&VAR_0->lock,VAR_1);

}

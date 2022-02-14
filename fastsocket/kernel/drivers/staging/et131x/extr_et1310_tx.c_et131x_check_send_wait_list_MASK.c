
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct TYPE_4__ {struct list_head* next; } ;
struct TYPE_3__ {int nWaitSend; TYPE_2__ SendWaitQueue; } ;
struct et131x_adapter {int SendWaitLock; TYPE_1__ TxRing; } ;


 scalar_t__ FUNC_0 (struct et131x_adapter*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct et131x_adapter *VAR_0)
{
 unsigned long VAR_1;

 FUNC_2(&VAR_0->SendWaitLock, VAR_1);

 while (!FUNC_1(&VAR_0->TxRing.SendWaitQueue) &&
    FUNC_0(VAR_0)) {
  struct list_head *VAR_2;

  VAR_2 = VAR_0->TxRing.SendWaitQueue.next;

  VAR_0->TxRing.nWaitSend--;
 }

 FUNC_3(&VAR_0->SendWaitLock, VAR_1);
}

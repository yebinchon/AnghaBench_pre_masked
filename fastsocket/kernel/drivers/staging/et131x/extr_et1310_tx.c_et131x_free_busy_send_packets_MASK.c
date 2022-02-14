
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct list_head {int dummy; } ;
struct TYPE_7__ {struct list_head* next; } ;
struct TYPE_5__ {scalar_t__ nBusySend; TYPE_2__* CurrSendHead; int * CurrSendTail; scalar_t__ nWaitSend; TYPE_3__ SendWaitQueue; } ;
struct et131x_adapter {TYPE_1__ TxRing; int TCBSendQLock; int SendWaitLock; } ;
struct TYPE_6__ {struct TYPE_6__* Next; } ;
typedef TYPE_2__* PMP_TCB ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct et131x_adapter*,TYPE_2__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(struct et131x_adapter *VAR_1)
{
 PMP_TCB VAR_2;
 struct list_head *VAR_3;
 unsigned long VAR_4;
 uint32_t VAR_5 = 0;

 while (!FUNC_2(&VAR_1->TxRing.SendWaitQueue)) {
  FUNC_3(&VAR_1->SendWaitLock, VAR_4);

  VAR_1->TxRing.nWaitSend--;
  FUNC_4(&VAR_1->SendWaitLock, VAR_4);

  VAR_3 = VAR_1->TxRing.SendWaitQueue.next;
 }

 VAR_1->TxRing.nWaitSend = 0;


 FUNC_3(&VAR_1->TCBSendQLock, VAR_4);

 VAR_2 = VAR_1->TxRing.CurrSendHead;

 while ((VAR_2 != ((void*)0)) && (VAR_5 < VAR_0)) {
  PMP_TCB VAR_6 = VAR_2->Next;

  VAR_1->TxRing.CurrSendHead = VAR_6;

  if (VAR_6 == ((void*)0))
   VAR_1->TxRing.CurrSendTail = ((void*)0);

  VAR_1->TxRing.nBusySend--;

  FUNC_4(&VAR_1->TCBSendQLock, VAR_4);

  VAR_5++;
  FUNC_1(VAR_1, VAR_2);

  FUNC_3(&VAR_1->TCBSendQLock, VAR_4);

  VAR_2 = VAR_1->TxRing.CurrSendHead;
 }

 FUNC_0(VAR_5 == VAR_0);

 FUNC_4(&VAR_1->TCBSendQLock, VAR_4);

 VAR_1->TxRing.nBusySend = 0;
}

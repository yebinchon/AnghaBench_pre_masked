
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int SendWaitQueue; TYPE_2__* CurrSendTail; TYPE_2__* CurrSendHead; TYPE_2__* TCBReadyQueueTail; TYPE_2__* TCBReadyQueueHead; TYPE_2__* MpTcbMem; } ;
struct et131x_adapter {TYPE_1__ TxRing; } ;
struct TYPE_5__ {struct TYPE_5__* Next; } ;
typedef TYPE_1__ TX_RING_t ;
typedef TYPE_2__* PMP_TCB ;
typedef int MP_TCB ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,int ,int) ;

void FUNC_2(struct et131x_adapter *VAR_1)
{
 PMP_TCB VAR_2;
 uint32_t VAR_3;
 TX_RING_t *VAR_4;


 VAR_4 = &VAR_1->TxRing;
 VAR_2 = VAR_1->TxRing.MpTcbMem;

 VAR_4->TCBReadyQueueHead = VAR_2;


 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  FUNC_1(VAR_2, 0, sizeof(MP_TCB));





  if (VAR_3 < VAR_0 - 1) {
   VAR_2->Next = VAR_2 + 1;
  } else {
   VAR_4->TCBReadyQueueTail = VAR_2;
   VAR_2->Next = (PMP_TCB) ((void*)0);
  }

  VAR_2++;
 }


 VAR_4->CurrSendHead = (PMP_TCB) ((void*)0);
 VAR_4->CurrSendTail = (PMP_TCB) ((void*)0);

 FUNC_0(&VAR_1->TxRing.SendWaitQueue);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int nBusySend; TYPE_4__* CurrSendHead; int * CurrSendTail; } ;
struct et131x_adapter {int TCBSendQLock; int netdev; TYPE_3__ TxRing; TYPE_2__* regs; } ;
struct TYPE_9__ {int WrIndex; struct TYPE_9__* Next; } ;
struct TYPE_6__ {int NewServiceComplete; } ;
struct TYPE_7__ {TYPE_1__ txdma; } ;
typedef TYPE_4__* PMP_TCB ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct et131x_adapter*,TYPE_4__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct et131x_adapter *VAR_3)
{
 unsigned long VAR_4;
 u32 VAR_5;
 PMP_TCB VAR_6;
 u32 VAR_7;

 VAR_5 = FUNC_3(&VAR_3->regs->txdma.NewServiceComplete);
 VAR_7 = FUNC_0(VAR_5);




 FUNC_4(&VAR_3->TCBSendQLock, VAR_4);

 VAR_6 = VAR_3->TxRing.CurrSendHead;

 while (VAR_6 &&
        ((VAR_5 ^ VAR_6->WrIndex) & VAR_1) &&
        VAR_7 < FUNC_0(VAR_6->WrIndex)) {
  VAR_3->TxRing.nBusySend--;
  VAR_3->TxRing.CurrSendHead = VAR_6->Next;
  if (VAR_6->Next == ((void*)0))
   VAR_3->TxRing.CurrSendTail = ((void*)0);

  FUNC_5(&VAR_3->TCBSendQLock, VAR_4);
  FUNC_1(VAR_3, VAR_6);
  FUNC_4(&VAR_3->TCBSendQLock, VAR_4);


  VAR_6 = VAR_3->TxRing.CurrSendHead;
 }
 while (VAR_6 &&
        !((VAR_5 ^ VAR_6->WrIndex) & VAR_1)
        && VAR_7 > (VAR_6->WrIndex & VAR_0)) {
  VAR_3->TxRing.nBusySend--;
  VAR_3->TxRing.CurrSendHead = VAR_6->Next;
  if (VAR_6->Next == ((void*)0))
   VAR_3->TxRing.CurrSendTail = ((void*)0);

  FUNC_5(&VAR_3->TCBSendQLock, VAR_4);
  FUNC_1(VAR_3, VAR_6);
  FUNC_4(&VAR_3->TCBSendQLock, VAR_4);


  VAR_6 = VAR_3->TxRing.CurrSendHead;
 }


 if (VAR_3->TxRing.nBusySend <= (VAR_2 / 3))
  FUNC_2(VAR_3->netdev);

 FUNC_5(&VAR_3->TCBSendQLock, VAR_4);
}

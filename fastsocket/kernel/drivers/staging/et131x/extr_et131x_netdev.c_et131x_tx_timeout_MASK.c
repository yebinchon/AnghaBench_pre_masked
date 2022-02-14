
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ pTxDescRingVa; TYPE_3__* CurrSendHead; } ;
struct et131x_adapter {int Flags; int TCBSendQLock; TYPE_2__* pdev; TYPE_1__ TxRing; } ;
struct TYPE_6__ {scalar_t__ Count; int Flags; int WrIndex; } ;
struct TYPE_5__ {int dev; } ;
typedef int TX_DESC_ENTRY_t ;
typedef TYPE_3__* PMP_TCB ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,int ,int ) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int *,scalar_t__,int) ;
 struct et131x_adapter* FUNC_6 (struct net_device*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

void FUNC_9(struct net_device *VAR_4)
{
 struct et131x_adapter *VAR_5 = FUNC_6(VAR_4);
 PMP_TCB VAR_6;
 unsigned long VAR_7;


 if (VAR_5->Flags & VAR_2)
  return;




 if (VAR_5->Flags & VAR_3)
  return;


 if (VAR_5->Flags & VAR_1) {
  FUNC_1(&VAR_5->pdev->dev, "hardware error - reset\n");
  return;
 }


 FUNC_7(&VAR_5->TCBSendQLock, VAR_7);

 VAR_6 = VAR_5->TxRing.CurrSendHead;

 if (VAR_6 != ((void*)0)) {
  VAR_6->Count++;

  if (VAR_6->Count > VAR_0) {
   TX_DESC_ENTRY_t VAR_8[10];

   if (FUNC_0(VAR_6->WrIndex) > 7) {
    FUNC_5(VAR_8,
           VAR_5->TxRing.pTxDescRingVa +
           FUNC_0(VAR_6->WrIndex) - 6,
           sizeof(TX_DESC_ENTRY_t) * 10);
   }

   FUNC_8(&VAR_5->TCBSendQLock,
            VAR_7);

   FUNC_2(&VAR_5->pdev->dev,
    "Send stuck - reset.  pMpTcb->WrIndex %x, Flags 0x%08x\n",
    VAR_6->WrIndex,
    VAR_6->Flags);

   FUNC_3(VAR_4);
   FUNC_4(VAR_4);

   return;
  }
 }

 FUNC_8(&VAR_5->TCBSendQLock, VAR_7);
}

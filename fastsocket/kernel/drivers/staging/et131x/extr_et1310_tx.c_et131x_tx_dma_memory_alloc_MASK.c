
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pTxDummyBlkPa; void* pTxDummyBlkVa; int pTxStatusPa; void* pTxStatusVa; scalar_t__ TxDescOffset; scalar_t__ pTxDescRingVa; int pTxDescRingAdjustedPa; int pTxDescRingPa; int * MpTcbMem; } ;
struct et131x_adapter {TYPE_2__* pdev; TYPE_1__ TxRing; } ;
struct TYPE_4__ {int dev; } ;
typedef int TX_STATUS_BLOCK_t ;
typedef TYPE_1__ TX_RING_t ;
typedef int TX_DESC_ENTRY_t ;
typedef scalar_t__ PTX_DESC_ENTRY_t ;
typedef int MP_TCB ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct et131x_adapter*,int *,scalar_t__*,int) ;
 scalar_t__ FUNC_2 (int ,int,int) ;
 void* FUNC_3 (TYPE_2__*,int,int *) ;

int FUNC_4(struct et131x_adapter *VAR_6)
{
 int VAR_7 = 0;
 TX_RING_t *VAR_8 = &VAR_6->TxRing;


 VAR_6->TxRing.MpTcbMem = (MP_TCB *)FUNC_2(VAR_5, sizeof(MP_TCB),
            VAR_1 | VAR_2);
 if (!VAR_6->TxRing.MpTcbMem) {
  FUNC_0(&VAR_6->pdev->dev, "Cannot alloc memory for TCBs\n");
  return -VAR_0;
 }




 VAR_7 = (sizeof(TX_DESC_ENTRY_t) * VAR_4) + 4096 - 1;
 VAR_8->pTxDescRingVa =
     (PTX_DESC_ENTRY_t) FUNC_3(VAR_6->pdev, VAR_7,
          &VAR_8->pTxDescRingPa);
 if (!VAR_6->TxRing.pTxDescRingVa) {
  FUNC_0(&VAR_6->pdev->dev, "Cannot alloc memory for Tx Ring\n");
  return -VAR_0;
 }
 VAR_8->pTxDescRingAdjustedPa = VAR_8->pTxDescRingPa;


 FUNC_1(VAR_6,
          &VAR_8->pTxDescRingAdjustedPa,
          &VAR_8->TxDescOffset, 0x0FFF);

 VAR_8->pTxDescRingVa += VAR_8->TxDescOffset;


 VAR_8->pTxStatusVa = FUNC_3(VAR_6->pdev,
          sizeof(TX_STATUS_BLOCK_t),
          &VAR_8->pTxStatusPa);
 if (!VAR_6->TxRing.pTxStatusPa) {
  FUNC_0(&VAR_6->pdev->dev,
      "Cannot alloc memory for Tx status block\n");
  return -VAR_0;
 }


 VAR_8->pTxDummyBlkVa = FUNC_3(VAR_6->pdev,
            VAR_3,
            &VAR_8->pTxDummyBlkPa);
 if (!VAR_6->TxRing.pTxDummyBlkPa) {
  FUNC_0(&VAR_6->pdev->dev,
   "Cannot alloc memory for Tx dummy buffer\n");
  return -VAR_0;
 }

 return 0;
}

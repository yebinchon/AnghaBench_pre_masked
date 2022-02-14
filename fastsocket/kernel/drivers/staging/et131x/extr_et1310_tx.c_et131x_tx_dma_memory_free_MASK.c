
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int MpTcbMem; int * pTxDummyBlkVa; int pTxDummyBlkPa; int * pTxStatusVa; int pTxStatusPa; int * pTxDescRingVa; int pTxDescRingPa; scalar_t__ TxDescOffset; } ;
struct et131x_adapter {TYPE_1__ TxRing; int pdev; } ;
typedef int TX_STATUS_BLOCK_t ;
typedef int TX_DESC_ENTRY_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int *,int ) ;

void FUNC_2(struct et131x_adapter *VAR_2)
{
 int VAR_3 = 0;

 if (VAR_2->TxRing.pTxDescRingVa) {

  VAR_2->TxRing.pTxDescRingVa -= VAR_2->TxRing.TxDescOffset;

  VAR_3 =
      (sizeof(TX_DESC_ENTRY_t) * VAR_1) + 4096 - 1;

  FUNC_1(VAR_2->pdev,
        VAR_3,
        VAR_2->TxRing.pTxDescRingVa,
        VAR_2->TxRing.pTxDescRingPa);

  VAR_2->TxRing.pTxDescRingVa = ((void*)0);
 }


 if (VAR_2->TxRing.pTxStatusVa) {
  FUNC_1(VAR_2->pdev,
        sizeof(TX_STATUS_BLOCK_t),
        VAR_2->TxRing.pTxStatusVa,
        VAR_2->TxRing.pTxStatusPa);

  VAR_2->TxRing.pTxStatusVa = ((void*)0);
 }


 if (VAR_2->TxRing.pTxDummyBlkVa) {
  FUNC_1(VAR_2->pdev,
        VAR_0,
        VAR_2->TxRing.pTxDummyBlkVa,
        VAR_2->TxRing.pTxDummyBlkPa);

  VAR_2->TxRing.pTxDummyBlkVa = ((void*)0);
 }


 FUNC_0(VAR_2->TxRing.MpTcbMem);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct net_device_stats {int tx_bytes; } ;
struct TYPE_11__ {scalar_t__ nBusySend; TYPE_5__* TCBReadyQueueTail; TYPE_5__* TCBReadyQueueHead; TYPE_4__* pTxDescRingVa; } ;
struct TYPE_10__ {int opackets; int unixmt; int multixmt; int brdcstxmt; } ;
struct et131x_adapter {TYPE_3__ TxRing; int TCBReadyQLock; TYPE_2__ Stats; int pdev; struct net_device_stats net_stats; } ;
struct TYPE_14__ {scalar_t__ len; } ;
struct TYPE_13__ {int Flags; struct TYPE_13__* Next; TYPE_8__* Packet; int WrIndexStart; int WrIndex; } ;
struct TYPE_9__ {int value; } ;
struct TYPE_12__ {TYPE_1__ word2; int DataBufferPtrLow; } ;
typedef TYPE_4__ TX_DESC_ENTRY_t ;
typedef TYPE_5__* PMP_TCB ;
typedef int MP_TCB ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_8__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (TYPE_5__*,int ,int) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

inline void FUNC_9(struct et131x_adapter *VAR_6,
       PMP_TCB VAR_7)
{
 unsigned long VAR_8;
 TX_DESC_ENTRY_t *VAR_9 = ((void*)0);
 struct net_device_stats *VAR_10 = &VAR_6->net_stats;

 if (VAR_7->Flags & VAR_4)
  FUNC_3(&VAR_6->Stats.brdcstxmt);
 else if (VAR_7->Flags & VAR_5)
  FUNC_3(&VAR_6->Stats.multixmt);
 else
  FUNC_3(&VAR_6->Stats.unixmt);

 if (VAR_7->Packet) {
  VAR_10->tx_bytes += VAR_7->Packet->len;





  do {
   VAR_9 =
       (TX_DESC_ENTRY_t *) (VAR_6->TxRing.pTxDescRingVa +
        FUNC_0(VAR_7->WrIndexStart));

   FUNC_6(VAR_6->pdev,
      VAR_9->DataBufferPtrLow,
      VAR_9->word2.value, VAR_3);

   FUNC_2(&VAR_7->WrIndexStart, 1);
   if (FUNC_0(VAR_7->WrIndexStart) >=
       VAR_2) {
        VAR_7->WrIndexStart &= ~VAR_0;
        VAR_7->WrIndexStart ^= VAR_1;
   }
  } while (VAR_9 != (VAR_6->TxRing.pTxDescRingVa +
    FUNC_0(VAR_7->WrIndex)));

  FUNC_4(VAR_7->Packet);
 }

 FUNC_5(VAR_7, 0, sizeof(MP_TCB));


 FUNC_7(&VAR_6->TCBReadyQLock, VAR_8);

 VAR_6->Stats.opackets++;

 if (VAR_6->TxRing.TCBReadyQueueTail) {
  VAR_6->TxRing.TCBReadyQueueTail->Next = VAR_7;
 } else {

  VAR_6->TxRing.TCBReadyQueueHead = VAR_7;
 }

 VAR_6->TxRing.TCBReadyQueueTail = VAR_7;

 FUNC_8(&VAR_6->TCBReadyQLock, VAR_8);
 FUNC_1(VAR_6->TxRing.nBusySend < 0);
}

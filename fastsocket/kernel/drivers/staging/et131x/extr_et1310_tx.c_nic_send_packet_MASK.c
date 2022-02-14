
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


typedef int uint32_t ;
struct skb_frag_struct {int size; int page_offset; int page; } ;
struct sk_buff {int len; int data_len; scalar_t__ data; } ;
struct TYPE_19__ {scalar_t__ TxPacketsSinceLastinterrupt; int txDmaReadyToSend; scalar_t__ pTxDescRingVa; int nBusySend; TYPE_10__* CurrSendTail; TYPE_10__* CurrSendHead; } ;
struct et131x_adapter {scalar_t__ linkspeed; int SendHWLock; TYPE_6__* regs; TYPE_3__ TxRing; int TCBSendQLock; int pdev; } ;
struct TYPE_17__ {int f; } ;
struct TYPE_18__ {int value; TYPE_1__ bits; } ;
struct TYPE_23__ {int length_in_bytes; } ;
struct TYPE_24__ {TYPE_7__ bits; } ;
struct TYPE_25__ {TYPE_2__ word3; void* DataBufferPtrLow; TYPE_8__ word2; scalar_t__ DataBufferPtrHigh; } ;
struct TYPE_21__ {int watchdog_timer; } ;
struct TYPE_20__ {int service_request; } ;
struct TYPE_22__ {TYPE_5__ global; TYPE_4__ txdma; } ;
struct TYPE_16__ {int nr_frags; struct skb_frag_struct* frags; } ;
struct TYPE_15__ {int WrIndexStart; int WrIndex; struct TYPE_15__* Next; scalar_t__ PacketStaleCount; struct sk_buff* Packet; } ;
typedef TYPE_9__ TX_DESC_ENTRY_t ;
typedef TYPE_10__* PMP_TCB ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (scalar_t__,TYPE_9__*,int) ;
 int FUNC_4 (TYPE_9__*,int ,int) ;
 void* FUNC_5 (int ,int ,int ,int,int ) ;
 void* FUNC_6 (int ,scalar_t__,int,int ) ;
 TYPE_11__* FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int,int *) ;

__attribute__((used)) static int FUNC_13(struct et131x_adapter *VAR_9, PMP_TCB VAR_10)
{
 uint32_t VAR_11;
 TX_DESC_ENTRY_t VAR_12[24];
 uint32_t VAR_13 = 0;
 uint32_t VAR_14, VAR_15;
 struct sk_buff *VAR_16 = VAR_10->Packet;
 uint32_t VAR_17 = FUNC_7(VAR_16)->nr_frags + 1;
 struct skb_frag_struct *VAR_18 = &FUNC_7(VAR_16)->frags[0];
 unsigned long VAR_19;
 if (VAR_17 > 23) {
  return -VAR_0;
 }

 FUNC_4(VAR_12, 0, sizeof(TX_DESC_ENTRY_t) * (VAR_17 + 1));

 for (VAR_11 = 0; VAR_11 < VAR_17; VAR_11++) {



  if (VAR_11 == 0) {
   if ((VAR_16->len - VAR_16->data_len) <= 1514) {
    VAR_12[VAR_13].DataBufferPtrHigh = 0;
    VAR_12[VAR_13].word2.bits.
        length_in_bytes =
        VAR_16->len - VAR_16->data_len;
    VAR_12[VAR_13++].DataBufferPtrLow =
        FUNC_6(VAR_9->pdev,
         VAR_16->data,
         VAR_16->len -
         VAR_16->data_len,
         VAR_7);
   } else {
    VAR_12[VAR_13].DataBufferPtrHigh = 0;
    VAR_12[VAR_13].word2.bits.
        length_in_bytes =
        ((VAR_16->len - VAR_16->data_len) / 2);
    VAR_12[VAR_13++].DataBufferPtrLow =
        FUNC_6(VAR_9->pdev,
         VAR_16->data,
         ((VAR_16->len -
           VAR_16->data_len) / 2),
         VAR_7);
    VAR_12[VAR_13].DataBufferPtrHigh = 0;

    VAR_12[VAR_13].word2.bits.
        length_in_bytes =
        ((VAR_16->len - VAR_16->data_len) / 2);
    VAR_12[VAR_13++].DataBufferPtrLow =
        FUNC_6(VAR_9->pdev,
         VAR_16->data +
         ((VAR_16->len -
           VAR_16->data_len) / 2),
         ((VAR_16->len -
           VAR_16->data_len) / 2),
         VAR_7);
   }
  } else {
   VAR_12[VAR_13].DataBufferPtrHigh = 0;
   VAR_12[VAR_13].word2.bits.length_in_bytes =
       VAR_18[VAR_11 - 1].size;







   VAR_12[VAR_13++].DataBufferPtrLow =
       FUNC_5(VAR_9->pdev,
      VAR_18[VAR_11 - 1].page,
      VAR_18[VAR_11 - 1].page_offset,
      VAR_18[VAR_11 - 1].size,
      VAR_7);
  }
 }

 if (VAR_13 == 0)
  return -VAR_0;

 if (VAR_9->linkspeed == VAR_8) {
  if (++VAR_9->TxRing.TxPacketsSinceLastinterrupt ==
      VAR_5) {
   VAR_12[VAR_13 - 1].word3.value = 0x5;
   VAR_9->TxRing.TxPacketsSinceLastinterrupt = 0;
  } else {
   VAR_12[VAR_13 - 1].word3.value = 0x1;
  }
 } else {
  VAR_12[VAR_13 - 1].word3.value = 0x5;
 }

 VAR_12[0].word3.bits.f = 1;

 VAR_10->WrIndexStart = VAR_9->TxRing.txDmaReadyToSend;
 VAR_10->PacketStaleCount = 0;

 FUNC_9(&VAR_9->SendHWLock, VAR_19);

 VAR_14 = VAR_4 -
    FUNC_0(VAR_9->TxRing.txDmaReadyToSend);

 if (VAR_14 >= VAR_13) {
  VAR_15 = 0;
  VAR_14 = VAR_13;
 } else {
  VAR_15 = VAR_13 - VAR_14;
 }

 FUNC_3(VAR_9->TxRing.pTxDescRingVa +
        FUNC_0(VAR_9->TxRing.txDmaReadyToSend), VAR_12,
        sizeof(TX_DESC_ENTRY_t) * VAR_14);

 FUNC_2(&VAR_9->TxRing.txDmaReadyToSend, VAR_14);

 if (FUNC_0(VAR_9->TxRing.txDmaReadyToSend)== 0 ||
     FUNC_0(VAR_9->TxRing.txDmaReadyToSend) == VAR_4) {
       VAR_9->TxRing.txDmaReadyToSend &= ~VAR_1;
       VAR_9->TxRing.txDmaReadyToSend ^= VAR_2;
 }

 if (VAR_15) {
  FUNC_3(VAR_9->TxRing.pTxDescRingVa,
         VAR_12 + VAR_14,
         sizeof(TX_DESC_ENTRY_t) * VAR_15);

  FUNC_2(&VAR_9->TxRing.txDmaReadyToSend, VAR_15);
 }

 if (FUNC_0(VAR_9->TxRing.txDmaReadyToSend) == 0) {
  if (VAR_9->TxRing.txDmaReadyToSend)
   VAR_10->WrIndex = VAR_4 - 1;
  else
   VAR_10->WrIndex= VAR_2 | (VAR_4 - 1);
 } else
  VAR_10->WrIndex = VAR_9->TxRing.txDmaReadyToSend - 1;

 FUNC_8(&VAR_9->TCBSendQLock);

 if (VAR_9->TxRing.CurrSendTail)
  VAR_9->TxRing.CurrSendTail->Next = VAR_10;
 else
  VAR_9->TxRing.CurrSendHead = VAR_10;

 VAR_9->TxRing.CurrSendTail = VAR_10;

 FUNC_1(VAR_10->Next != ((void*)0));

 VAR_9->TxRing.nBusySend++;

 FUNC_10(&VAR_9->TCBSendQLock);


 FUNC_12(VAR_9->TxRing.txDmaReadyToSend,
        &VAR_9->regs->txdma.service_request);




 if (VAR_9->linkspeed == VAR_8) {
  FUNC_12(VAR_6 * VAR_3,
         &VAR_9->regs->global.watchdog_timer);
 }
 FUNC_11(&VAR_9->SendHWLock, VAR_19);

 return 0;
}

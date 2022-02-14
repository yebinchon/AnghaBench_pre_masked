
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct sk_buff {scalar_t__ len; int data_len; int * data; } ;
struct TYPE_4__ {scalar_t__ nBusySend; TYPE_2__* TCBReadyQueueTail; TYPE_2__* TCBReadyQueueHead; } ;
struct et131x_adapter {TYPE_1__ TxRing; int TCBReadyQLock; } ;
struct TYPE_5__ {scalar_t__ PacketLength; struct TYPE_5__* Next; int Flags; struct sk_buff* Packet; } ;
typedef TYPE_2__* PMP_TCB ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct et131x_adapter*,TYPE_2__*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_6,
         struct et131x_adapter *VAR_7)
{
 int VAR_8 = 0;
 PMP_TCB VAR_9 = ((void*)0);
 uint16_t *VAR_10;
 unsigned long VAR_11;


 if (VAR_6->len < VAR_2) {
  return -VAR_0;
 }


 FUNC_2(&VAR_7->TCBReadyQLock, VAR_11);

 VAR_9 = VAR_7->TxRing.TCBReadyQueueHead;

 if (VAR_9 == ((void*)0)) {
  FUNC_3(&VAR_7->TCBReadyQLock, VAR_11);
  return -VAR_1;
 }

 VAR_7->TxRing.TCBReadyQueueHead = VAR_9->Next;

 if (VAR_7->TxRing.TCBReadyQueueHead == ((void*)0))
  VAR_7->TxRing.TCBReadyQueueTail = ((void*)0);

 FUNC_3(&VAR_7->TCBReadyQLock, VAR_11);

 VAR_9->PacketLength = VAR_6->len;
 VAR_9->Packet = VAR_6;

 if ((VAR_6->data != ((void*)0)) && ((VAR_6->len - VAR_6->data_len) >= 6)) {
  VAR_10 = (uint16_t *) VAR_6->data;

  if ((VAR_10[0] == 0xffff) &&
      (VAR_10[1] == 0xffff) && (VAR_10[2] == 0xffff)) {
   VAR_9->Flags |= VAR_4;
  } else if ((VAR_10[0] & 0x3) == 0x0001) {
   VAR_9->Flags |= VAR_5;
  }
 }

 VAR_9->Next = ((void*)0);


 if (VAR_8 == 0)
  VAR_8 = FUNC_1(VAR_7, VAR_9);

 if (VAR_8 != 0) {
  FUNC_2(&VAR_7->TCBReadyQLock, VAR_11);

  if (VAR_7->TxRing.TCBReadyQueueTail) {
   VAR_7->TxRing.TCBReadyQueueTail->Next = VAR_9;
  } else {

   VAR_7->TxRing.TCBReadyQueueHead = VAR_9;
  }

  VAR_7->TxRing.TCBReadyQueueTail = VAR_9;
  FUNC_3(&VAR_7->TCBReadyQLock, VAR_11);
  return VAR_8;
 }
 FUNC_0(VAR_7->TxRing.nBusySend > VAR_3);
 return 0;
}

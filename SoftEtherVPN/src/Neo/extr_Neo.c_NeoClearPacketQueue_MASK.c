
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int PacketQueueLock; scalar_t__ NumPacketQueue; int * Tail; TYPE_1__* PacketQueue; } ;
struct TYPE_4__ {struct TYPE_4__* Buf; struct TYPE_4__* Next; } ;
typedef TYPE_1__ NEO_QUEUE ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_2__* VAR_0 ;

void FUNC_3()
{

 FUNC_1(VAR_0->PacketQueueLock);
 {
  NEO_QUEUE *VAR_1 = VAR_0->PacketQueue;
  NEO_QUEUE *VAR_2;
  while (VAR_1 != ((void*)0))
  {
   VAR_2 = VAR_1->Next;
   FUNC_0(VAR_1->Buf);
   FUNC_0(VAR_1);
   VAR_1 = VAR_2;
  }
  VAR_0->PacketQueue = ((void*)0);
  VAR_0->Tail = ((void*)0);
  VAR_0->NumPacketQueue = 0;
 }
 FUNC_2(VAR_0->PacketQueueLock);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * Tail; TYPE_1__* PacketQueue; int NumPacketQueue; } ;
struct TYPE_4__ {struct TYPE_4__* Next; } ;
typedef TYPE_1__ NEO_QUEUE ;


 TYPE_2__* VAR_0 ;

NEO_QUEUE *FUNC_0()
{
 NEO_QUEUE *VAR_1;
 if (VAR_0->PacketQueue == ((void*)0))
 {

  return ((void*)0);
 }


 VAR_1 = VAR_0->PacketQueue;
 VAR_0->PacketQueue = VAR_0->PacketQueue->Next;
 VAR_1->Next = ((void*)0);
 VAR_0->NumPacketQueue--;

 if (VAR_0->PacketQueue == ((void*)0))
 {
  VAR_0->Tail = ((void*)0);
 }

 return VAR_1;
}

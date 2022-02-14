
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_5__ {scalar_t__ NumPacketQueue; TYPE_1__* Tail; TYPE_1__* PacketQueue; } ;
struct TYPE_4__ {struct TYPE_4__* Next; void* Buf; scalar_t__ Size; } ;
typedef TYPE_1__ NEO_QUEUE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (void*) ;
 TYPE_1__* FUNC_1 (int) ;
 TYPE_2__* VAR_1 ;

void FUNC_2(void *VAR_2, UINT VAR_3)
{
 NEO_QUEUE *VAR_4;

 if (VAR_2 == ((void*)0) || VAR_3 == 0)
 {
  return;
 }


 if (VAR_1->NumPacketQueue > VAR_0)
 {
  FUNC_0(VAR_2);
  return;
 }


 VAR_4 = FUNC_1(sizeof(NEO_QUEUE));
 VAR_4->Next = ((void*)0);
 VAR_4->Size = VAR_3;
 VAR_4->Buf = VAR_2;


 if (VAR_1->PacketQueue == ((void*)0))
 {
  VAR_1->PacketQueue = VAR_4;
 }
 else
 {
  NEO_QUEUE *VAR_5 = VAR_1->Tail;
  VAR_5->Next = VAR_4;
 }

 VAR_1->Tail = VAR_4;

 VAR_1->NumPacketQueue++;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int tail; int head; int packet_num; int ** Q; } ;
struct TYPE_5__ {TYPE_1__ rxManeQueue; } ;
typedef int * PSRxMgmtPacket ;
typedef TYPE_2__* PSDevice ;


 int VAR_0 ;
 int FUNC_0 (char*) ;

__attribute__((used)) inline static PSRxMgmtPacket FUNC_1 (PSDevice VAR_1)
{
 PSRxMgmtPacket VAR_2;
 if (VAR_1->rxManeQueue.tail == VAR_1->rxManeQueue.head)
 {
  FUNC_0("Queue is Empty\n");
  return ((void*)0);
 }
 else
 {
  int VAR_3;

  VAR_1->rxManeQueue.head = (VAR_1->rxManeQueue.head+1)%VAR_0;
  VAR_3 = VAR_1->rxManeQueue.head;

  VAR_2 = VAR_1->rxManeQueue.Q[VAR_3];
  VAR_1->rxManeQueue.packet_num--;
  return VAR_2;
 }
}

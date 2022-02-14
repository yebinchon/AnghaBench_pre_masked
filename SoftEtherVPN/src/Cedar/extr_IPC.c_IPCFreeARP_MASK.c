
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int PacketQueue; } ;
typedef TYPE_1__ IPC_ARP ;
typedef int BLOCK ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(IPC_ARP *VAR_0)
{
 BLOCK *VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 while (1)
 {
  VAR_1 = FUNC_2(VAR_0->PacketQueue);
  if (VAR_1 == ((void*)0))
  {
   break;
  }

  FUNC_1(VAR_1);
 }

 FUNC_3(VAR_0->PacketQueue);

 FUNC_0(VAR_0);
}

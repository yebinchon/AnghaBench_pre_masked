
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int Halt; int Event; int Cancel; int PacketQueue; int PacketGeneratorThread; } ;
struct TYPE_7__ {TYPE_1__* PacketAdapter; } ;
struct TYPE_6__ {TYPE_3__* Param; } ;
typedef TYPE_2__ SESSION ;
typedef TYPE_3__ NULL_LAN ;
typedef int BLOCK ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;

void FUNC_11(SESSION *VAR_1)
{

 NULL_LAN *VAR_2;
 BLOCK *VAR_3;
 if (VAR_1 == ((void*)0) || (VAR_2 = VAR_1->PacketAdapter->Param) == ((void*)0))
 {
  return;
 }

 VAR_2->Halt = 1;
 FUNC_8(VAR_2->Event);

 FUNC_10(VAR_2->PacketGeneratorThread, VAR_0);
 FUNC_7(VAR_2->PacketGeneratorThread);

 FUNC_3(VAR_2->PacketQueue);
 {
  while ((VAR_3 = FUNC_2(VAR_2->PacketQueue)))
  {
   FUNC_1(VAR_3);
  }
 }
 FUNC_9(VAR_2->PacketQueue);

 FUNC_6(VAR_2->PacketQueue);

 FUNC_4(VAR_2->Cancel);

 FUNC_5(VAR_2->Event);

 VAR_1->PacketAdapter->Param = ((void*)0);
 FUNC_0(VAR_2);
}

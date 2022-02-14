
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ CurrentSendPacketQueueSize; int SendPacketQueue; int ServerSession; scalar_t__ LastServerConnectionReceivedBlocksNum; int Cedar; } ;
struct TYPE_6__ {TYPE_1__* PacketAdapter; } ;
struct TYPE_5__ {scalar_t__ Param; } ;
typedef TYPE_2__ SESSION ;
typedef TYPE_3__ LINK ;
typedef int BLOCK ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

void FUNC_8(SESSION *VAR_0)
{
 LINK *VAR_1;

 if (VAR_0 == ((void*)0) || (VAR_1 = (LINK *)VAR_0->PacketAdapter->Param) == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_1->Cedar, -((int)VAR_1->LastServerConnectionReceivedBlocksNum));
 VAR_1->LastServerConnectionReceivedBlocksNum = 0;


 FUNC_6(VAR_1->ServerSession);
 FUNC_5(VAR_1->ServerSession);


 FUNC_3(VAR_1->SendPacketQueue);
 {
  BLOCK *VAR_2;
  while ((VAR_2 = FUNC_2(VAR_1->SendPacketQueue)))
  {
   FUNC_1(VAR_2);
  }
 }
 FUNC_7(VAR_1->SendPacketQueue);

 FUNC_4(VAR_1->SendPacketQueue);

 VAR_1->CurrentSendPacketQueueSize = 0;
}

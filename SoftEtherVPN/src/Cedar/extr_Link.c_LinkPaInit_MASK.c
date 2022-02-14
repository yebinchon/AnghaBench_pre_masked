
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ CurrentSendPacketQueueSize; scalar_t__ LastServerConnectionReceivedBlocksNum; int SendPacketQueue; scalar_t__* StopAllLinkFlag; scalar_t__ Halting; } ;
struct TYPE_6__ {TYPE_1__* PacketAdapter; } ;
struct TYPE_5__ {scalar_t__ Param; } ;
typedef int THREAD ;
typedef TYPE_2__ SESSION ;
typedef TYPE_3__ LINK ;


 int VAR_0 ;
 int FUNC_0 () ;
 int * FUNC_1 (int ,void*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

bool FUNC_4(SESSION *VAR_1)
{
 LINK *VAR_2;
 THREAD *VAR_3;

 if (VAR_1 == ((void*)0) || (VAR_2 = (LINK *)VAR_1->PacketAdapter->Param) == ((void*)0))
 {
  return 0;
 }

 if (VAR_2->Halting || (*VAR_2->StopAllLinkFlag))
 {
  return 0;
 }


 VAR_2->SendPacketQueue = FUNC_0();


 VAR_3 = FUNC_1(VAR_0, (void *)VAR_2);
 FUNC_3(VAR_3);

 VAR_2->LastServerConnectionReceivedBlocksNum = 0;
 VAR_2->CurrentSendPacketQueueSize = 0;

 FUNC_2(VAR_3);

 return 1;
}

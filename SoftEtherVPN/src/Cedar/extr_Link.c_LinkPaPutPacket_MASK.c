
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef void* UINT ;
struct TYPE_14__ {int ReceivedBlocks; } ;
struct TYPE_13__ {int Flag1; int LockFlag; TYPE_3__* Hub; int Cedar; void* LastServerConnectionReceivedBlocksNum; TYPE_4__* ServerSession; scalar_t__* StopAllLinkFlag; scalar_t__ Halting; } ;
struct TYPE_12__ {int Cancel1; TYPE_6__* Connection; TYPE_1__* PacketAdapter; } ;
struct TYPE_11__ {TYPE_2__* Option; } ;
struct TYPE_10__ {scalar_t__ YieldAfterStorePacket; } ;
struct TYPE_9__ {scalar_t__ Param; } ;
typedef TYPE_4__ SESSION ;
typedef TYPE_5__ LINK ;
typedef TYPE_6__ CONNECTION ;
typedef int BLOCK ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_6__*,int *,int) ;
 int FUNC_6 (int ) ;
 int * FUNC_7 (void*,void*,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;

bool FUNC_10(SESSION *VAR_0, void *VAR_1, UINT VAR_2)
{
 LINK *VAR_3;
 BLOCK *VAR_4 = ((void*)0);
 SESSION *VAR_5;
 CONNECTION *VAR_6;
 bool VAR_7 = 1;
 bool VAR_8 = 0;

 if (VAR_0 == ((void*)0) || (VAR_3 = (LINK *)VAR_0->PacketAdapter->Param) == ((void*)0))
 {
  return 0;
 }

 VAR_8 = (VAR_3->Halting || (*VAR_3->StopAllLinkFlag));

 VAR_5 = VAR_3->ServerSession;
 VAR_6 = VAR_5->Connection;

 VAR_3->Flag1++;
 if ((VAR_3->Flag1 % 32) == 0)
 {

  UINT VAR_9;
  int VAR_10;

  VAR_9 = FUNC_4(VAR_6->ReceivedBlocks);

  VAR_10 = (int)VAR_9 - (int)VAR_3->LastServerConnectionReceivedBlocksNum;

  VAR_3->LastServerConnectionReceivedBlocksNum = VAR_9;

  FUNC_1(VAR_3->Cedar, VAR_10);
 }



 if (VAR_1 != ((void*)0))
 {
  if (VAR_8 == 0)
  {
   VAR_4 = FUNC_7(VAR_1, VAR_2, 0);
  }

  if (VAR_3->LockFlag == 0)
  {
   UINT VAR_11;
   int VAR_12;

   VAR_3->LockFlag = 1;
   FUNC_6(VAR_6->ReceivedBlocks);

   VAR_11 = FUNC_4(VAR_6->ReceivedBlocks);

   VAR_12 = (int)VAR_11 - (int)VAR_3->LastServerConnectionReceivedBlocksNum;

   VAR_3->LastServerConnectionReceivedBlocksNum = VAR_11;

   FUNC_1(VAR_3->Cedar, VAR_12);
  }

  if (VAR_8 == 0)
  {
   if (FUNC_2(VAR_3->Cedar) == 0)
   {
    FUNC_3(VAR_4);
   }
   else
   {
    FUNC_5(VAR_6, VAR_4, 1);
   }
  }
 }
 else
 {
  UINT VAR_13;
  int VAR_14;

  VAR_13 = FUNC_4(VAR_6->ReceivedBlocks);

  VAR_14 = (int)VAR_13 - (int)VAR_3->LastServerConnectionReceivedBlocksNum;

  VAR_3->LastServerConnectionReceivedBlocksNum = VAR_13;

  FUNC_1(VAR_3->Cedar, VAR_14);

  if (VAR_3->LockFlag)
  {
   VAR_3->LockFlag = 0;
   FUNC_8(VAR_6->ReceivedBlocks);
  }


  FUNC_0(VAR_5->Cancel1);

  if (VAR_3->Hub != ((void*)0) && VAR_3->Hub->Option != ((void*)0) && VAR_3->Hub->Option->YieldAfterStorePacket)
  {
   FUNC_9();
  }
 }

 if (VAR_8)
 {
  VAR_7 = 0;
 }

 return VAR_7;
}

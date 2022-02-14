
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_8__ {TYPE_1__* PacketData; } ;
struct TYPE_7__ {int LoggingRecordCount; struct TYPE_7__* Client_Message; int * CancelList; int TrafficLock; int * OldTraffic; int DeviceName; struct TYPE_7__* ClientOption; scalar_t__* NicDownOnDisconnect; scalar_t__ PacketAdapter; struct TYPE_7__* Username; scalar_t__ Connection; struct TYPE_7__* Policy; scalar_t__ Cancel2; scalar_t__ Cancel1; int HaltEvent; int lock; int * Thread; struct TYPE_7__* Name; int * Traffic; struct TYPE_7__* ClientAuth; int ClientK; int * ClientX; int * DelayedPacketList; } ;
typedef TYPE_1__ SESSION ;
typedef TYPE_2__ PKT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 TYPE_2__* FUNC_8 (int *,scalar_t__) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ,int) ;

void FUNC_17(SESSION *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }


 if (VAR_0->DelayedPacketList != ((void*)0))
 {
  UINT VAR_1;
  for (VAR_1 = 0;VAR_1 < FUNC_9(VAR_0->DelayedPacketList);VAR_1++)
  {
   PKT *VAR_2 = FUNC_8(VAR_0->DelayedPacketList, VAR_1);

   FUNC_2(VAR_2->PacketData);
   FUNC_4(VAR_2);
  }

  FUNC_14(VAR_0->DelayedPacketList);
 }


 if (VAR_0->ClientOption != ((void*)0))
 {
  FUNC_2(VAR_0->ClientOption);
 }


 if (VAR_0->ClientAuth != ((void*)0))
 {
  if (VAR_0->ClientAuth->ClientX != ((void*)0))
  {
   FUNC_7(VAR_0->ClientAuth->ClientX);
  }
  if (VAR_0->ClientAuth->ClientX != ((void*)0))
  {
   FUNC_3(VAR_0->ClientAuth->ClientK);
  }
  FUNC_2(VAR_0->ClientAuth);
 }

 FUNC_6(VAR_0->Traffic);
 FUNC_2(VAR_0->Name);

 if (VAR_0->Thread != ((void*)0))
 {
  FUNC_15(VAR_0->Thread);
 }

 FUNC_1(VAR_0->lock);

 FUNC_13(VAR_0->HaltEvent);

 if (VAR_0->Cancel1)
 {
  FUNC_10(VAR_0->Cancel1);
 }

 if (VAR_0->Cancel2)
 {
  FUNC_10(VAR_0->Cancel2);
 }

 if (VAR_0->Policy)
 {
  FUNC_2(VAR_0->Policy);
 }

 if (VAR_0->Connection)
 {
  FUNC_12(VAR_0->Connection);
 }

 FUNC_2(VAR_0->Username);

 if (VAR_0->PacketAdapter)
 {
  FUNC_5(VAR_0->PacketAdapter);
 }
 if (VAR_0->OldTraffic != ((void*)0))
 {
  FUNC_6(VAR_0->OldTraffic);
 }

 FUNC_1(VAR_0->TrafficLock);

 if (VAR_0->CancelList != ((void*)0))
 {
  FUNC_11(VAR_0->CancelList);
 }

 if (VAR_0->Client_Message != ((void*)0))
 {
  FUNC_2(VAR_0->Client_Message);
 }

 FUNC_0(VAR_0->LoggingRecordCount);

 FUNC_2(VAR_0);
}

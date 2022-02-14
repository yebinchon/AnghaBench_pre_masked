
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int name ;
typedef scalar_t__ UINT ;
struct TYPE_9__ {int UserList; struct TYPE_9__* Msg; int AdminOptionList; int SecurityLogger; int PacketLogger; int RadiusOptionLock; int TicketList; int TrafficLock; struct TYPE_9__* SecureNATOption; struct TYPE_9__* Option; int OldTraffic; int Traffic; int SessionCounter; int NumSessionsBridge; int NumSessionsClient; int NumSessions; int LinkList; int MonitorList; int IpTable; int MacHashTable; int SessionList; struct TYPE_9__* Name; int lock_online; int lock; int Cedar; int HubDb; int RadiusSecret; struct TYPE_9__* RadiusServerName; scalar_t__ WatchDogStarted; } ;
typedef TYPE_1__ HUB ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 TYPE_1__* FUNC_9 (int ,scalar_t__) ;
 scalar_t__ FUNC_10 (int ) ;
 int VAR_0 ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (char*,int,TYPE_1__*) ;

void FUNC_17(HUB *VAR_1)
{
 UINT VAR_2;
 char VAR_3[VAR_0];

 if (VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_16(VAR_3, sizeof(VAR_3), VAR_1->Name);

 if (VAR_1->WatchDogStarted)
 {
  FUNC_15(VAR_1);
 }

 FUNC_4(VAR_1);

 if (VAR_1->RadiusServerName != ((void*)0))
 {
  FUNC_3(VAR_1->RadiusServerName);
  FUNC_5(VAR_1->RadiusSecret);
 }
 FUNC_11(VAR_1);
 FUNC_1(VAR_1->HubDb);
 FUNC_12(VAR_1->Cedar);
 FUNC_2(VAR_1->lock);
 FUNC_2(VAR_1->lock_online);
 FUNC_3(VAR_1->Name);
 FUNC_14(VAR_1->SessionList);
 FUNC_13(VAR_1->MacHashTable);
 FUNC_14(VAR_1->IpTable);
 FUNC_14(VAR_1->MonitorList);
 FUNC_14(VAR_1->LinkList);
 FUNC_0(VAR_1->NumSessions);
 FUNC_0(VAR_1->NumSessionsClient);
 FUNC_0(VAR_1->NumSessionsBridge);
 FUNC_0(VAR_1->SessionCounter);
 FUNC_7(VAR_1->Traffic);
 FUNC_7(VAR_1->OldTraffic);
 FUNC_3(VAR_1->Option);

 FUNC_3(VAR_1->SecureNATOption);

 FUNC_2(VAR_1->TrafficLock);

 for (VAR_2 = 0;VAR_2 < FUNC_10(VAR_1->TicketList);VAR_2++)
 {
  FUNC_3(FUNC_9(VAR_1->TicketList, VAR_2));
 }

 FUNC_14(VAR_1->TicketList);

 FUNC_2(VAR_1->RadiusOptionLock);

 FUNC_6(VAR_1->PacketLogger);
 FUNC_6(VAR_1->SecurityLogger);

 for (VAR_2 = 0;VAR_2 < FUNC_10(VAR_1->AdminOptionList);VAR_2++)
 {
  FUNC_3(FUNC_9(VAR_1->AdminOptionList, VAR_2));
 }
 FUNC_14(VAR_1->AdminOptionList);

 if (VAR_1->Msg != ((void*)0))
 {
  FUNC_3(VAR_1->Msg);
 }

 FUNC_8(VAR_1->UserList);

 FUNC_3(VAR_1);
}

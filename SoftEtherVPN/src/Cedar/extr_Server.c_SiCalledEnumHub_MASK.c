
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_13__ {int TrafficDiffList; int TrafficLock; int Traffic; int AssignedBridgeLicense; int AssignedClientLicense; int CurrentSessions; int CurrentTcpConnections; int HubList; } ;
struct TYPE_12__ {scalar_t__ Type; int lock; int CreatedTime; int LastCommTime; int IpTable; int MacHashTable; int NumSessionsBridge; int NumSessionsClient; int SessionList; int NumSessions; TYPE_1__* Name; } ;
struct TYPE_11__ {int MyRandomKey; TYPE_4__* Cedar; } ;
struct TYPE_10__ {scalar_t__ Type; struct TYPE_10__* Name; struct TYPE_10__* HubName; int Traffic; } ;
typedef TYPE_1__ TRAFFIC_DIFF ;
typedef TYPE_2__ SERVER ;
typedef int PACK ;
typedef TYPE_3__ HUB ;
typedef TYPE_4__ CEDAR ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_4 (int ) ;
 void* FUNC_5 (int ,scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int *,scalar_t__,scalar_t__) ;
 int FUNC_11 (int *,char*,int ,int ) ;
 int FUNC_12 (int *,char*,scalar_t__) ;
 int FUNC_13 (int *,char*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_14 (int *,char*,TYPE_1__*,scalar_t__,scalar_t__) ;
 int FUNC_15 (int *,char*,int ,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;

void FUNC_19(SERVER *VAR_1, PACK *VAR_2, PACK *VAR_3)
{
 UINT VAR_4;
 CEDAR *VAR_5;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return;
 }


 VAR_5 = VAR_1->Cedar;

 FUNC_8(VAR_5->HubList);
 {
  UINT VAR_6 = FUNC_6(VAR_5->HubList);
  for (VAR_4 = 0;VAR_4 < VAR_6;VAR_4++)
  {
   HUB *VAR_7 = FUNC_5(VAR_5->HubList, VAR_4);
   FUNC_7(VAR_7->lock);
   {
    FUNC_14(VAR_2, "HubName", VAR_7->Name, VAR_4, VAR_6);
    FUNC_13(VAR_2, "HubType", VAR_7->Type, VAR_4, VAR_6);
    FUNC_13(VAR_2, "NumSession", FUNC_0(VAR_7->NumSessions), VAR_4, VAR_6);

    FUNC_13(VAR_2, "NumSessions", FUNC_6(VAR_7->SessionList), VAR_4, VAR_6);
    FUNC_13(VAR_2, "NumSessionsClient", FUNC_0(VAR_7->NumSessionsClient), VAR_4, VAR_6);
    FUNC_13(VAR_2, "NumSessionsBridge", FUNC_0(VAR_7->NumSessionsBridge), VAR_4, VAR_6);

    FUNC_13(VAR_2, "NumMacTables", FUNC_4(VAR_7->MacHashTable), VAR_4, VAR_6);

    FUNC_13(VAR_2, "NumIpTables", FUNC_6(VAR_7->IpTable), VAR_4, VAR_6);

    FUNC_15(VAR_2, "LastCommTime", VAR_7->LastCommTime, VAR_4, VAR_6);
    FUNC_15(VAR_2, "CreatedTime", VAR_7->CreatedTime, VAR_4, VAR_6);
   }
   FUNC_17(VAR_7->lock);
  }
 }
 FUNC_18(VAR_5->HubList);

 FUNC_12(VAR_2, "Point", FUNC_16(VAR_1));
 FUNC_12(VAR_2, "NumTcpConnections", FUNC_0(VAR_1->Cedar->CurrentTcpConnections));
 FUNC_12(VAR_2, "NumTotalSessions", FUNC_0(VAR_1->Cedar->CurrentSessions));
 FUNC_12(VAR_2, "MaxSessions", FUNC_3(VAR_1, "i_max_sessions"));

 FUNC_12(VAR_2, "AssignedClientLicense", FUNC_0(VAR_1->Cedar->AssignedClientLicense));
 FUNC_12(VAR_2, "AssignedBridgeLicense", FUNC_0(VAR_1->Cedar->AssignedBridgeLicense));

 FUNC_11(VAR_2, "RandomKey", VAR_1->MyRandomKey, VAR_0);


 FUNC_7(VAR_5->TrafficLock);
 {
  FUNC_9(VAR_2, VAR_5->Traffic);
 }
 FUNC_17(VAR_5->TrafficLock);

 FUNC_8(VAR_5->TrafficDiffList);
 {
  UINT VAR_8 = FUNC_6(VAR_5->TrafficDiffList);
  UINT VAR_9;

  for (VAR_9 = 0;VAR_9 < VAR_8;VAR_9++)
  {
   TRAFFIC_DIFF *VAR_10 = FUNC_5(VAR_5->TrafficDiffList, VAR_9);

   FUNC_13(VAR_2, "TdType", VAR_10->Type, VAR_9, VAR_8);
   FUNC_14(VAR_2, "TdHubName", VAR_10->HubName, VAR_9, VAR_8);
   FUNC_14(VAR_2, "TdName", VAR_10->Name, VAR_9, VAR_8);

   FUNC_10(&VAR_10->Traffic, VAR_2, VAR_9, VAR_8);

   FUNC_2(VAR_10->HubName);
   FUNC_2(VAR_10->Name);
   FUNC_2(VAR_10);
  }

  FUNC_1(VAR_5->TrafficDiffList);
 }
 FUNC_18(VAR_5->TrafficDiffList);
}

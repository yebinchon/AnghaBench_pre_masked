
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_19__ {TYPE_2__* Server; } ;
struct TYPE_18__ {int Me; int HubList; } ;
struct TYPE_17__ {scalar_t__ Type; int EnableSecureNAT; int lock; int CreatedTime; int LastLoginTime; int LastCommTime; int NumLogin; int TrafficLock; int Traffic; int IpTable; int MacHashTable; TYPE_1__* HubDb; int AccessList; int NumSessionsBridge; int NumSessionsClient; int SessionList; scalar_t__ Offline; int Name; } ;
struct TYPE_16__ {scalar_t__ NumIpTables; scalar_t__ NumMacTables; scalar_t__ NumSessionsBridge; scalar_t__ NumSessionsClient; scalar_t__ NumSessions; int Name; } ;
struct TYPE_15__ {scalar_t__ HubType; int Online; int SecureNATEnabled; scalar_t__ NumIpTables; int NumMacTables; void* NumSessionsBridge; void* NumSessionsClient; scalar_t__ NumSessions; int HubName; int CreatedTime; int LastLoginTime; int LastCommTime; int NumLogin; int Traffic; scalar_t__ NumGroups; scalar_t__ NumUsers; scalar_t__ NumAccessLists; } ;
struct TYPE_14__ {scalar_t__ ServerType; int FarmMemberList; int * Cedar; } ;
struct TYPE_13__ {int GroupList; int UserList; } ;
typedef int TRAFFIC ;
typedef TYPE_2__ SERVER ;
typedef TYPE_3__ RPC_HUB_STATUS ;
typedef TYPE_4__ HUB_LIST ;
typedef TYPE_5__ HUB ;
typedef TYPE_6__ FARM_MEMBER ;
typedef int CEDAR ;
typedef TYPE_7__ ADMIN ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 void* FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_5__* FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_3 ;
 void* FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_5__*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (TYPE_3__*,int) ;

UINT FUNC_16(ADMIN *VAR_5, RPC_HUB_STATUS *VAR_6)
{
 SERVER *VAR_7 = VAR_5->Server;
 CEDAR *VAR_8 = VAR_7->Cedar;
 HUB *VAR_9;

 VAR_0;

 FUNC_7(VAR_8);
 {
  VAR_9 = FUNC_2(VAR_8, VAR_6->HubName);
 }
 FUNC_13(VAR_8);

 if (VAR_9 == ((void*)0))
 {
  return VAR_1;
 }

 FUNC_15(VAR_6, sizeof(RPC_HUB_STATUS));

 FUNC_6(VAR_9->lock);
 {
  FUNC_11(VAR_6->HubName, sizeof(VAR_6->HubName), VAR_9->Name);
  VAR_6->HubType = VAR_9->Type;
  VAR_6->Online = VAR_9->Offline ? 0 : 1;
  VAR_6->NumSessions = FUNC_5(VAR_9->SessionList);
  VAR_6->NumSessionsClient = FUNC_1(VAR_9->NumSessionsClient);
  VAR_6->NumSessionsBridge = FUNC_1(VAR_9->NumSessionsBridge);
  VAR_6->NumAccessLists = FUNC_5(VAR_9->AccessList);

  if (VAR_9->HubDb != ((void*)0))
  {
   VAR_6->NumUsers = FUNC_5(VAR_9->HubDb->UserList);
   VAR_6->NumGroups = FUNC_5(VAR_9->HubDb->GroupList);
  }

  VAR_6->NumMacTables = FUNC_3(VAR_9->MacHashTable);
  VAR_6->NumIpTables = FUNC_5(VAR_9->IpTable);

  FUNC_6(VAR_9->TrafficLock);
  {
   FUNC_0(&VAR_6->Traffic, VAR_9->Traffic, sizeof(TRAFFIC));
  }
  FUNC_12(VAR_9->TrafficLock);

  VAR_6->NumLogin = VAR_9->NumLogin;
  VAR_6->LastCommTime = VAR_9->LastCommTime;
  VAR_6->LastLoginTime = VAR_9->LastLoginTime;
  VAR_6->CreatedTime = VAR_9->CreatedTime;
 }
 FUNC_12(VAR_9->lock);

 if (VAR_7->ServerType == VAR_4)
 {
  UINT VAR_10;
  FUNC_8(VAR_7->FarmMemberList);
  {
   for (VAR_10 = 0;VAR_10 < FUNC_5(VAR_7->FarmMemberList);VAR_10++)
   {
    UINT VAR_11;
    FARM_MEMBER *VAR_12 = FUNC_4(VAR_7->FarmMemberList, VAR_10);

    if (VAR_12->Me == 0)
    {
     FUNC_8(VAR_12->HubList);
     {
      for (VAR_11 = 0;VAR_11 < FUNC_5(VAR_12->HubList);VAR_11++)
      {
       HUB_LIST *VAR_13 = FUNC_4(VAR_12->HubList, VAR_11);

       if (FUNC_10(VAR_13->Name, VAR_6->HubName) == 0)
       {
        VAR_6->NumSessions += VAR_13->NumSessions;
        VAR_6->NumSessionsClient += VAR_13->NumSessionsClient;
        VAR_6->NumSessionsBridge += VAR_13->NumSessionsBridge;
        VAR_6->NumMacTables += VAR_13->NumMacTables;
        VAR_6->NumIpTables += VAR_13->NumIpTables;
       }
      }
     }
     FUNC_14(VAR_12->HubList);
    }
   }
  }
  FUNC_14(VAR_7->FarmMemberList);
 }

 if (VAR_9->Type != VAR_3)
 {
  VAR_6->SecureNATEnabled = VAR_9->EnableSecureNAT;
 }

 FUNC_9(VAR_9);

 return VAR_2;
}

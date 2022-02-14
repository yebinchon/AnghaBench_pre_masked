
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_25__ {int ServerAdmin; int HubName; TYPE_2__* Server; } ;
struct TYPE_24__ {int HubList; } ;
struct TYPE_23__ {int Me; int HubList; } ;
struct TYPE_22__ {int lock; int TrafficLock; int Traffic; int CreatedTime; int NumLogin; int LastLoginTime; int LastCommTime; TYPE_1__* HubDb; int IpTable; int MacHashTable; int SessionList; int Type; scalar_t__ Offline; int Name; int * Option; } ;
struct TYPE_21__ {scalar_t__ NumSessions; scalar_t__ NumMacTables; scalar_t__ NumIpTables; int Name; } ;
struct TYPE_20__ {scalar_t__ NumHub; TYPE_3__* Hubs; } ;
struct TYPE_19__ {int Online; int IsTrafficFilled; scalar_t__ NumSessions; int NumMacTables; scalar_t__ NumIpTables; int HubName; int Traffic; int CreatedTime; int NumLogin; int LastLoginTime; int LastCommTime; scalar_t__ NumGroups; scalar_t__ NumUsers; int HubType; } ;
struct TYPE_18__ {scalar_t__ ServerType; int FarmMemberList; TYPE_8__* Cedar; } ;
struct TYPE_17__ {int GroupList; int UserList; } ;
typedef int TRAFFIC ;
typedef TYPE_2__ SERVER ;
typedef TYPE_3__ RPC_ENUM_HUB_ITEM ;
typedef TYPE_4__ RPC_ENUM_HUB ;
typedef TYPE_5__ HUB_LIST ;
typedef TYPE_6__ HUB ;
typedef TYPE_7__ FARM_MEMBER ;
typedef TYPE_8__ CEDAR ;
typedef TYPE_9__ ADMIN ;


 int FUNC_0 (int *,int ,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_8__*) ;
 int FUNC_8 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (TYPE_8__*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (TYPE_4__*,int) ;
 TYPE_3__* FUNC_16 (int) ;

UINT FUNC_17(ADMIN *VAR_2, RPC_ENUM_HUB *VAR_3)
{
 SERVER *VAR_4 = VAR_2->Server;
 CEDAR *VAR_5 = VAR_4->Cedar;
 HUB *VAR_6 = ((void*)0);

 FUNC_1(VAR_3);

 FUNC_15(VAR_3, sizeof(RPC_ENUM_HUB));

 FUNC_7(VAR_5);
 {
  UINT VAR_7, VAR_8, VAR_9;

  VAR_8 = 0;

  for (VAR_7 = 0;VAR_7 < FUNC_4(VAR_5->HubList);VAR_7++)
  {
   HUB *VAR_10 = FUNC_3(VAR_5->HubList, VAR_7);

   FUNC_5(VAR_10->lock);

   if (VAR_2->ServerAdmin == 0 &&
    VAR_10->Option != ((void*)0) &&
    FUNC_9(VAR_10->Name, VAR_2->HubName) != 0)
   {

   }
   else
   {

    VAR_8++;
   }
  }

  VAR_3->NumHub = VAR_8;

  VAR_3->Hubs = FUNC_16(sizeof(RPC_ENUM_HUB_ITEM) * VAR_8);

  VAR_7 = 0;
  for (VAR_9 = 0;VAR_9 < FUNC_4(VAR_5->HubList);VAR_9++)
  {
   HUB *VAR_11 = FUNC_3(VAR_5->HubList, VAR_9);

   if (VAR_2->ServerAdmin == 0 &&
    VAR_11->Option != ((void*)0) &&
    FUNC_9(VAR_11->Name, VAR_2->HubName) != 0)
   {

   }
   else
   {

    RPC_ENUM_HUB_ITEM *VAR_12 = &VAR_3->Hubs[VAR_7++];

    FUNC_10(VAR_12->HubName, sizeof(VAR_12->HubName), VAR_11->Name);
    VAR_12->Online = VAR_11->Offline ? 0 : 1;
    VAR_12->HubType = VAR_11->Type;

    VAR_12->NumSessions = FUNC_4(VAR_11->SessionList);

    FUNC_6(VAR_11->MacHashTable);
    {
     VAR_12->NumMacTables = FUNC_2(VAR_11->MacHashTable);
    }
    FUNC_12(VAR_11->MacHashTable);

    FUNC_8(VAR_11->IpTable);
    {
     VAR_12->NumIpTables = FUNC_4(VAR_11->IpTable);
    }
    FUNC_14(VAR_11->IpTable);

    if (VAR_11->HubDb != ((void*)0))
    {
     FUNC_8(VAR_11->HubDb->UserList);
     {
      VAR_12->NumUsers = FUNC_4(VAR_11->HubDb->UserList);
     }
     FUNC_14(VAR_11->HubDb->UserList);

     FUNC_8(VAR_11->HubDb->GroupList);
     {
      VAR_12->NumGroups = FUNC_4(VAR_11->HubDb->GroupList);
     }
     FUNC_14(VAR_11->HubDb->GroupList);
    }

    VAR_12->LastCommTime = VAR_11->LastCommTime;
    VAR_12->LastLoginTime = VAR_11->LastLoginTime;
    VAR_12->NumLogin = VAR_11->NumLogin;
    VAR_12->CreatedTime = VAR_11->CreatedTime;

    FUNC_5(VAR_11->TrafficLock);
    {
     FUNC_0(&VAR_12->Traffic, VAR_11->Traffic, sizeof(TRAFFIC));
    }
    FUNC_11(VAR_11->TrafficLock);

    VAR_12->IsTrafficFilled = 1;
   }

   FUNC_11(VAR_11->lock);
  }
 }
 FUNC_13(VAR_5);

 if (VAR_4->ServerType == VAR_1)
 {
  UINT VAR_13, VAR_14, VAR_15;
  FUNC_8(VAR_4->FarmMemberList);
  {
   for (VAR_13 = 0;VAR_13 < FUNC_4(VAR_4->FarmMemberList);VAR_13++)
   {
    FARM_MEMBER *VAR_16 = FUNC_3(VAR_4->FarmMemberList, VAR_13);

    FUNC_8(VAR_16->HubList);
    {
     if (VAR_16->Me == 0)
     {
      for (VAR_14 = 0;VAR_14 < FUNC_4(VAR_16->HubList);VAR_14++)
      {
       HUB_LIST *VAR_17 = FUNC_3(VAR_16->HubList, VAR_14);

       for (VAR_15 = 0;VAR_15 < VAR_3->NumHub;VAR_15++)
       {
        RPC_ENUM_HUB_ITEM *VAR_18 = &VAR_3->Hubs[VAR_15];

        if (FUNC_9(VAR_18->HubName, VAR_17->Name) == 0)
        {
         VAR_18->NumIpTables += VAR_17->NumIpTables;
         VAR_18->NumMacTables += VAR_17->NumMacTables;
         VAR_18->NumSessions += VAR_17->NumSessions;
        }
       }
      }
     }
    }
    FUNC_14(VAR_16->HubList);
   }
  }
  FUNC_14(VAR_4->FarmMemberList);
 }

 return VAR_0;
}

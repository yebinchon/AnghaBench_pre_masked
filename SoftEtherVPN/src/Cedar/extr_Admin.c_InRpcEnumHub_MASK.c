
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_7__ {int NumHub; TYPE_1__* Hubs; } ;
struct TYPE_6__ {int Traffic; void* IsTrafficFilled; void* NumLogin; void* LastLoginTime; void* CreatedTime; void* LastCommTime; void* NumIpTables; void* NumMacTables; void* NumGroups; void* NumUsers; void* NumSessions; void* HubType; void* Online; int HubName; } ;
typedef TYPE_1__ RPC_ENUM_HUB_ITEM ;
typedef TYPE_2__ RPC_ENUM_HUB ;
typedef int PACK ;


 int FUNC_0 (int *,int *,size_t) ;
 void* FUNC_1 (int *,char*,size_t) ;
 int FUNC_2 (int *,char*) ;
 void* FUNC_3 (int *,char*,size_t) ;
 void* FUNC_4 (int *,char*,size_t) ;
 int FUNC_5 (int *,char*,int ,int,size_t) ;
 int FUNC_6 (TYPE_2__*,int) ;
 TYPE_1__* FUNC_7 (int) ;

void FUNC_8(RPC_ENUM_HUB *VAR_0, PACK *VAR_1)
{
 UINT VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_6(VAR_0, sizeof(RPC_ENUM_HUB));
 VAR_0->NumHub = FUNC_2(VAR_1, "HubName");
 VAR_0->Hubs = FUNC_7(sizeof(RPC_ENUM_HUB_ITEM) * VAR_0->NumHub);

 for (VAR_2 = 0;VAR_2 < VAR_0->NumHub;VAR_2++)
 {
  RPC_ENUM_HUB_ITEM *VAR_3 = &VAR_0->Hubs[VAR_2];

  FUNC_5(VAR_1, "HubName", VAR_3->HubName, sizeof(VAR_3->HubName), VAR_2);
  VAR_3->Online = FUNC_1(VAR_1, "Online", VAR_2);
  VAR_3->HubType = FUNC_4(VAR_1, "HubType", VAR_2);
  VAR_3->NumSessions = FUNC_4(VAR_1, "NumSessions", VAR_2);
  VAR_3->NumUsers = FUNC_4(VAR_1, "NumUsers", VAR_2);
  VAR_3->NumGroups = FUNC_4(VAR_1, "NumGroups", VAR_2);
  VAR_3->NumMacTables = FUNC_4(VAR_1, "NumMacTables", VAR_2);
  VAR_3->NumIpTables = FUNC_4(VAR_1, "NumIpTables", VAR_2);
  VAR_3->LastCommTime = FUNC_3(VAR_1, "LastCommTime", VAR_2);
  VAR_3->CreatedTime = FUNC_3(VAR_1, "CreatedTime", VAR_2);
  VAR_3->LastLoginTime = FUNC_3(VAR_1, "LastLoginTime", VAR_2);
  VAR_3->NumLogin = FUNC_4(VAR_1, "NumLogin", VAR_2);
  VAR_3->IsTrafficFilled = FUNC_1(VAR_1, "IsTrafficFilled", VAR_2);

  FUNC_0(&VAR_3->Traffic, VAR_1, VAR_2);
 }
}

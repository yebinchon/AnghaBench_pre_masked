
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_5__ {size_t NumHub; TYPE_1__* Hubs; } ;
struct TYPE_4__ {int Traffic; int IsTrafficFilled; int NumLogin; int LastLoginTime; int CreatedTime; int LastCommTime; int NumIpTables; int NumMacTables; int NumGroups; int NumUsers; int NumSessions; int HubType; int Online; int HubName; } ;
typedef TYPE_1__ RPC_ENUM_HUB_ITEM ;
typedef TYPE_2__ RPC_ENUM_HUB ;
typedef int PACK ;


 int FUNC_0 (int *,int *,size_t,size_t) ;
 int FUNC_1 (int *,char*,int ,size_t,size_t) ;
 int FUNC_2 (int *,char*,int ,size_t,size_t) ;
 int FUNC_3 (int *,char*,int ,size_t,size_t) ;
 int FUNC_4 (int *,char*,int ,size_t,size_t) ;
 int FUNC_5 (int *,char*) ;

void FUNC_6(PACK *VAR_0, RPC_ENUM_HUB *VAR_1)
{
 UINT VAR_2;

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_5(VAR_0, "HubList");
 for (VAR_2 = 0;VAR_2 < VAR_1->NumHub;VAR_2++)
 {
  RPC_ENUM_HUB_ITEM *VAR_3 = &VAR_1->Hubs[VAR_2];

  FUNC_3(VAR_0, "HubName", VAR_3->HubName, VAR_2, VAR_1->NumHub);
  FUNC_1(VAR_0, "Online", VAR_3->Online, VAR_2, VAR_1->NumHub);
  FUNC_2(VAR_0, "HubType", VAR_3->HubType, VAR_2, VAR_1->NumHub);
  FUNC_2(VAR_0, "NumSessions", VAR_3->NumSessions, VAR_2, VAR_1->NumHub);
  FUNC_2(VAR_0, "NumUsers", VAR_3->NumUsers, VAR_2, VAR_1->NumHub);
  FUNC_2(VAR_0, "NumGroups", VAR_3->NumGroups, VAR_2, VAR_1->NumHub);
  FUNC_2(VAR_0, "NumMacTables", VAR_3->NumMacTables, VAR_2, VAR_1->NumHub);
  FUNC_2(VAR_0, "NumIpTables", VAR_3->NumIpTables, VAR_2, VAR_1->NumHub);
  FUNC_4(VAR_0, "LastCommTime", VAR_3->LastCommTime, VAR_2, VAR_1->NumHub);
  FUNC_4(VAR_0, "CreatedTime", VAR_3->CreatedTime, VAR_2, VAR_1->NumHub);
  FUNC_4(VAR_0, "LastLoginTime", VAR_3->LastLoginTime, VAR_2, VAR_1->NumHub);
  FUNC_2(VAR_0, "NumLogin", VAR_3->NumLogin, VAR_2, VAR_1->NumHub);
  FUNC_1(VAR_0, "IsTrafficFilled", VAR_3->IsTrafficFilled, VAR_2, VAR_1->NumHub);

  FUNC_0(&VAR_3->Traffic, VAR_0, VAR_2, VAR_1->NumHub);
 }
 FUNC_5(VAR_0, ((void*)0));
}

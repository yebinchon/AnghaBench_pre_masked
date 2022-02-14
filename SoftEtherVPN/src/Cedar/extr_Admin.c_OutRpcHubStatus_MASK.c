
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int NumLogin; int LastLoginTime; int CreatedTime; int LastCommTime; int Traffic; int SecureNATEnabled; int NumIpTables; int NumMacTables; int NumGroups; int NumUsers; int NumAccessLists; int NumSessionsBridge; int NumSessionsClient; int NumSessions; int HubType; int Online; int HubName; } ;
typedef TYPE_1__ RPC_HUB_STATUS ;
typedef int PACK ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *,char*,int ) ;

void FUNC_5(PACK *VAR_0, RPC_HUB_STATUS *VAR_1)
{

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_3(VAR_0, "HubName", VAR_1->HubName);
 FUNC_1(VAR_0, "Online", VAR_1->Online);
 FUNC_2(VAR_0, "HubType", VAR_1->HubType);
 FUNC_2(VAR_0, "NumSessions", VAR_1->NumSessions);
 FUNC_2(VAR_0, "NumSessionsClient", VAR_1->NumSessionsClient);
 FUNC_2(VAR_0, "NumSessionsBridge", VAR_1->NumSessionsBridge);
 FUNC_2(VAR_0, "NumAccessLists", VAR_1->NumAccessLists);
 FUNC_2(VAR_0, "NumUsers", VAR_1->NumUsers);
 FUNC_2(VAR_0, "NumGroups", VAR_1->NumGroups);
 FUNC_2(VAR_0, "NumMacTables", VAR_1->NumMacTables);
 FUNC_2(VAR_0, "NumIpTables", VAR_1->NumIpTables);
 FUNC_1(VAR_0, "SecureNATEnabled", VAR_1->SecureNATEnabled);
 FUNC_0(VAR_0, &VAR_1->Traffic);
 FUNC_4(VAR_0, "LastCommTime", VAR_1->LastCommTime);
 FUNC_4(VAR_0, "CreatedTime", VAR_1->CreatedTime);
 FUNC_4(VAR_0, "LastLoginTime", VAR_1->LastLoginTime);
 FUNC_2(VAR_0, "NumLogin", VAR_1->NumLogin);
}

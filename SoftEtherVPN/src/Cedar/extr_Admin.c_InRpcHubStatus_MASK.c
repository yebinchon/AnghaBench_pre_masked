
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* NumLogin; void* LastLoginTime; void* CreatedTime; void* LastCommTime; int Traffic; void* SecureNATEnabled; void* NumIpTables; void* NumMacTables; void* NumGroups; void* NumUsers; void* NumAccessLists; void* NumSessionsBridge; void* NumSessionsClient; void* NumSessions; void* HubType; void* Online; int HubName; } ;
typedef TYPE_1__ RPC_HUB_STATUS ;
typedef int PACK ;


 int FUNC_0 (int *,int *) ;
 void* FUNC_1 (int *,char*) ;
 void* FUNC_2 (int *,char*) ;
 void* FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*,int ,int) ;
 int FUNC_5 (TYPE_1__*,int) ;

void FUNC_6(RPC_HUB_STATUS *VAR_0, PACK *VAR_1)
{
 FUNC_5(VAR_0, sizeof(RPC_HUB_STATUS));

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_4(VAR_1, "HubName", VAR_0->HubName, sizeof(VAR_0->HubName));
 VAR_0->Online = FUNC_1(VAR_1, "Online");
 VAR_0->HubType = FUNC_2(VAR_1, "HubType");
 VAR_0->NumSessions = FUNC_2(VAR_1, "NumSessions");
 VAR_0->NumSessionsClient = FUNC_2(VAR_1, "NumSessionsClient");
 VAR_0->NumSessionsBridge = FUNC_2(VAR_1, "NumSessionsBridge");
 VAR_0->NumAccessLists = FUNC_2(VAR_1, "NumAccessLists");
 VAR_0->NumUsers = FUNC_2(VAR_1, "NumUsers");
 VAR_0->NumGroups = FUNC_2(VAR_1, "NumGroups");
 VAR_0->NumMacTables = FUNC_2(VAR_1, "NumMacTables");
 VAR_0->NumIpTables = FUNC_2(VAR_1, "NumIpTables");
 VAR_0->SecureNATEnabled = FUNC_1(VAR_1, "SecureNATEnabled");
 FUNC_0(&VAR_0->Traffic, VAR_1);
 VAR_0->LastCommTime = FUNC_3(VAR_1, "LastCommTime");
 VAR_0->CreatedTime = FUNC_3(VAR_1, "CreatedTime");
 VAR_0->LastLoginTime = FUNC_3(VAR_1, "LastLoginTime");
 VAR_0->NumLogin = FUNC_2(VAR_1, "NumLogin");
}

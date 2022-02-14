
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int MemInfo; int Traffic; void* StartTime; void* AssignedClientLicensesTotal; void* AssignedBridgeLicensesTotal; void* AssignedClientLicenses; void* AssignedBridgeLicenses; void* CurrentTick; void* CurrentTime; void* NumGroups; void* NumUsers; void* NumIpTables; void* NumMacTables; void* NumSessionsRemote; void* NumSessionsLocal; void* NumSessionsTotal; void* NumHubDynamic; void* NumHubStatic; void* NumHubStandalone; void* NumHubTotal; void* NumTcpConnectionsRemote; void* NumTcpConnectionsLocal; void* NumTcpConnections; void* ServerType; } ;
typedef TYPE_1__ RPC_SERVER_STATUS ;
typedef int PACK ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 void* FUNC_2 (int *,char*) ;
 void* FUNC_3 (int *,char*) ;
 int FUNC_4 (TYPE_1__*,int) ;

void FUNC_5(RPC_SERVER_STATUS *VAR_0, PACK *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_4(VAR_0, sizeof(RPC_SERVER_STATUS));
 VAR_0->ServerType = FUNC_2(VAR_1, "ServerType");
 VAR_0->NumTcpConnections = FUNC_2(VAR_1, "NumTcpConnections");
 VAR_0->NumTcpConnectionsLocal = FUNC_2(VAR_1, "NumTcpConnectionsLocal");
 VAR_0->NumTcpConnectionsRemote = FUNC_2(VAR_1, "NumTcpConnectionsRemote");
 VAR_0->NumHubTotal = FUNC_2(VAR_1, "NumHubTotal");
 VAR_0->NumHubStandalone = FUNC_2(VAR_1, "NumHubStandalone");
 VAR_0->NumHubStatic = FUNC_2(VAR_1, "NumHubStatic");
 VAR_0->NumHubDynamic = FUNC_2(VAR_1, "NumHubDynamic");
 VAR_0->NumSessionsTotal = FUNC_2(VAR_1, "NumSessionsTotal");
 VAR_0->NumSessionsLocal = FUNC_2(VAR_1, "NumSessionsLocal");
 VAR_0->NumSessionsRemote = FUNC_2(VAR_1, "NumSessionsRemote");
 VAR_0->NumMacTables = FUNC_2(VAR_1, "NumMacTables");
 VAR_0->NumIpTables = FUNC_2(VAR_1, "NumIpTables");
 VAR_0->NumUsers = FUNC_2(VAR_1, "NumUsers");
 VAR_0->NumGroups = FUNC_2(VAR_1, "NumGroups");
 VAR_0->CurrentTime = FUNC_3(VAR_1, "CurrentTime");
 VAR_0->CurrentTick = FUNC_3(VAR_1, "CurrentTick");
 VAR_0->AssignedBridgeLicenses = FUNC_2(VAR_1, "AssignedBridgeLicenses");
 VAR_0->AssignedClientLicenses = FUNC_2(VAR_1, "AssignedClientLicenses");
 VAR_0->AssignedBridgeLicensesTotal = FUNC_2(VAR_1, "AssignedBridgeLicensesTotal");
 VAR_0->AssignedClientLicensesTotal = FUNC_2(VAR_1, "AssignedClientLicensesTotal");
 VAR_0->StartTime = FUNC_3(VAR_1, "StartTime");

 FUNC_1(&VAR_0->Traffic, VAR_1);

 FUNC_0(&VAR_0->MemInfo, VAR_1);
}

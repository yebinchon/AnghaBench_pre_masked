
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int MemInfo; int Traffic; int StartTime; int AssignedClientLicensesTotal; int AssignedBridgeLicensesTotal; int AssignedClientLicenses; int AssignedBridgeLicenses; int CurrentTick; int CurrentTime; int NumGroups; int NumUsers; int NumIpTables; int NumMacTables; int NumTcpConnectionsRemote; int NumTcpConnectionsLocal; int NumTcpConnections; int NumSessionsRemote; int NumSessionsLocal; int NumSessionsTotal; int NumHubDynamic; int NumHubStatic; int NumHubStandalone; int NumHubTotal; int ServerType; } ;
typedef TYPE_1__ RPC_SERVER_STATUS ;
typedef int PACK ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *,char*,int ) ;

void FUNC_5(PACK *VAR_0, RPC_SERVER_STATUS *VAR_1)
{

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_2(VAR_0, "ServerType", VAR_1->ServerType);
 FUNC_2(VAR_0, "NumHubTotal", VAR_1->NumHubTotal);
 FUNC_2(VAR_0, "NumHubStandalone", VAR_1->NumHubStandalone);
 FUNC_2(VAR_0, "NumHubStatic", VAR_1->NumHubStatic);
 FUNC_2(VAR_0, "NumHubDynamic", VAR_1->NumHubDynamic);
 FUNC_2(VAR_0, "NumSessionsTotal", VAR_1->NumSessionsTotal);
 FUNC_2(VAR_0, "NumSessionsLocal", VAR_1->NumSessionsLocal);
 FUNC_2(VAR_0, "NumSessionsRemote", VAR_1->NumSessionsRemote);
 FUNC_2(VAR_0, "NumTcpConnections", VAR_1->NumTcpConnections);
 FUNC_2(VAR_0, "NumTcpConnectionsLocal", VAR_1->NumTcpConnectionsLocal);
 FUNC_2(VAR_0, "NumTcpConnectionsRemote", VAR_1->NumTcpConnectionsRemote);
 FUNC_2(VAR_0, "NumMacTables", VAR_1->NumMacTables);
 FUNC_2(VAR_0, "NumIpTables", VAR_1->NumIpTables);
 FUNC_2(VAR_0, "NumUsers", VAR_1->NumUsers);
 FUNC_2(VAR_0, "NumGroups", VAR_1->NumGroups);
 FUNC_4(VAR_0, "CurrentTime", VAR_1->CurrentTime);
 FUNC_3(VAR_0, "CurrentTick", VAR_1->CurrentTick);
 FUNC_2(VAR_0, "AssignedBridgeLicenses", VAR_1->AssignedBridgeLicenses);
 FUNC_2(VAR_0, "AssignedClientLicenses", VAR_1->AssignedClientLicenses);
 FUNC_2(VAR_0, "AssignedBridgeLicensesTotal", VAR_1->AssignedBridgeLicensesTotal);
 FUNC_2(VAR_0, "AssignedClientLicensesTotal", VAR_1->AssignedClientLicensesTotal);
 FUNC_4(VAR_0, "StartTime", VAR_1->StartTime);

 FUNC_1(VAR_0, &VAR_1->Traffic);

 FUNC_0(VAR_0, &VAR_1->MemInfo);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef char wchar_t ;
typedef int vv ;
typedef int tmp2 ;
typedef int tmp ;
typedef int t ;
typedef scalar_t__ UINT ;
struct TYPE_8__ {int Rpc; } ;
struct TYPE_6__ {scalar_t__ TotalMemory; scalar_t__ UsedMemory; scalar_t__ FreeMemory; scalar_t__ TotalPhys; scalar_t__ UsedPhys; scalar_t__ FreePhys; } ;
struct TYPE_7__ {scalar_t__ ServerType; char* CurrentTick; TYPE_1__ MemInfo; int CurrentTime; int StartTime; int Traffic; int AssignedBridgeLicensesTotal; int AssignedClientLicensesTotal; int AssignedBridgeLicenses; int AssignedClientLicenses; int NumGroups; int NumUsers; int NumIpTables; int NumMacTables; int NumSessionsRemote; int NumSessionsLocal; int NumSessionsTotal; int NumHubDynamic; int NumHubStatic; int NumHubTotal; int NumTcpConnectionsRemote; int NumTcpConnectionsLocal; int NumTcpConnections; } ;
typedef TYPE_2__ RPC_SERVER_STATUS ;
typedef TYPE_3__ PS ;
typedef int LIST ;
typedef int CT ;
typedef int CONSOLE ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,char*,char*) ;
 int FUNC_4 (int *,char*,int) ;
 int * FUNC_5 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,int,int ,int *) ;
 int FUNC_8 (char*,int,int ) ;
 int VAR_2 ;
 int * FUNC_9 (int *,char*,char*,int *,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_10 (int ,TYPE_2__*) ;
 int FUNC_11 (char*,int,char*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*,int,scalar_t__) ;
 int FUNC_14 (char*,int,char*,char*) ;
 int FUNC_15 (char*,int ) ;
 int FUNC_16 (TYPE_2__*,int) ;
 char* FUNC_17 (char*) ;

UINT FUNC_18(CONSOLE *VAR_6, char *VAR_7, wchar_t *VAR_8, void *VAR_9)
{
 LIST *VAR_10;
 PS *VAR_11 = (PS *)VAR_9;
 UINT VAR_12;
 RPC_SERVER_STATUS VAR_13;
 wchar_t VAR_14[VAR_2];
 char VAR_15[VAR_2];
 CT *VAR_16;

 VAR_10 = FUNC_9(VAR_6, VAR_7, VAR_8, ((void*)0), 0);
 if (VAR_10 == ((void*)0))
 {
  return VAR_0;
 }

 FUNC_16(&VAR_13, sizeof(VAR_13));
 VAR_12 = FUNC_10(VAR_11->Rpc, &VAR_13);
 if (VAR_12 != VAR_1)
 {
  FUNC_1(VAR_6, VAR_12);
  FUNC_6(VAR_10);
  return VAR_12;
 }

 VAR_16 = FUNC_5();

 FUNC_4(VAR_16, FUNC_17("SM_STATUS_COLUMN_1"), 0);
 FUNC_4(VAR_16, FUNC_17("SM_STATUS_COLUMN_2"), 0);


 FUNC_3(VAR_16, FUNC_17("SM_ST_SERVER_TYPE"),
  VAR_13.ServerType == VAR_5 ? FUNC_17("SM_SERVER_STANDALONE") :
  VAR_13.ServerType == VAR_4 ? FUNC_17("SM_FARM_MEMBER") : FUNC_17("SM_FARM_CONTROLLER"));


 FUNC_15(VAR_14, VAR_13.NumTcpConnections);
 FUNC_3(VAR_16, FUNC_17("SM_ST_NUM_TCP"), VAR_14);

 if (VAR_13.ServerType == VAR_3)
 {

  FUNC_15(VAR_14, VAR_13.NumTcpConnectionsLocal);
  FUNC_3(VAR_16, FUNC_17("SM_ST_NUM_TCP_LOCAL"), VAR_14);


  FUNC_15(VAR_14, VAR_13.NumTcpConnectionsRemote);
  FUNC_3(VAR_16, FUNC_17("SM_ST_NUM_TCP_REMOTE"), VAR_14);
 }


 FUNC_15(VAR_14, VAR_13.NumHubTotal);
 FUNC_3(VAR_16, FUNC_17("SM_ST_NUM_HUB_TOTAL"), VAR_14);

 if (VAR_13.ServerType != VAR_5)
 {

  FUNC_15(VAR_14, VAR_13.NumHubStatic);
  FUNC_3(VAR_16, FUNC_17("SM_ST_NUM_HUB_STATIC"), VAR_14);


  FUNC_15(VAR_14, VAR_13.NumHubDynamic);
  FUNC_3(VAR_16, FUNC_17("SM_ST_NUM_HUB_DYNAMIC"), VAR_14);
 }


 FUNC_15(VAR_14, VAR_13.NumSessionsTotal);
 FUNC_3(VAR_16, FUNC_17("SM_ST_NUM_SESSION_TOTAL"), VAR_14);

 if (VAR_13.ServerType == VAR_3)
 {

  FUNC_15(VAR_14, VAR_13.NumSessionsLocal);
  FUNC_3(VAR_16, FUNC_17("SM_ST_NUM_SESSION_LOCAL"), VAR_14);


  FUNC_15(VAR_14, VAR_13.NumSessionsRemote);
  FUNC_3(VAR_16, FUNC_17("SM_ST_NUM_SESSION_REMOTE"), VAR_14);
 }


 FUNC_15(VAR_14, VAR_13.NumMacTables);
 FUNC_3(VAR_16, FUNC_17("SM_ST_NUM_MAC_TABLE"), VAR_14);


 FUNC_15(VAR_14, VAR_13.NumIpTables);
 FUNC_3(VAR_16, FUNC_17("SM_ST_NUM_IP_TABLE"), VAR_14);


 FUNC_15(VAR_14, VAR_13.NumUsers);
 FUNC_3(VAR_16, FUNC_17("SM_ST_NUM_USERS"), VAR_14);


 FUNC_15(VAR_14, VAR_13.NumGroups);
 FUNC_3(VAR_16, FUNC_17("SM_ST_NUM_GROUPS"), VAR_14);


 FUNC_15(VAR_14, VAR_13.AssignedClientLicenses);
 FUNC_3(VAR_16, FUNC_17("SM_ST_CLIENT_LICENSE"), VAR_14);

 FUNC_15(VAR_14, VAR_13.AssignedBridgeLicenses);
 FUNC_3(VAR_16, FUNC_17("SM_ST_BRIDGE_LICENSE"), VAR_14);

 if (VAR_13.ServerType == VAR_3)
 {
  FUNC_15(VAR_14, VAR_13.AssignedClientLicensesTotal);
  FUNC_3(VAR_16, FUNC_17("SM_ST_CLIENT_LICENSE_EX"), VAR_14);

  FUNC_15(VAR_14, VAR_13.AssignedBridgeLicensesTotal);
  FUNC_3(VAR_16, FUNC_17("SM_ST_BRIDGE_LICENSE_EX"), VAR_14);
 }


 FUNC_0(VAR_16, &VAR_13.Traffic);


 FUNC_7(VAR_14, sizeof(VAR_14), FUNC_12(VAR_13.StartTime), ((void*)0));
 FUNC_3(VAR_16, FUNC_17("SM_ST_START_TIME"), VAR_14);


 FUNC_8(VAR_15, sizeof(VAR_15), FUNC_12(VAR_13.CurrentTime));
 FUNC_11(VAR_14, sizeof(VAR_14), VAR_15);
 FUNC_3(VAR_16, FUNC_17("SM_ST_CURRENT_TIME"), VAR_14);


 FUNC_14(VAR_14, sizeof(VAR_14), L"%I64u", VAR_13.CurrentTick);
 FUNC_3(VAR_16, FUNC_17("SM_ST_CURRENT_TICK"), VAR_14);


 if (VAR_13.MemInfo.TotalMemory != 0)
 {
  char VAR_17[128];

  FUNC_13(VAR_17, sizeof(VAR_17), VAR_13.MemInfo.TotalMemory);
  FUNC_14(VAR_14, sizeof(VAR_14), FUNC_17("SM_ST_RAM_SIZE_KB"), VAR_17);
  FUNC_3(VAR_16, FUNC_17("SM_ST_TOTAL_MEMORY"), VAR_14);

  FUNC_13(VAR_17, sizeof(VAR_17), VAR_13.MemInfo.UsedMemory);
  FUNC_14(VAR_14, sizeof(VAR_14), FUNC_17("SM_ST_RAM_SIZE_KB"), VAR_17);
  FUNC_3(VAR_16, FUNC_17("SM_ST_USED_MEMORY"), VAR_14);

  FUNC_13(VAR_17, sizeof(VAR_17), VAR_13.MemInfo.FreeMemory);
  FUNC_14(VAR_14, sizeof(VAR_14), FUNC_17("SM_ST_RAM_SIZE_KB"), VAR_17);
  FUNC_3(VAR_16, FUNC_17("SM_ST_FREE_MEMORY"), VAR_14);

  FUNC_13(VAR_17, sizeof(VAR_17), VAR_13.MemInfo.TotalPhys);
  FUNC_14(VAR_14, sizeof(VAR_14), FUNC_17("SM_ST_RAM_SIZE_KB"), VAR_17);
  FUNC_3(VAR_16, FUNC_17("SM_ST_TOTAL_PHYS"), VAR_14);

  FUNC_13(VAR_17, sizeof(VAR_17), VAR_13.MemInfo.UsedPhys);
  FUNC_14(VAR_14, sizeof(VAR_14), FUNC_17("SM_ST_RAM_SIZE_KB"), VAR_17);
  FUNC_3(VAR_16, FUNC_17("SM_ST_USED_PHYS"), VAR_14);

  FUNC_13(VAR_17, sizeof(VAR_17), VAR_13.MemInfo.FreePhys);
  FUNC_14(VAR_14, sizeof(VAR_14), FUNC_17("SM_ST_RAM_SIZE_KB"), VAR_17);
  FUNC_3(VAR_16, FUNC_17("SM_ST_FREE_PHYS"), VAR_14);
 }

 FUNC_2(VAR_16, VAR_6);

 FUNC_6(VAR_10);

 return 0;
}

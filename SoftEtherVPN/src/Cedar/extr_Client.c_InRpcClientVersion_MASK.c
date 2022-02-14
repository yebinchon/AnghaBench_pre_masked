
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ClientId; void* ShowVgcLink; void* IsVgcSupported; void* IsVLanNameRegulated; void* OsType; void* ProcessId; void* ClientBuildInt; void* ClientVerInt; int ClientBuildInfoString; int ClientVersionString; int ClientProductName; } ;
typedef TYPE_1__ RPC_CLIENT_VERSION ;
typedef int PACK ;


 void* FUNC_0 (int *,char*) ;
 void* FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,int ,int) ;
 int FUNC_3 (TYPE_1__*,int) ;

void FUNC_4(RPC_CLIENT_VERSION *VAR_0, PACK *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_3(VAR_0, sizeof(RPC_CLIENT_VERSION));
 FUNC_2(VAR_1, "ClientProductName", VAR_0->ClientProductName, sizeof(VAR_0->ClientProductName));
 FUNC_2(VAR_1, "ClientVersionString", VAR_0->ClientVersionString, sizeof(VAR_0->ClientVersionString));
 FUNC_2(VAR_1, "ClientBuildInfoString", VAR_0->ClientBuildInfoString, sizeof(VAR_0->ClientBuildInfoString));
 VAR_0->ClientVerInt = FUNC_1(VAR_1, "ClientVerInt");
 VAR_0->ClientBuildInt = FUNC_1(VAR_1, "ClientBuildInt");
 VAR_0->ProcessId = FUNC_1(VAR_1, "ProcessId");
 VAR_0->OsType = FUNC_1(VAR_1, "OsType");
 VAR_0->IsVLanNameRegulated = FUNC_0(VAR_1, "IsVLanNameRegulated");
 VAR_0->IsVgcSupported = FUNC_0(VAR_1, "IsVgcSupported");
 VAR_0->ShowVgcLink = FUNC_0(VAR_1, "ShowVgcLink");
 FUNC_2(VAR_1, "ClientId", VAR_0->ClientId, sizeof(VAR_0->ClientId));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ClientId; int ShowVgcLink; int IsVgcSupported; int IsVLanNameRegulated; int OsType; int ProcessId; int ClientBuildInt; int ClientVerInt; int ClientBuildInfoString; int ClientVersionString; int ClientProductName; } ;
typedef TYPE_1__ RPC_CLIENT_VERSION ;
typedef int PACK ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,int ) ;

void FUNC_3(PACK *VAR_0, RPC_CLIENT_VERSION *VAR_1)
{

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_2(VAR_0, "ClientProductName", VAR_1->ClientProductName);
 FUNC_2(VAR_0, "ClientVersionString", VAR_1->ClientVersionString);
 FUNC_2(VAR_0, "ClientBuildInfoString", VAR_1->ClientBuildInfoString);
 FUNC_1(VAR_0, "ClientVerInt", VAR_1->ClientVerInt);
 FUNC_1(VAR_0, "ClientBuildInt", VAR_1->ClientBuildInt);
 FUNC_1(VAR_0, "ProcessId", VAR_1->ProcessId);
 FUNC_1(VAR_0, "OsType", VAR_1->OsType);
 FUNC_0(VAR_0, "IsVLanNameRegulated", VAR_1->IsVLanNameRegulated);
 FUNC_0(VAR_0, "IsVgcSupported", VAR_1->IsVgcSupported);
 FUNC_0(VAR_0, "ShowVgcLink", VAR_1->ShowVgcLink);
 FUNC_2(VAR_0, "ClientId", VAR_1->ClientId);
}

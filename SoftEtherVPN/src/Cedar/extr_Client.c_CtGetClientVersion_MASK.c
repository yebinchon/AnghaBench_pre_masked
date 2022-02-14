
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int OsType; } ;
struct TYPE_10__ {TYPE_1__* Cedar; } ;
struct TYPE_9__ {int OsType; int IsVLanNameRegulated; int ProcessId; int ClientBuildInt; int ClientVerInt; int ClientBuildInfoString; int ClientVersionString; int ClientProductName; } ;
struct TYPE_8__ {int Build; int Version; int BuildInfo; int VerString; } ;
typedef TYPE_2__ RPC_CLIENT_VERSION ;
typedef TYPE_3__ CLIENT ;


 int VAR_0 ;
 TYPE_5__* FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 (TYPE_2__*,int) ;

bool FUNC_5(CLIENT *VAR_1, RPC_CLIENT_VERSION *VAR_2)
{

 if (VAR_2 == ((void*)0))
 {
  return 0;
 }

 FUNC_4(VAR_2, sizeof(RPC_CLIENT_VERSION));
 FUNC_3(VAR_2->ClientProductName, sizeof(VAR_2->ClientProductName), VAR_0);
 FUNC_3(VAR_2->ClientVersionString, sizeof(VAR_2->ClientVersionString), VAR_1->Cedar->VerString);
 FUNC_3(VAR_2->ClientBuildInfoString, sizeof(VAR_2->ClientBuildInfoString), VAR_1->Cedar->BuildInfo);
 VAR_2->ClientVerInt = VAR_1->Cedar->Version;
 VAR_2->ClientBuildInt = VAR_1->Cedar->Build;
 VAR_2->OsType = FUNC_0()->OsType;

 return 1;
}

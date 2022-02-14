
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int OsInfo; int ServerFamilyName; int ServerBuildDate; int ServerType; int ServerHostName; int ServerBuildInt; int ServerVerInt; int ServerBuildInfoString; int ServerVersionString; int ServerProductName; } ;
typedef TYPE_1__ RPC_SERVER_INFO ;
typedef int PACK ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,char*,int ) ;

void FUNC_4(PACK *VAR_0, RPC_SERVER_INFO *VAR_1)
{

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_2(VAR_0, "ServerProductName", VAR_1->ServerProductName);
 FUNC_2(VAR_0, "ServerVersionString", VAR_1->ServerVersionString);
 FUNC_2(VAR_0, "ServerBuildInfoString", VAR_1->ServerBuildInfoString);
 FUNC_1(VAR_0, "ServerVerInt", VAR_1->ServerVerInt);
 FUNC_1(VAR_0, "ServerBuildInt", VAR_1->ServerBuildInt);
 FUNC_2(VAR_0, "ServerHostName", VAR_1->ServerHostName);
 FUNC_1(VAR_0, "ServerType", VAR_1->ServerType);
 FUNC_3(VAR_0, "ServerBuildDate", VAR_1->ServerBuildDate);
 FUNC_2(VAR_0, "ServerFamilyName", VAR_1->ServerFamilyName);
 FUNC_0(VAR_0, &VAR_1->OsInfo);
}

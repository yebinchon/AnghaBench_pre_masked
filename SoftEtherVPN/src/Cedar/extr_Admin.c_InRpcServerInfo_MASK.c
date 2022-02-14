
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int OsInfo; int ServerFamilyName; int ServerBuildDate; void* ServerType; int ServerHostName; void* ServerBuildInt; void* ServerVerInt; int ServerBuildInfoString; int ServerVersionString; int ServerProductName; } ;
typedef TYPE_1__ RPC_SERVER_INFO ;
typedef int PACK ;


 int FUNC_0 (int *,int *) ;
 void* FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,int ,int) ;
 int FUNC_4 (TYPE_1__*,int) ;

void FUNC_5(RPC_SERVER_INFO *VAR_0, PACK *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_4(VAR_0, sizeof(RPC_SERVER_INFO));

 FUNC_3(VAR_1, "ServerProductName", VAR_0->ServerProductName, sizeof(VAR_0->ServerProductName));
 FUNC_3(VAR_1, "ServerVersionString", VAR_0->ServerVersionString, sizeof(VAR_0->ServerVersionString));
 FUNC_3(VAR_1, "ServerBuildInfoString", VAR_0->ServerBuildInfoString, sizeof(VAR_0->ServerBuildInfoString));
 VAR_0->ServerVerInt = FUNC_1(VAR_1, "ServerVerInt");
 VAR_0->ServerBuildInt = FUNC_1(VAR_1, "ServerBuildInt");
 FUNC_3(VAR_1, "ServerHostName", VAR_0->ServerHostName, sizeof(VAR_0->ServerHostName));
 VAR_0->ServerType = FUNC_1(VAR_1, "ServerType");
 VAR_0->ServerBuildDate = FUNC_2(VAR_1, "ServerBuildDate");
 FUNC_3(VAR_1, "ServerFamilyName", VAR_0->ServerFamilyName, sizeof(VAR_0->ServerFamilyName));
 FUNC_0(&VAR_0->OsInfo, VAR_1);
}

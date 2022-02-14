
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* Type; void* ClientBuild; void* ClientVer; void* ServerBuild; void* ServerVer; int ClientStr; int ServerStr; int Hostname; int ConnectedTime; void* Port; int Ip; int Name; } ;
typedef TYPE_1__ RPC_CONNECTION_INFO ;
typedef int PACK ;


 void* FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,int ,int) ;
 int FUNC_4 (TYPE_1__*,int) ;

void FUNC_5(RPC_CONNECTION_INFO *VAR_0, PACK *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_4(VAR_0, sizeof(RPC_CONNECTION_INFO));
 FUNC_3(VAR_1, "Name", VAR_0->Name, sizeof(VAR_0->Name));
 VAR_0->Ip = FUNC_2(VAR_1, "Ip");
 VAR_0->Port = FUNC_0(VAR_1, "Port");
 VAR_0->ConnectedTime = FUNC_1(VAR_1, "ConnectedTime");
 FUNC_3(VAR_1, "Hostname", VAR_0->Hostname, sizeof(VAR_0->Hostname));
 FUNC_3(VAR_1, "ServerStr", VAR_0->ServerStr, sizeof(VAR_0->ServerStr));
 FUNC_3(VAR_1, "ClientStr", VAR_0->ClientStr, sizeof(VAR_0->ClientStr));
 VAR_0->ServerVer = FUNC_0(VAR_1, "ServerVer");
 VAR_0->ServerBuild = FUNC_0(VAR_1, "ServerBuild");
 VAR_0->ClientVer = FUNC_0(VAR_1, "ClientVer");
 VAR_0->ClientBuild = FUNC_0(VAR_1, "ClientBuild");
 VAR_0->Type = FUNC_0(VAR_1, "Type");
}

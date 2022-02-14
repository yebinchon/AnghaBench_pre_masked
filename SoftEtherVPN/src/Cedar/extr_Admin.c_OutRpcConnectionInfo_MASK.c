
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Type; int ClientBuild; int ClientVer; int ServerBuild; int ServerVer; int ClientStr; int ServerStr; int Hostname; int ConnectedTime; int Port; int Ip; int Name; } ;
typedef TYPE_1__ RPC_CONNECTION_INFO ;
typedef int PACK ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,char*,int ) ;

void FUNC_4(PACK *VAR_0, RPC_CONNECTION_INFO *VAR_1)
{

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_2(VAR_0, "Name", VAR_1->Name);
 FUNC_1(VAR_0, "Ip", VAR_1->Ip);
 FUNC_0(VAR_0, "Port", VAR_1->Port);
 FUNC_3(VAR_0, "ConnectedTime", VAR_1->ConnectedTime);
 FUNC_2(VAR_0, "Hostname", VAR_1->Hostname);
 FUNC_2(VAR_0, "ServerStr", VAR_1->ServerStr);
 FUNC_2(VAR_0, "ClientStr", VAR_1->ClientStr);
 FUNC_0(VAR_0, "ServerVer", VAR_1->ServerVer);
 FUNC_0(VAR_0, "ServerBuild", VAR_1->ServerBuild);
 FUNC_0(VAR_0, "ClientVer", VAR_1->ClientVer);
 FUNC_0(VAR_0, "ClientBuild", VAR_1->ClientBuild);
 FUNC_0(VAR_0, "Type", VAR_1->Type);
}

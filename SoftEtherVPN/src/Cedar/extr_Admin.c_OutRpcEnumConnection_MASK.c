
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_5__ {size_t NumConnection; TYPE_1__* Connections; } ;
struct TYPE_4__ {int Type; int ConnectedTime; int Hostname; int Name; int Port; int Ip; } ;
typedef TYPE_1__ RPC_ENUM_CONNECTION_ITEM ;
typedef TYPE_2__ RPC_ENUM_CONNECTION ;
typedef int PACK ;


 int FUNC_0 (int *,char*,int ,size_t,size_t) ;
 int FUNC_1 (int *,char*,int ,size_t,size_t) ;
 int FUNC_2 (int *,char*,int ,size_t,size_t) ;
 int FUNC_3 (int *,char*,int ,size_t,size_t) ;
 int FUNC_4 (int *,char*) ;

void FUNC_5(PACK *VAR_0, RPC_ENUM_CONNECTION *VAR_1)
{
 UINT VAR_2;

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_4(VAR_0, "ConnectionList");
 for (VAR_2 = 0;VAR_2 < VAR_1->NumConnection;VAR_2++)
 {
  RPC_ENUM_CONNECTION_ITEM *VAR_3 = &VAR_1->Connections[VAR_2];

  FUNC_1(VAR_0, "Ip", VAR_3->Ip, VAR_2, VAR_1->NumConnection);
  FUNC_0(VAR_0, "Port", VAR_3->Port, VAR_2, VAR_1->NumConnection);
  FUNC_2(VAR_0, "Name", VAR_3->Name, VAR_2, VAR_1->NumConnection);
  FUNC_2(VAR_0, "Hostname", VAR_3->Hostname, VAR_2, VAR_1->NumConnection);
  FUNC_3(VAR_0, "ConnectedTime", VAR_3->ConnectedTime, VAR_2, VAR_1->NumConnection);
  FUNC_0(VAR_0, "Type", VAR_3->Type, VAR_2, VAR_1->NumConnection);
 }
 FUNC_4(VAR_0, ((void*)0));
}

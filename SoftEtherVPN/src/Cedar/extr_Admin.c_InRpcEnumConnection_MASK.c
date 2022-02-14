
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_7__ {int NumConnection; TYPE_1__* Connections; } ;
struct TYPE_6__ {void* Type; int ConnectedTime; int Hostname; int Name; void* Port; int Ip; } ;
typedef TYPE_1__ RPC_ENUM_CONNECTION_ITEM ;
typedef TYPE_2__ RPC_ENUM_CONNECTION ;
typedef int PACK ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,size_t) ;
 void* FUNC_2 (int *,char*,size_t) ;
 int FUNC_3 (int *,char*,size_t) ;
 int FUNC_4 (int *,char*,int ,int,size_t) ;
 int FUNC_5 (TYPE_2__*,int) ;
 TYPE_1__* FUNC_6 (int) ;

void FUNC_7(RPC_ENUM_CONNECTION *VAR_0, PACK *VAR_1)
{
 UINT VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_5(VAR_0, sizeof(RPC_ENUM_CONNECTION));
 VAR_0->NumConnection = FUNC_0(VAR_1, "Name");
 VAR_0->Connections = FUNC_6(sizeof(RPC_ENUM_CONNECTION_ITEM) * VAR_0->NumConnection);

 for (VAR_2 = 0;VAR_2 < VAR_0->NumConnection;VAR_2++)
 {
  RPC_ENUM_CONNECTION_ITEM *VAR_3 = &VAR_0->Connections[VAR_2];

  VAR_3->Ip = FUNC_3(VAR_1, "Ip", VAR_2);
  VAR_3->Port = FUNC_2(VAR_1, "Port", VAR_2);
  FUNC_4(VAR_1, "Name", VAR_3->Name, sizeof(VAR_3->Name), VAR_2);
  FUNC_4(VAR_1, "Hostname", VAR_3->Hostname, sizeof(VAR_3->Hostname), VAR_2);
  VAR_3->ConnectedTime = FUNC_1(VAR_1, "ConnectedTime", VAR_2);
  VAR_3->Type = FUNC_2(VAR_1, "Type", VAR_2);
 }
}

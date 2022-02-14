
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_5__ {size_t NumPort; size_t NumFarmHub; int Weight; int NumTcpConnections; int NumSessions; TYPE_1__* FarmHubs; int ServerCert; int * Ports; int Point; int Hostname; int Ip; int ConnectedTime; int Controller; int Id; } ;
struct TYPE_4__ {int DynamicHub; int HubName; } ;
typedef TYPE_2__ RPC_FARM_INFO ;
typedef int PACK ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int ,size_t,size_t) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,char*,int ,size_t,size_t) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (int *,char*,int ,size_t,size_t) ;
 int FUNC_7 (int *,char*,int ) ;
 int FUNC_8 (int *,char*,int ) ;
 int FUNC_9 (int *,char*) ;

void FUNC_10(PACK *VAR_0, RPC_FARM_INFO *VAR_1)
{
 UINT VAR_2;

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_2(VAR_0, "Id", VAR_1->Id);
 FUNC_0(VAR_0, "Controller", VAR_1->Controller);
 FUNC_7(VAR_0, "ConnectedTime", VAR_1->ConnectedTime);
 FUNC_4(VAR_0, "Ip", VAR_1->Ip);
 FUNC_5(VAR_0, "Hostname", VAR_1->Hostname);
 FUNC_2(VAR_0, "Point", VAR_1->Point);
 for (VAR_2 = 0;VAR_2 < VAR_1->NumPort;VAR_2++)
 {
  FUNC_3(VAR_0, "Ports", VAR_1->Ports[VAR_2], VAR_2, VAR_1->NumPort);
 }
 FUNC_8(VAR_0, "ServerCert", VAR_1->ServerCert);

 FUNC_9(VAR_0, "HubsList");
 for (VAR_2 = 0;VAR_2 < VAR_1->NumFarmHub;VAR_2++)
 {
  FUNC_6(VAR_0, "HubName", VAR_1->FarmHubs[VAR_2].HubName, VAR_2, VAR_1->NumFarmHub);
  FUNC_1(VAR_0, "DynamicHub", VAR_1->FarmHubs[VAR_2].DynamicHub, VAR_2, VAR_1->NumFarmHub);
 }
 FUNC_9(VAR_0, ((void*)0));

 FUNC_2(VAR_0, "NumSessions", VAR_1->NumSessions);
 FUNC_2(VAR_0, "NumTcpConnections", VAR_1->NumTcpConnections);
 FUNC_2(VAR_0, "Weight", VAR_1->Weight);
}

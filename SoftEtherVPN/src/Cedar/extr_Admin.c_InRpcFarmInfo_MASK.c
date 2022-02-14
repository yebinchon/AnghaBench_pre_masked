
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_6__ {int NumPort; int NumFarmHub; void* Weight; void* NumTcpConnections; void* NumSessions; TYPE_1__* FarmHubs; int ServerCert; int * Ports; void* Point; int Hostname; int Ip; int ConnectedTime; int Controller; void* Id; } ;
struct TYPE_5__ {int DynamicHub; int HubName; } ;
typedef TYPE_2__ RPC_FARM_INFO ;
typedef int RPC_FARM_HUB ;
typedef int PACK ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,size_t) ;
 void* FUNC_2 (int *,char*) ;
 void* FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*,size_t) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,char*,int ,int) ;
 int FUNC_8 (int *,char*,int ,int,size_t) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (TYPE_2__*,int) ;
 void* FUNC_11 (int) ;

void FUNC_12(RPC_FARM_INFO *VAR_0, PACK *VAR_1)
{
 UINT VAR_2;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_10(VAR_0, sizeof(RPC_FARM_INFO));
 VAR_0->Id = FUNC_3(VAR_1, "Id");
 VAR_0->Controller = FUNC_0(VAR_1, "Controller");
 VAR_0->ConnectedTime = FUNC_4(VAR_1, "ConnectedTime");
 VAR_0->Ip = FUNC_6(VAR_1, "Ip");
 FUNC_7(VAR_1, "Hostname", VAR_0->Hostname, sizeof(VAR_0->Hostname));
 VAR_0->Point = FUNC_3(VAR_1, "Point");
 VAR_0->NumPort = FUNC_2(VAR_1, "Ports");
 VAR_0->Ports = FUNC_11(sizeof(UINT) * VAR_0->NumPort);
 for (VAR_2 = 0;VAR_2 < VAR_0->NumPort;VAR_2++)
 {
  VAR_0->Ports[VAR_2] = FUNC_5(VAR_1, "Ports", VAR_2);
 }
 VAR_0->ServerCert = FUNC_9(VAR_1, "ServerCert");
 VAR_0->NumFarmHub = FUNC_2(VAR_1, "HubName");
 VAR_0->FarmHubs = FUNC_11(sizeof(RPC_FARM_HUB) * VAR_0->NumFarmHub);
 for (VAR_2 = 0;VAR_2 < VAR_0->NumFarmHub;VAR_2++)
 {
  FUNC_8(VAR_1, "HubName", VAR_0->FarmHubs[VAR_2].HubName, sizeof(VAR_0->FarmHubs[VAR_2].HubName), VAR_2);
  VAR_0->FarmHubs[VAR_2].DynamicHub = FUNC_1(VAR_1, "DynamicHub", VAR_2);
 }
 VAR_0->NumSessions = FUNC_3(VAR_1, "NumSessions");
 VAR_0->NumTcpConnections = FUNC_3(VAR_1, "NumTcpConnections");
 VAR_0->Weight = FUNC_3(VAR_1, "Weight");
}

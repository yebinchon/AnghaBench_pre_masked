
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_7__ {int NumFarm; TYPE_1__* Farms; } ;
struct TYPE_6__ {void* AssignedBridgeLicense; void* AssignedClientLicense; void* NumHubs; void* NumTcpConnections; void* NumSessions; void* Point; int Hostname; int Ip; int ConnectedTime; int Controller; void* Id; } ;
typedef TYPE_1__ RPC_ENUM_FARM_ITEM ;
typedef TYPE_2__ RPC_ENUM_FARM ;
typedef int PACK ;


 int FUNC_0 (int *,char*,size_t) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,size_t) ;
 void* FUNC_3 (int *,char*,size_t) ;
 int FUNC_4 (int *,char*,size_t) ;
 int FUNC_5 (int *,char*,int ,int,size_t) ;
 int FUNC_6 (TYPE_2__*,int) ;
 TYPE_1__* FUNC_7 (int) ;

void FUNC_8(RPC_ENUM_FARM *VAR_0, PACK *VAR_1)
{
 UINT VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_6(VAR_0, sizeof(RPC_ENUM_FARM));
 VAR_0->NumFarm = FUNC_1(VAR_1, "Id");
 VAR_0->Farms = FUNC_7(sizeof(RPC_ENUM_FARM_ITEM) * VAR_0->NumFarm);

 for (VAR_2 = 0;VAR_2 < VAR_0->NumFarm;VAR_2++)
 {
  RPC_ENUM_FARM_ITEM *VAR_3 = &VAR_0->Farms[VAR_2];

  VAR_3->Id = FUNC_3(VAR_1, "Id", VAR_2);
  VAR_3->Controller = FUNC_0(VAR_1, "Controller", VAR_2);
  VAR_3->ConnectedTime = FUNC_2(VAR_1, "ConnectedTime", VAR_2);
  VAR_3->Ip = FUNC_4(VAR_1, "Ip", VAR_2);
  FUNC_5(VAR_1, "Hostname", VAR_3->Hostname, sizeof(VAR_3->Hostname), VAR_2);
  VAR_3->Point = FUNC_3(VAR_1, "Point", VAR_2);
  VAR_3->NumSessions = FUNC_3(VAR_1, "NumSessions", VAR_2);
  VAR_3->NumTcpConnections = FUNC_3(VAR_1, "NumTcpConnections", VAR_2);
  VAR_3->NumHubs = FUNC_3(VAR_1, "NumHubs", VAR_2);
  VAR_3->AssignedClientLicense = FUNC_3(VAR_1, "AssignedClientLicense", VAR_2);
  VAR_3->AssignedBridgeLicense = FUNC_3(VAR_1, "AssignedBridgeLicense", VAR_2);
 }
}

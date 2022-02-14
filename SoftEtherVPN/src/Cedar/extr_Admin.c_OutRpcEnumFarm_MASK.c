
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_5__ {size_t NumFarm; TYPE_1__* Farms; } ;
struct TYPE_4__ {int AssignedBridgeLicense; int AssignedClientLicense; int NumHubs; int NumTcpConnections; int NumSessions; int Point; int Hostname; int Ip; int ConnectedTime; int Controller; int Id; } ;
typedef TYPE_1__ RPC_ENUM_FARM_ITEM ;
typedef TYPE_2__ RPC_ENUM_FARM ;
typedef int PACK ;


 int FUNC_0 (int *,char*,int ,size_t,size_t) ;
 int FUNC_1 (int *,char*,int ,size_t,size_t) ;
 int FUNC_2 (int *,char*,int ,size_t,size_t) ;
 int FUNC_3 (int *,char*,int ,size_t,size_t) ;
 int FUNC_4 (int *,char*,int ,size_t,size_t) ;
 int FUNC_5 (int *,char*) ;

void FUNC_6(PACK *VAR_0, RPC_ENUM_FARM *VAR_1)
{
 UINT VAR_2;

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_5(VAR_0, "FarmMemberList");
 for (VAR_2 = 0;VAR_2 < VAR_1->NumFarm;VAR_2++)
 {
  RPC_ENUM_FARM_ITEM *VAR_3 = &VAR_1->Farms[VAR_2];

  FUNC_1(VAR_0, "Id", VAR_3->Id, VAR_2, VAR_1->NumFarm);
  FUNC_0(VAR_0, "Controller", VAR_3->Controller, VAR_2, VAR_1->NumFarm);
  FUNC_4(VAR_0, "ConnectedTime", VAR_3->ConnectedTime, VAR_2, VAR_1->NumFarm);
  FUNC_2(VAR_0, "Ip", VAR_3->Ip, VAR_2, VAR_1->NumFarm);
  FUNC_3(VAR_0, "Hostname", VAR_3->Hostname, VAR_2, VAR_1->NumFarm);
  FUNC_1(VAR_0, "Point", VAR_3->Point, VAR_2, VAR_1->NumFarm);
  FUNC_1(VAR_0, "NumSessions", VAR_3->NumSessions, VAR_2, VAR_1->NumFarm);
  FUNC_1(VAR_0, "NumTcpConnections", VAR_3->NumTcpConnections, VAR_2, VAR_1->NumFarm);
  FUNC_1(VAR_0, "NumHubs", VAR_3->NumHubs, VAR_2, VAR_1->NumFarm);
  FUNC_1(VAR_0, "AssignedClientLicense", VAR_3->AssignedClientLicense, VAR_2, VAR_1->NumFarm);
  FUNC_1(VAR_0, "AssignedBridgeLicense", VAR_3->AssignedBridgeLicense, VAR_2, VAR_1->NumFarm);
 }
 FUNC_5(VAR_0, ((void*)0));
}

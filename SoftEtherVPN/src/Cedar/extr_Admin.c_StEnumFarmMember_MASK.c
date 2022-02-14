
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_19__ {TYPE_1__* Server; } ;
struct TYPE_18__ {int AssignedClientLicense; int AssignedBridgeLicense; int CurrentTcpConnections; int CurrentSessions; int CreatedTick; } ;
struct TYPE_17__ {int Ip; int HubList; void* AssignedClientLicense; void* AssignedBridgeLicense; void* NumTcpConnections; void* NumSessions; int Point; int hostname; int ConnectedTime; scalar_t__ Me; } ;
struct TYPE_16__ {int NumFarm; TYPE_2__* Farms; } ;
struct TYPE_15__ {int Ip; void* NumHubs; void* AssignedClientLicense; void* AssignedBridgeLicense; void* NumTcpConnections; void* NumSessions; int Point; int Hostname; int ConnectedTime; scalar_t__ Controller; int Id; } ;
struct TYPE_14__ {scalar_t__ ServerType; int FarmMemberList; TYPE_5__* Cedar; } ;
typedef TYPE_1__ SERVER ;
typedef TYPE_2__ RPC_ENUM_FARM_ITEM ;
typedef TYPE_3__ RPC_ENUM_FARM ;
typedef TYPE_4__ FARM_MEMBER ;
typedef TYPE_5__ CEDAR ;
typedef TYPE_6__ ADMIN ;


 void* FUNC_0 (int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,int) ;
 TYPE_4__* FUNC_3 (int ,size_t) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_4__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_7 (int ,int,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_3__*,int) ;
 TYPE_2__* FUNC_11 (int) ;

UINT FUNC_12(ADMIN *VAR_3, RPC_ENUM_FARM *VAR_4)
{
 SERVER *VAR_5 = VAR_3->Server;
 CEDAR *VAR_6 = VAR_5->Cedar;
 UINT VAR_7;

 FUNC_1(VAR_4);
 FUNC_10(VAR_4, sizeof(RPC_ENUM_FARM));

 if (VAR_5->ServerType != VAR_2)
 {
  return VAR_0;
 }

 FUNC_10(VAR_4, sizeof(RPC_ENUM_FARM));

 FUNC_5(VAR_5->FarmMemberList);
 {
  VAR_4->NumFarm = FUNC_4(VAR_5->FarmMemberList);
  VAR_4->Farms = FUNC_11(sizeof(RPC_ENUM_FARM_ITEM) * VAR_4->NumFarm);

  for (VAR_7 = 0;VAR_7 < VAR_4->NumFarm;VAR_7++)
  {
   FARM_MEMBER *VAR_8 = FUNC_3(VAR_5->FarmMemberList, VAR_7);
   RPC_ENUM_FARM_ITEM *VAR_9 = &VAR_4->Farms[VAR_7];

   VAR_9->Id = FUNC_6(VAR_8);
   VAR_9->Controller = VAR_8->Me;

   if (VAR_9->Controller)
   {
    VAR_9->ConnectedTime = FUNC_8(VAR_6->CreatedTick);
    VAR_9->Ip = 0x0100007f;
    FUNC_2(VAR_9->Hostname, sizeof(VAR_9->Hostname));
    VAR_9->Point = VAR_8->Point;
    VAR_9->NumSessions = FUNC_0(VAR_6->CurrentSessions);
    VAR_9->NumTcpConnections = FUNC_0(VAR_6->CurrentTcpConnections);

    VAR_9->AssignedBridgeLicense = FUNC_0(VAR_6->AssignedBridgeLicense);
    VAR_9->AssignedClientLicense = FUNC_0(VAR_6->AssignedClientLicense);
   }
   else
   {
    VAR_9->ConnectedTime = VAR_8->ConnectedTime;
    VAR_9->Ip = VAR_8->Ip;
    FUNC_7(VAR_9->Hostname, sizeof(VAR_9->Hostname), VAR_8->hostname);
    VAR_9->Point = VAR_8->Point;
    VAR_9->NumSessions = VAR_8->NumSessions;
    VAR_9->NumTcpConnections = VAR_8->NumTcpConnections;

    VAR_9->AssignedBridgeLicense = VAR_8->AssignedBridgeLicense;
    VAR_9->AssignedClientLicense = VAR_8->AssignedClientLicense;
   }
   VAR_9->NumHubs = FUNC_4(VAR_8->HubList);
  }
 }
 FUNC_9(VAR_5->FarmMemberList);

 return VAR_1;
}

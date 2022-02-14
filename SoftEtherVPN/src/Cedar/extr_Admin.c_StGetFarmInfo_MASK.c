
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_21__ {TYPE_3__* Server; } ;
struct TYPE_20__ {int Ip; int NumPort; void* NumTcpConnections; void* NumSessions; int ServerCert; int Ports; int Point; int hostname; int ConnectedTime; int HubList; int Weight; int Me; } ;
struct TYPE_19__ {int Name; int DynamicHub; } ;
struct TYPE_18__ {int HubName; int DynamicHub; } ;
struct TYPE_17__ {size_t Id; size_t NumFarmHub; int Ip; int NumPort; void* NumTcpConnections; void* NumSessions; void* ServerCert; int * Ports; int Point; int Hostname; int ConnectedTime; int Controller; TYPE_5__* FarmHubs; int Weight; } ;
struct TYPE_16__ {scalar_t__ ServerType; int FarmMemberList; TYPE_1__* Cedar; int ServerListenerList; } ;
struct TYPE_15__ {int Port; scalar_t__ Enabled; } ;
struct TYPE_14__ {int CurrentTcpConnections; int CurrentSessions; int ServerX; int CreatedTick; } ;
typedef TYPE_2__ SERVER_LISTENER ;
typedef TYPE_3__ SERVER ;
typedef TYPE_4__ RPC_FARM_INFO ;
typedef TYPE_5__ RPC_FARM_HUB ;
typedef TYPE_6__ HUB_LIST ;
typedef TYPE_7__ FARM_MEMBER ;
typedef TYPE_8__ ADMIN ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int) ;
 void* FUNC_2 (int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int ,size_t) ;
 void* FUNC_6 (int ,size_t) ;
 size_t FUNC_7 (int ) ;
 TYPE_7__* FUNC_8 (int ,size_t) ;
 int FUNC_9 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_10 (int ,int,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (TYPE_4__*,int) ;
 void* FUNC_14 (int) ;

UINT FUNC_15(ADMIN *VAR_4, RPC_FARM_INFO *VAR_5)
{
 SERVER *VAR_6 = VAR_4->Server;
 UINT VAR_7 = VAR_5->Id;
 UINT VAR_8;
 UINT VAR_9 = VAR_1;

 FUNC_3(VAR_5);
 FUNC_13(VAR_5, sizeof(RPC_FARM_INFO));

 if (VAR_6->ServerType != VAR_3)
 {
  return VAR_0;
 }

 FUNC_9(VAR_6->FarmMemberList);
 {
  if (FUNC_5(VAR_6->FarmMemberList, VAR_7))
  {
   FARM_MEMBER *VAR_10 = FUNC_8(VAR_6->FarmMemberList, VAR_7);

   VAR_5->Id = VAR_7;
   VAR_5->Controller = VAR_10->Me;
   VAR_5->Weight = VAR_10->Weight;

   FUNC_9(VAR_10->HubList);
   {
    VAR_5->NumFarmHub = FUNC_7(VAR_10->HubList);
    VAR_5->FarmHubs = FUNC_14(sizeof(RPC_FARM_HUB) * VAR_5->NumFarmHub);

    for (VAR_8 = 0;VAR_8 < VAR_5->NumFarmHub;VAR_8++)
    {
     RPC_FARM_HUB *VAR_11 = &VAR_5->FarmHubs[VAR_8];
     HUB_LIST *VAR_12 = FUNC_6(VAR_10->HubList, VAR_8);

     VAR_11->DynamicHub = VAR_12->DynamicHub;
     FUNC_10(VAR_11->HubName, sizeof(VAR_11->HubName), VAR_12->Name);
    }
   }
   FUNC_12(VAR_10->HubList);

   if (VAR_5->Controller)
   {
    VAR_5->ConnectedTime = FUNC_11(VAR_6->Cedar->CreatedTick);
    VAR_5->Ip = 0x0100007f;
    FUNC_4(VAR_5->Hostname, sizeof(VAR_5->Hostname));
    VAR_5->Point = VAR_10->Point;

    FUNC_9(VAR_6->ServerListenerList);
    {
     UINT VAR_13, VAR_14;
     VAR_5->NumPort = 0;
     for (VAR_13 = 0;VAR_13 < FUNC_7(VAR_6->ServerListenerList);VAR_13++)
     {
      SERVER_LISTENER *VAR_15 = FUNC_6(VAR_6->ServerListenerList, VAR_13);
      if (VAR_15->Enabled)
      {
       VAR_5->NumPort++;
      }
     }
     VAR_5->Ports = FUNC_14(sizeof(UINT) * VAR_5->NumPort);
     VAR_14 = 0;
     for (VAR_13 = 0;VAR_13 < FUNC_7(VAR_6->ServerListenerList);VAR_13++)
     {
      SERVER_LISTENER *VAR_16 = FUNC_6(VAR_6->ServerListenerList, VAR_13);
      if (VAR_16->Enabled)
      {
       VAR_5->Ports[VAR_14++] = VAR_16->Port;
      }
     }
    }
    FUNC_12(VAR_6->ServerListenerList);

    VAR_5->ServerCert = FUNC_0(VAR_6->Cedar->ServerX);
    VAR_5->NumSessions = FUNC_2(VAR_6->Cedar->CurrentSessions);
    VAR_5->NumTcpConnections = FUNC_2(VAR_6->Cedar->CurrentTcpConnections);
   }
   else
   {
    VAR_5->ConnectedTime = VAR_10->ConnectedTime;
    VAR_5->Ip = VAR_10->Ip;
    FUNC_10(VAR_5->Hostname, sizeof(VAR_5->Hostname), VAR_10->hostname);
    VAR_5->Point = VAR_10->Point;
    VAR_5->NumPort = VAR_10->NumPort;
    VAR_5->Ports = FUNC_14(sizeof(UINT) * VAR_5->NumPort);
    FUNC_1(VAR_5->Ports, VAR_10->Ports, sizeof(UINT) * VAR_5->NumPort);
    VAR_5->ServerCert = FUNC_0(VAR_10->ServerCert);
    VAR_5->NumSessions = VAR_10->NumSessions;
    VAR_5->NumTcpConnections = VAR_10->NumTcpConnections;
   }
  }
  else
  {
   VAR_9 = VAR_2;
  }
 }
 FUNC_12(VAR_6->FarmMemberList);

 return VAR_9;
}

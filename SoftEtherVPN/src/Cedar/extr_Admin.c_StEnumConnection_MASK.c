
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_20__ {TYPE_2__* Server; } ;
struct TYPE_19__ {int ConnectionList; } ;
struct TYPE_18__ {int lock; int Type; int ConnectedTick; int Name; TYPE_1__* FirstSock; } ;
struct TYPE_17__ {int NumConnection; TYPE_3__* Connections; } ;
struct TYPE_16__ {int Type; int ConnectedTime; int Name; int Hostname; int Port; int Ip; } ;
struct TYPE_15__ {TYPE_6__* Cedar; } ;
struct TYPE_14__ {int RemoteHostname; int RemotePort; int RemoteIP; } ;
typedef TYPE_1__ SOCK ;
typedef TYPE_2__ SERVER ;
typedef TYPE_3__ RPC_ENUM_CONNECTION_ITEM ;
typedef TYPE_4__ RPC_ENUM_CONNECTION ;
typedef TYPE_5__ CONNECTION ;
typedef TYPE_6__ CEDAR ;
typedef TYPE_7__ ADMIN ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int *) ;
 TYPE_5__* FUNC_2 (int ,size_t) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 int FUNC_6 (int ,int,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_4__*,int) ;
 TYPE_3__* FUNC_11 (int) ;

UINT FUNC_12(ADMIN *VAR_2, RPC_ENUM_CONNECTION *VAR_3)
{
 SERVER *VAR_4 = VAR_2->Server;
 CEDAR *VAR_5 = VAR_4->Cedar;

 VAR_1;

 FUNC_0(VAR_3);
 FUNC_10(VAR_3, sizeof(RPC_ENUM_CONNECTION));

 FUNC_5(VAR_5->ConnectionList);
 {
  UINT VAR_6;
  VAR_3->NumConnection = FUNC_3(VAR_5->ConnectionList);
  VAR_3->Connections = FUNC_11(sizeof(RPC_ENUM_CONNECTION_ITEM) * VAR_3->NumConnection);

  for (VAR_6 = 0;VAR_6 < VAR_3->NumConnection;VAR_6++)
  {
   RPC_ENUM_CONNECTION_ITEM *VAR_7 = &VAR_3->Connections[VAR_6];
   CONNECTION *VAR_8 = FUNC_2(VAR_5->ConnectionList, VAR_6);

   FUNC_4(VAR_8->lock);
   {
    SOCK *VAR_9 = VAR_8->FirstSock;

    if (VAR_9 != ((void*)0))
    {
     VAR_7->Ip = FUNC_1(&VAR_9->RemoteIP);
     VAR_7->Port = VAR_9->RemotePort;
     FUNC_6(VAR_7->Hostname, sizeof(VAR_7->Hostname), VAR_9->RemoteHostname);
    }

    FUNC_6(VAR_7->Name, sizeof(VAR_7->Name), VAR_8->Name);
    VAR_7->ConnectedTime = FUNC_7(VAR_8->ConnectedTick);
    VAR_7->Type = VAR_8->Type;
   }
   FUNC_8(VAR_8->lock);
  }
 }
 FUNC_9(VAR_5->ConnectionList);

 return VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int tt ;
typedef int name ;
typedef int UINT ;
struct TYPE_17__ {TYPE_2__* Server; } ;
struct TYPE_16__ {int ConnectionList; } ;
struct TYPE_15__ {char* Name; char* Hostname; char* ServerStr; char* ClientStr; int lock; int ClientBuild; int ClientVer; int ServerBuild; int ServerVer; int Type; int ConnectedTick; int ConnectedTime; int Port; int Ip; TYPE_1__* FirstSock; int ref; } ;
struct TYPE_14__ {TYPE_5__* Cedar; } ;
struct TYPE_13__ {char* RemoteHostname; int RemotePort; int RemoteIP; } ;
typedef TYPE_1__ SOCK ;
typedef TYPE_2__ SERVER ;
typedef TYPE_3__ RPC_CONNECTION_INFO ;
typedef TYPE_3__ CONNECTION ;
typedef TYPE_5__ CEDAR ;
typedef TYPE_6__ ADMIN ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int FUNC_5 (TYPE_3__*) ;
 int VAR_4 ;
 TYPE_3__* FUNC_6 (int ,TYPE_3__*) ;
 int FUNC_7 (char*,int,char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (TYPE_3__*,int) ;

UINT FUNC_12(ADMIN *VAR_5, RPC_CONNECTION_INFO *VAR_6)
{
 SERVER *VAR_7 = VAR_5->Server;
 CEDAR *VAR_8 = VAR_7->Cedar;
 CONNECTION *VAR_9;
 char VAR_10[VAR_3 + 1];

 if (FUNC_2(VAR_6->Name))
 {
  return VAR_0;
 }

 VAR_4;

 FUNC_4(VAR_8->ConnectionList);
 {
  CONNECTION VAR_11;
  FUNC_11(&VAR_11, sizeof(VAR_11));
  VAR_11.Name = VAR_6->Name;
  FUNC_7(VAR_10, sizeof(VAR_10), VAR_6->Name);

  VAR_9 = FUNC_6(VAR_8->ConnectionList, &VAR_11);

  if (VAR_9 != ((void*)0))
  {
   FUNC_0(VAR_9->ref);
  }
 }
 FUNC_10(VAR_8->ConnectionList);

 if (VAR_9 == ((void*)0))
 {
  return VAR_2;
 }

 FUNC_11(VAR_6, sizeof(RPC_CONNECTION_INFO));
 FUNC_7(VAR_6->Name, sizeof(VAR_6->Name), VAR_10);

 FUNC_3(VAR_9->lock);
 {
  SOCK *VAR_12 = VAR_9->FirstSock;

  if (VAR_12 != ((void*)0))
  {
   VAR_6->Ip = FUNC_1(&VAR_12->RemoteIP);
   VAR_6->Port = VAR_12->RemotePort;
   FUNC_7(VAR_6->Hostname, sizeof(VAR_6->Hostname), VAR_12->RemoteHostname);
  }

  FUNC_7(VAR_6->Name, sizeof(VAR_6->Name), VAR_9->Name);
  VAR_6->ConnectedTime = FUNC_8(VAR_9->ConnectedTick);
  VAR_6->Type = VAR_9->Type;

  FUNC_7(VAR_6->ServerStr, sizeof(VAR_6->ServerStr), VAR_9->ServerStr);
  FUNC_7(VAR_6->ClientStr, sizeof(VAR_6->ClientStr), VAR_9->ClientStr);
  VAR_6->ServerVer = VAR_9->ServerVer;
  VAR_6->ServerBuild = VAR_9->ServerBuild;
  VAR_6->ClientVer = VAR_9->ClientVer;
  VAR_6->ClientBuild = VAR_9->ClientBuild;
 }
 FUNC_9(VAR_9->lock);

 FUNC_5(VAR_9);

 return VAR_1;
}

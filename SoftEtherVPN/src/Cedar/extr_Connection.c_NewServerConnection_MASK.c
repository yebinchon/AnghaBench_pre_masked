
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {int Server; int ServerStr; int Build; int Version; int ref; } ;
struct TYPE_13__ {int ServerMode; int IsInProc; void* SendBlocks2; void* SendBlocks; void* ReceivedBlocks; int ServerX; int ServerStr; int ServerBuild; int ServerVer; int CurrentNumConnection; TYPE_2__* Thread; int Name; int Status; TYPE_1__* Tcp; int ClientHostname; int ClientIp; TYPE_3__* FirstSock; int Type; int Protocol; TYPE_5__* Cedar; int ref; int lock; int ConnectedTick; } ;
struct TYPE_12__ {scalar_t__ Type; int * RemoteX; int RemoteHostname; int RemoteIP; int ref; } ;
struct TYPE_11__ {int ref; } ;
struct TYPE_10__ {int TcpSockList; } ;
typedef TYPE_2__ THREAD ;
typedef int TCP ;
typedef TYPE_3__ SOCK ;
typedef int IP ;
typedef TYPE_4__ CONNECTION ;
typedef TYPE_5__ CEDAR ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;
 void* FUNC_9 () ;
 int FUNC_10 () ;
 scalar_t__ VAR_3 ;
 int FUNC_11 (int ,int,int ) ;
 int FUNC_12 () ;
 void* FUNC_13 (int) ;

CONNECTION *FUNC_14(CEDAR *VAR_4, SOCK *VAR_5, THREAD *VAR_6)
{
 CONNECTION *VAR_7;

 if (VAR_4 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_7 = FUNC_13(sizeof(CONNECTION));
 VAR_7->ConnectedTick = FUNC_12();
 VAR_7->lock = FUNC_8();
 VAR_7->ref = FUNC_10();
 VAR_7->Cedar = VAR_4;
 FUNC_0(VAR_7->Cedar->ref);
 VAR_7->Protocol = VAR_1;
 VAR_7->Type = VAR_2;
 VAR_7->FirstSock = VAR_5;
 if (VAR_5 != ((void*)0))
 {
  FUNC_0(VAR_7->FirstSock->ref);
  FUNC_2(&VAR_7->ClientIp, &VAR_5->RemoteIP, sizeof(IP));
  FUNC_11(VAR_7->ClientHostname, sizeof(VAR_7->ClientHostname), VAR_5->RemoteHostname);
 }
 VAR_7->Tcp = FUNC_13(sizeof(TCP));
 VAR_7->Tcp->TcpSockList = FUNC_7(((void*)0));
 VAR_7->ServerMode = 1;
 VAR_7->Status = VAR_0;
 VAR_7->Name = FUNC_3("INITING");
 VAR_7->Thread = VAR_6;
 FUNC_0(VAR_6->ref);
 VAR_7->CurrentNumConnection = FUNC_6();
 FUNC_5(VAR_7->CurrentNumConnection);

 VAR_7->ServerVer = VAR_4->Version;
 VAR_7->ServerBuild = VAR_4->Build;
 FUNC_11(VAR_7->ServerStr, sizeof(VAR_7->ServerStr), VAR_4->ServerStr);
 FUNC_4(VAR_4->Server, VAR_7->ServerStr, sizeof(VAR_7->ServerStr));

 if (VAR_5 != ((void*)0) && VAR_5->RemoteX != ((void*)0))
 {
  VAR_7->ServerX = FUNC_1(VAR_5->RemoteX);
 }

 if (VAR_5 != ((void*)0) && VAR_5->Type == VAR_3)
 {

  VAR_7->IsInProc = 1;
 }


 VAR_7->ReceivedBlocks = FUNC_9();
 VAR_7->SendBlocks = FUNC_9();
 VAR_7->SendBlocks2 = FUNC_9();

 return VAR_7;
}

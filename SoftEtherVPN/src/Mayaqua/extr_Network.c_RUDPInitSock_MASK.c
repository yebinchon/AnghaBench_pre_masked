
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef void* UINT ;
struct TYPE_24__ {TYPE_4__* TcpSock; TYPE_3__* BulkRecvKey; TYPE_2__* BulkSendKey; int YourPort; int YourIp; int MyPort; scalar_t__ DisconnectFlag; } ;
struct TYPE_23__ {int DoNotSetTargetConnectedSock; int Lock; int TargetConnectedEvent; int SockEvent; TYPE_4__* TargetConnectedSock; TYPE_1__* UdpSock; int NewSockConnectEvent; int NewSockQueue; scalar_t__ ServerMode; } ;
struct TYPE_22__ {int IpClientAdded; int IsRUDPSocket; TYPE_5__* R_UDP_Stack; void* RUDP_OptimizedMss; TYPE_3__* BulkRecvKey; TYPE_2__* BulkSendKey; int RemoteIP; int RemotePort; int LocalPort; int LocalIP; } ;
struct TYPE_21__ {int Ref; } ;
struct TYPE_20__ {int Ref; } ;
struct TYPE_19__ {int LocalIP; } ;
typedef TYPE_4__ SOCK ;
typedef TYPE_5__ RUDP_STACK ;
typedef TYPE_6__ RUDP_SESSION ;
typedef int IP ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int ,TYPE_4__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_4__*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_4__**,TYPE_4__**) ;
 void* FUNC_9 (TYPE_5__*,TYPE_6__*) ;
 int FUNC_10 (TYPE_5__*,TYPE_6__*,int) ;
 int FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *) ;

void FUNC_15(RUDP_STACK *VAR_0, RUDP_SESSION *VAR_1)
{
 SOCK *VAR_2, *VAR_3;
 UINT VAR_4;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_1->DisconnectFlag)
 {
  return;
 }

 if (VAR_1->TcpSock != ((void*)0))
 {

  return;
 }


 if (FUNC_8(&VAR_2, &VAR_3) == 0)
 {

  FUNC_10(VAR_0, VAR_1, 0);
  return;
 }


 VAR_4 = FUNC_9(VAR_0, VAR_1);

 if (VAR_0->ServerMode)
 {

  VAR_1->TcpSock = VAR_3;

  FUNC_6(VAR_3, VAR_0->SockEvent);


  FUNC_14(&VAR_2->LocalIP);
  VAR_2->LocalPort = VAR_1->MyPort;
  FUNC_2(&VAR_2->RemoteIP, &VAR_1->YourIp, sizeof(IP));
  VAR_2->RemotePort = VAR_1->YourPort;
  if (FUNC_5(&VAR_2->RemoteIP) == 0)
  {
   FUNC_0(&VAR_2->RemoteIP);
   VAR_2->IpClientAdded = 1;
  }
  VAR_2->IsRUDPSocket = 1;

  VAR_2->BulkSendKey = VAR_1->BulkSendKey;
  VAR_2->BulkRecvKey = VAR_1->BulkRecvKey;

  FUNC_1(VAR_2->BulkSendKey->Ref);
  FUNC_1(VAR_2->BulkRecvKey->Ref);

  VAR_2->RUDP_OptimizedMss = VAR_4;


  FUNC_4(VAR_0->NewSockQueue, VAR_2);
  FUNC_12(VAR_0->NewSockConnectEvent);
 }
 else
 {

  FUNC_7(VAR_0->Lock);
  {
   if (VAR_0->TargetConnectedSock == ((void*)0) && VAR_0->DoNotSetTargetConnectedSock == 0)
   {

    FUNC_2(&VAR_3->LocalIP, &VAR_0->UdpSock->LocalIP, sizeof(IP));
    VAR_3->LocalPort = VAR_1->MyPort;
    FUNC_2(&VAR_3->RemoteIP, &VAR_1->YourIp, sizeof(IP));
    VAR_3->RemotePort = VAR_1->YourPort;
    if (FUNC_5(&VAR_3->RemoteIP) == 0)
    {
     FUNC_0(&VAR_3->RemoteIP);
     VAR_3->IpClientAdded = 1;
    }
    VAR_3->IsRUDPSocket = 1;

    VAR_3->BulkSendKey = VAR_1->BulkSendKey;
    VAR_3->BulkRecvKey = VAR_1->BulkRecvKey;

    FUNC_1(VAR_3->BulkSendKey->Ref);
    FUNC_1(VAR_3->BulkRecvKey->Ref);

    VAR_3->RUDP_OptimizedMss = VAR_4;


    VAR_0->TargetConnectedSock = VAR_3;
    VAR_3->R_UDP_Stack = VAR_0;
    VAR_1->TcpSock = VAR_2;

    FUNC_6(VAR_2, VAR_0->SockEvent);


    FUNC_12(VAR_0->TargetConnectedEvent);
   }
   else
   {
    FUNC_3(VAR_2);
    FUNC_3(VAR_3);
    FUNC_11(VAR_2);
    FUNC_11(VAR_3);
   }
  }
  FUNC_13(VAR_0->Lock);
 }
}

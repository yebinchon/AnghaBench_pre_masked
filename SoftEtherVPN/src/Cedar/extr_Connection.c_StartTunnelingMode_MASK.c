
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_12__ ;


typedef int UINT64 ;
typedef int UINT ;
typedef int UDP ;
struct TYPE_20__ {int BufferQueue; int port; int ip; int * s; } ;
struct TYPE_19__ {scalar_t__ Protocol; int ServerMode; TYPE_6__* Udp; TYPE_12__* Session; int Cedar; TYPE_4__* FirstSock; TYPE_4__* TubeSock; scalar_t__ IsInProc; TYPE_3__* Tcp; } ;
struct TYPE_18__ {int RemoteIP; int ref; } ;
struct TYPE_17__ {int TcpSockList; } ;
struct TYPE_16__ {scalar_t__ DisconnectTick; } ;
struct TYPE_15__ {int ConnectionDisconnectSpan; int PortUDP; } ;
struct TYPE_14__ {TYPE_1__* ClientOption; } ;
typedef TYPE_2__ TCPSOCK ;
typedef TYPE_3__ TCP ;
typedef TYPE_4__ SOCK ;
typedef int IP ;
typedef TYPE_5__ CONNECTION ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_12__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 TYPE_2__* FUNC_7 (TYPE_4__*) ;
 int * FUNC_8 (int ) ;
 int FUNC_9 (TYPE_4__*) ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (int ) ;
 TYPE_6__* FUNC_12 (int) ;

void FUNC_13(CONNECTION *VAR_1)
{
 SOCK *VAR_2;
 TCP *VAR_3;
 TCPSOCK *VAR_4;
 IP VAR_5;
 UINT VAR_6;

 if (VAR_1 == ((void*)0))
 {
  return;
 }

 VAR_3 = VAR_1->Tcp;


 if (VAR_1->Protocol == VAR_0)
 {

  VAR_2 = VAR_1->FirstSock;

  if (VAR_1->IsInProc)
  {
   FUNC_1(VAR_2->ref);
   VAR_1->TubeSock = VAR_2;
  }

  VAR_4 = FUNC_7(VAR_2);

  if (VAR_1->ServerMode == 0)
  {
   if (VAR_1->Session->ClientOption->ConnectionDisconnectSpan != 0)
   {
    VAR_4->DisconnectTick = FUNC_10() + VAR_1->Session->ClientOption->ConnectionDisconnectSpan * (UINT64)1000;
   }
  }

  FUNC_5(VAR_3->TcpSockList);
  {
   FUNC_0(VAR_3->TcpSockList, VAR_4);
  }
  FUNC_11(VAR_3->TcpSockList);
  FUNC_9(VAR_2);
  VAR_1->FirstSock = ((void*)0);
 }
 else
 {

  VAR_2 = VAR_1->FirstSock;
  FUNC_3(&VAR_5, &VAR_2->RemoteIP, sizeof(IP));

  VAR_1->FirstSock = ((void*)0);
  FUNC_4(VAR_2);
  FUNC_9(VAR_2);


  VAR_1->Udp = FUNC_12(sizeof(UDP));

  if (VAR_1->ServerMode)
  {


   FUNC_2(VAR_1->Cedar, VAR_1->Session);
   VAR_1->Udp->s = ((void*)0);
  }
  else
  {
   VAR_6 = VAR_1->Session->ClientOption->PortUDP;

   VAR_1->Udp->s = FUNC_8(0);

   FUNC_3(&VAR_1->Udp->ip, &VAR_5, sizeof(IP));
   VAR_1->Udp->port = VAR_6;
  }


  VAR_1->Udp->BufferQueue = FUNC_6();
 }
}

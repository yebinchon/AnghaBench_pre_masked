
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_12__ {scalar_t__ Protocol; TYPE_3__* Tcp; } ;
struct TYPE_11__ {int TcpSockList; } ;
struct TYPE_10__ {TYPE_1__* Sock; } ;
struct TYPE_9__ {int SendSize; } ;
typedef TYPE_2__ TCPSOCK ;
typedef TYPE_3__ TCP ;
typedef TYPE_4__ CONNECTION ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__**) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 TYPE_2__** FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

void FUNC_8(CONNECTION *VAR_1)
{
 UINT VAR_2, VAR_3;
 TCP *VAR_4;
 TCPSOCK **VAR_5;

 if (VAR_1 == ((void*)0))
 {
  return;
 }
 if (VAR_1->Protocol != VAR_0)
 {
  return;
 }

 VAR_4 = VAR_1->Tcp;
 FUNC_5(VAR_4->TcpSockList);
 {
  VAR_5 = FUNC_6(VAR_4->TcpSockList);
  VAR_3 = FUNC_4(VAR_4->TcpSockList);
  FUNC_1(VAR_4->TcpSockList);
 }
 FUNC_7(VAR_4->TcpSockList);

 if (VAR_3 != 0)
 {
  FUNC_0("--- SOCKET STATUS ---\n");
  for (VAR_2 = 0;VAR_2 < VAR_3;VAR_2++)
  {
   TCPSOCK *VAR_6 = VAR_5[VAR_2];
   FUNC_0(" SOCK %2u: %u\n", VAR_2, VAR_6->Sock->SendSize);
   FUNC_3(VAR_6);
  }
 }

 FUNC_2(VAR_5);
}

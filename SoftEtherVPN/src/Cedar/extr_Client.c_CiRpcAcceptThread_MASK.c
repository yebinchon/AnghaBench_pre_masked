
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int RpcConnectionList; } ;
struct TYPE_12__ {int Thread; TYPE_1__* Sock; TYPE_3__* Client; } ;
struct TYPE_11__ {int ref; } ;
typedef int THREAD ;
typedef TYPE_1__ SOCK ;
typedef TYPE_2__ CLIENT_RPC_CONNECTION ;
typedef TYPE_3__ CLIENT ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_3 (int ,TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

void FUNC_11(THREAD *VAR_0, void *VAR_1)
{
 CLIENT_RPC_CONNECTION *VAR_2;
 CLIENT *VAR_3;
 SOCK *VAR_4;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 VAR_2 = (CLIENT_RPC_CONNECTION *)VAR_1;
 VAR_4 = VAR_2->Sock;
 VAR_3 = VAR_2->Client;
 FUNC_1(VAR_4->ref);


 FUNC_6(VAR_3->RpcConnectionList);
 {
  FUNC_0(VAR_3->RpcConnectionList, VAR_2);
 }
 FUNC_10(VAR_3->RpcConnectionList);

 FUNC_7(VAR_0);


 FUNC_2(VAR_3, VAR_4);


 FUNC_6(VAR_3->RpcConnectionList);
 {
  FUNC_3(VAR_3->RpcConnectionList, VAR_2);
 }
 FUNC_10(VAR_3->RpcConnectionList);

 FUNC_8(VAR_2->Sock);
 FUNC_9(VAR_2->Thread);
 FUNC_5(VAR_2);

 FUNC_4(VAR_4);
 FUNC_8(VAR_4);
}

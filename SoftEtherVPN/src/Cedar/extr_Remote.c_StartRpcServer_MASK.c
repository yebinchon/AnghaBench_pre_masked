
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int ServerMode; int Name; int * Dispatch; int Lock; void* Param; TYPE_1__* Sock; } ;
struct TYPE_6__ {int socket; int ref; } ;
typedef TYPE_1__ SOCK ;
typedef int RPC_DISPATCHER ;
typedef TYPE_2__ RPC ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,char*,int ) ;
 int FUNC_2 () ;
 TYPE_2__* FUNC_3 (int,int) ;

RPC *FUNC_4(SOCK *VAR_0, RPC_DISPATCHER *VAR_1, void *VAR_2)
{
 RPC *VAR_3;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_3 = FUNC_3(sizeof(RPC), 1);
 VAR_3->Sock = VAR_0;
 VAR_3->Param = VAR_2;
 VAR_3->Lock = FUNC_2();
 FUNC_0(VAR_0->ref);

 VAR_3->ServerMode = 1;
 VAR_3->Dispatch = VAR_1;


 FUNC_1(VAR_3->Name, sizeof(VAR_3->Name), "RPC-%u", VAR_0->socket);

 return VAR_3;
}

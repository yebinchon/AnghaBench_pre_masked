
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int ServerMode; int Lock; void* Param; TYPE_1__* Sock; } ;
struct TYPE_6__ {int ref; } ;
typedef TYPE_1__ SOCK ;
typedef TYPE_2__ RPC ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 TYPE_2__* FUNC_2 (int) ;

RPC *FUNC_3(SOCK *VAR_0, void *VAR_1)
{
 RPC *VAR_2;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_2 = FUNC_2(sizeof(RPC));
 VAR_2->Sock = VAR_0;
 VAR_2->Param = VAR_1;
 VAR_2->Lock = FUNC_1();
 FUNC_0(VAR_0->ref);

 VAR_2->ServerMode = 0;

 return VAR_2;
}

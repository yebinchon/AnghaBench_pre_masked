
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * Sock; scalar_t__ Param; } ;
typedef int SOCK ;
typedef int SESSION ;
typedef TYPE_1__ RPC ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;

void FUNC_3(RPC *VAR_0)
{
 SESSION *VAR_1;
 SOCK *VAR_2;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 VAR_1 = (SESSION *)VAR_0->Param;
 VAR_2 = VAR_0->Sock;

 FUNC_1(VAR_0);

 FUNC_0(VAR_2);
 FUNC_2(VAR_1);
}

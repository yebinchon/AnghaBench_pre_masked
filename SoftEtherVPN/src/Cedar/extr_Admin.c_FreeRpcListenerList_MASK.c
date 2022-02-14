
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Errors; int Enables; int Ports; } ;
typedef TYPE_1__ RPC_LISTENER_LIST ;


 int FUNC_0 (int ) ;

void FUNC_1(RPC_LISTENER_LIST *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_0->Ports);
 FUNC_0(VAR_0->Enables);
 FUNC_0(VAR_0->Errors);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int RpcThread; } ;
typedef TYPE_1__ CLIENT ;


 int VAR_0 ;
 int FUNC_0 (int ,void*) ;
 int FUNC_1 (int ) ;

void FUNC_2(CLIENT *VAR_1)
{

 if (VAR_1 == ((void*)0))
 {
  return;
 }

 VAR_1->RpcThread = FUNC_0(VAR_0, (void *)VAR_1);
 FUNC_1(VAR_1->RpcThread);
}

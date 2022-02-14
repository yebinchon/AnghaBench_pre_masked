
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int RpcThread; int RpcListener; } ;
typedef TYPE_1__ CLIENT ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

void FUNC_4(CLIENT *VAR_1)
{

 if (VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_1->RpcListener);
 FUNC_1(VAR_1->RpcListener);

 FUNC_3(VAR_1->RpcThread, VAR_0);
 FUNC_2(VAR_1->RpcThread);
}

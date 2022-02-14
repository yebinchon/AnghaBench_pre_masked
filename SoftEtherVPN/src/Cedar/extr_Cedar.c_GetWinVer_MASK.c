
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int OsProductName; } ;
struct TYPE_6__ {int Title; } ;
typedef TYPE_1__ RPC_WINVER ;


 TYPE_5__* FUNC_0 () ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int) ;

void FUNC_4(RPC_WINVER *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }




 FUNC_3(VAR_0, sizeof(RPC_WINVER));
 FUNC_1(VAR_0->Title, sizeof(VAR_0->Title), FUNC_0()->OsProductName);

}

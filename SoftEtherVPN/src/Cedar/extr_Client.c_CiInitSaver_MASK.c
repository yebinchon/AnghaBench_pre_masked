
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int SaverThread; int SaverHalter; } ;
typedef TYPE_1__ CLIENT ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int ) ;

void FUNC_3(CLIENT *VAR_1)
{

 if (VAR_1 == ((void*)0))
 {
  return;
 }

 VAR_1->SaverHalter = FUNC_0();

 VAR_1->SaverThread = FUNC_1(VAR_0, VAR_1);
 FUNC_2(VAR_1->SaverThread);
}

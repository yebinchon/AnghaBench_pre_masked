
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Halt; int SaverHalter; } ;
typedef int THREAD ;
typedef TYPE_1__ CLIENT ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(THREAD *VAR_1, void *VAR_2)
{
 CLIENT *VAR_3 = (CLIENT *)VAR_2;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 FUNC_1(VAR_1);


 while (VAR_3->Halt == 0)
 {
  FUNC_2(VAR_3->SaverHalter, VAR_0);


  FUNC_0(VAR_3);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Thread; int AdjustTime; int TickLock; } ;
typedef int TICK64 ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int *) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (int) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

void FUNC_6()
{
 if (VAR_2 != ((void*)0))
 {

  return;
 }

 VAR_1 = FUNC_0();


 VAR_2 = FUNC_5(sizeof(TICK64));
 VAR_2->TickLock = FUNC_2();
 VAR_2->AdjustTime = FUNC_1(((void*)0));


 VAR_2->Thread = FUNC_3(VAR_0, ((void*)0));
 FUNC_4(VAR_2->Thread);
}

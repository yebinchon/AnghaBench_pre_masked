
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* pv_halt ) () ;} ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 () ;

void
FUNC_4(void)
{
 unsigned long VAR_2;
again:
 FUNC_1(&VAR_0, VAR_2);
 (*(VAR_1->pv_halt))();

 FUNC_0();
 FUNC_2(&VAR_0, VAR_2);
 goto again;
}

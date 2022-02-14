
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* pv_nbgetchar ) () ;} ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 () ;

int
FUNC_3(void)
{
 int VAR_1 = -1;
 unsigned long VAR_2;

 FUNC_1(VAR_2);
  VAR_1 = (*(VAR_0->pv_nbgetchar))();
 FUNC_0(VAR_2);
 return VAR_1;
}

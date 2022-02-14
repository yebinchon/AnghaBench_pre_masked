
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* clock_t ;
struct TYPE_5__ {TYPE_1__* cl_ops; } ;
struct TYPE_4__ {int (* c_init ) () ;} ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 () ;

void
FUNC_1(void)
{
 clock_t VAR_2;
 int VAR_3;




 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_2 = &VAR_1[VAR_3];
  if (VAR_2->cl_ops && VAR_2->cl_ops->c_init)
   (*VAR_2->cl_ops->c_init)();
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int timer_call_func_t ;
typedef int thread_call_func_t ;
typedef TYPE_2__* clock_t ;
struct TYPE_5__ {TYPE_1__* cl_ops; } ;
struct TYPE_4__ {scalar_t__ (* c_config ) () ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 TYPE_2__* VAR_7 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (int *,int ,int *) ;

void
FUNC_4(void)
{
 clock_t VAR_8;
 int VAR_9;

 FUNC_0(&VAR_4, 0);
 FUNC_2(&VAR_1, (thread_call_func_t)VAR_0, ((void*)0));
 FUNC_3(&VAR_3, (timer_call_func_t)VAR_2, ((void*)0));




 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
  VAR_8 = &VAR_7[VAR_9];
  if (VAR_8->cl_ops && VAR_8->cl_ops->c_config) {
   if ((*VAR_8->cl_ops->c_config)() == 0)
    VAR_8->cl_ops = ((void*)0);
  }
 }


 VAR_5 = 0;
}

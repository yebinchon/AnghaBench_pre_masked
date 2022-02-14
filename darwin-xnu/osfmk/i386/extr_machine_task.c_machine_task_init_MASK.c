
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* task_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_5__ {scalar_t__ xstate; scalar_t__ i386_ldt; scalar_t__ uexc_handler; scalar_t__ uexc_range_size; scalar_t__ uexc_range_start; } ;


 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;

void
FUNC_2(task_t VAR_3,
    task_t VAR_4,
    boolean_t VAR_5)
{
 VAR_3->uexc_range_start = 0;
 VAR_3->uexc_range_size = 0;
 VAR_3->uexc_handler = 0;

 VAR_3->i386_ldt = 0;

 if (VAR_4 != VAR_0) {
  if (VAR_5 && VAR_4->i386_ldt)
   VAR_3->i386_ldt = FUNC_1(VAR_4->i386_ldt);
  VAR_3->xstate = VAR_4->xstate;
 } else {
  FUNC_0(VAR_2 != VAR_1);
  VAR_3->xstate = VAR_2;
 }
}

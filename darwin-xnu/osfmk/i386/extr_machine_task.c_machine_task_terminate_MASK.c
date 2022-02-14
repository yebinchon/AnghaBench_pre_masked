
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ user_ldt_t ;
typedef TYPE_1__* task_t ;
struct TYPE_5__ {int (* task_destroy ) (int *) ;} ;
struct TYPE_4__ {scalar_t__ i386_ldt; int * task_debug; int * hv_task_target; } ;


 TYPE_3__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,void*) ;

void
FUNC_3(task_t VAR_2)
{
 if (VAR_2) {
  user_ldt_t VAR_3;
  void *VAR_4;
  VAR_3 = VAR_2->i386_ldt;
  if (VAR_3 != 0) {
   VAR_2->i386_ldt = 0;
   FUNC_1(VAR_3);
  }

  VAR_4 = VAR_2->task_debug;
  if (VAR_4 != ((void*)0)) {
   VAR_2->task_debug = ((void*)0);
   FUNC_2(VAR_1, VAR_4);
  }
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ p_dtrace_count; int * p_dtrace_helpers; } ;
typedef TYPE_1__ proc_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,TYPE_1__*) ;

void
FUNC_6(proc_t *VAR_1, proc_t *VAR_2, int VAR_3)
{




 if (!VAR_3) {






  FUNC_3(VAR_1);






  if (VAR_1->p_dtrace_count > 0) {
   FUNC_0(VAR_1, VAR_2);
  }

  FUNC_4(VAR_1);
  if (FUNC_2(VAR_1, VAR_2) == VAR_0) {
   return;
  }
  if (VAR_1->p_dtrace_helpers != ((void*)0) && &FUNC_1) {
   FUNC_1)(VAR_1, VAR_2);
  }
 }
}

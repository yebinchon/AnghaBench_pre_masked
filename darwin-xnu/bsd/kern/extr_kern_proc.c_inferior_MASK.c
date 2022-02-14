
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* proc_t ;
struct TYPE_4__ {scalar_t__ p_pid; struct TYPE_4__* p_pptr; } ;


 TYPE_1__* FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;

int
FUNC_3(proc_t VAR_0)
{
 int VAR_1 = 0;

 FUNC_1();
 for (; VAR_0 != FUNC_0(); VAR_0 = VAR_0->p_pptr)
  if (VAR_0->p_pid == 0)
   goto out;
 VAR_1 = 1;
out:
 FUNC_2();
 return(VAR_1);
}

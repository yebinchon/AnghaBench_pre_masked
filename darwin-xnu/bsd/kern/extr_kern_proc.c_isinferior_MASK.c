
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* proc_t ;
struct TYPE_4__ {scalar_t__ p_pid; struct TYPE_4__* p_pptr; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;

int
FUNC_2(proc_t VAR_1, proc_t VAR_2)
{
 int VAR_3 = 0;
 int VAR_4 = 0;
 proc_t VAR_5 = VAR_1;


 if (VAR_1 == VAR_2)
  return(0);

 FUNC_0();
 for (; VAR_1 != VAR_2; VAR_1 = VAR_1->p_pptr) {
  VAR_4++;


  if ((VAR_1->p_pid == 0) || (VAR_1->p_pptr == VAR_5) || (VAR_4 >= VAR_0))
   goto out;
 }
 VAR_3 = 1;
out:
 FUNC_1();
 return(VAR_3);
}

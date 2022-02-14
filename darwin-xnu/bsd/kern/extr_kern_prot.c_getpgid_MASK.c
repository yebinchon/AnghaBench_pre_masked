
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct getpgid_args {scalar_t__ pid; } ;
typedef TYPE_1__* proc_t ;
typedef int int32_t ;
struct TYPE_5__ {int p_pgrpid; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;

int
FUNC_2(proc_t VAR_1, struct getpgid_args *VAR_2, int32_t *VAR_3)
{
 proc_t VAR_4;
 int VAR_5 = 0;

 VAR_4 = VAR_1;
 if (VAR_2->pid == 0)
  goto found;

 if ((VAR_4 = FUNC_0(VAR_2->pid)) == 0)
  return (VAR_0);
 VAR_5 = 1;
found:
 *VAR_3 = VAR_4->p_pgrpid;
 if (VAR_5 != 0)
  FUNC_1(VAR_4);
 return (0);
}

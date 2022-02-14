
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rlimit {int rlim_max; int rlim_cur; } ;
typedef TYPE_2__* proc_t ;
struct TYPE_5__ {TYPE_1__* p_rlimit; } ;
struct TYPE_4__ {int rlim_max; int rlim_cur; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;

void
FUNC_2(proc_t VAR_0, int VAR_1, struct rlimit * VAR_2)
{
 FUNC_0();
 VAR_2->rlim_cur = VAR_0->p_rlimit[VAR_1].rlim_cur;
 VAR_2->rlim_max = VAR_0->p_rlimit[VAR_1].rlim_max;
 FUNC_1();
}

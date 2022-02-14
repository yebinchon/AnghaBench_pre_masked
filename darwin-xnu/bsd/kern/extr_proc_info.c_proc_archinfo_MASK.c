
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct proc_archinfo {int p_cpusubtype; int p_cputype; } ;
typedef TYPE_1__* proc_t ;
struct TYPE_5__ {int p_cpusubtype; int p_cputype; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2(proc_t VAR_0, struct proc_archinfo *VAR_1)
{
 FUNC_0(VAR_0);
 VAR_1->p_cputype = VAR_0->p_cputype;
 VAR_1->p_cpusubtype = VAR_0->p_cpusubtype;
 FUNC_1(VAR_0);
}

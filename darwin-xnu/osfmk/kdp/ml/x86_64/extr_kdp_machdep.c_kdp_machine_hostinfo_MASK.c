
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cpus_mask; int cpu_type; int cpu_subtype; } ;
typedef TYPE_1__ kdp_hostinfo_t ;
struct TYPE_5__ {int max_cpus; } ;


 int VAR_0 ;
 int ** VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_2__ VAR_2 ;

void
FUNC_2(
    kdp_hostinfo_t *VAR_3
)
{
    int VAR_4;

    VAR_3->cpus_mask = 0;

    for (VAR_4 = 0; VAR_4 < VAR_2.max_cpus; VAR_4++) {
 if (VAR_1[VAR_4] == ((void*)0))
            continue;

        VAR_3->cpus_mask |= (1 << VAR_4);
    }

    VAR_3->cpu_type = FUNC_1() | VAR_0;
    VAR_3->cpu_subtype = FUNC_0();
}

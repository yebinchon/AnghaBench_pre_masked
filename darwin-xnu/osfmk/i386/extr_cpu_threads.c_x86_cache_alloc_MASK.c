
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int x86_lcpu_t ;
struct TYPE_6__ {int maxcpus; int ** cpus; struct TYPE_6__* next; } ;
typedef TYPE_1__ x86_cpu_cache_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_1 (int) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static x86_cpu_cache_t *
FUNC_2(void)
{
    x86_cpu_cache_t *VAR_3;
    int VAR_4;

    if (VAR_2 == ((void*)0)) {
 VAR_3 = FUNC_1(sizeof(x86_cpu_cache_t) + (VAR_0 * sizeof(x86_lcpu_t *)));
 if (VAR_3 == ((void*)0))
     return(((void*)0));
    } else {
 VAR_3 = VAR_2;
 VAR_2 = VAR_3->next;
 VAR_3->next = ((void*)0);
    }

    FUNC_0(VAR_3, sizeof(x86_cpu_cache_t));
    VAR_3->next = ((void*)0);
    VAR_3->maxcpus = VAR_0;
    for (VAR_4 = 0; VAR_4 < VAR_3->maxcpus; VAR_4 += 1) {
 VAR_3->cpus[VAR_4] = ((void*)0);
    }

    VAR_1 += 1;

    return(VAR_3);
}

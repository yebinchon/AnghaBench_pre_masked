
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__** caches; } ;
typedef TYPE_1__ x86_lcpu_t ;
struct TYPE_6__ {int level; int nlcpus; TYPE_1__** cpus; struct TYPE_6__* next; } ;
typedef TYPE_2__ x86_cpu_cache_t ;



__attribute__((used)) static void
FUNC_0(x86_cpu_cache_t *VAR_0, x86_lcpu_t *VAR_1)
{
    x86_cpu_cache_t *VAR_2;
    int VAR_3;




    VAR_2 = VAR_1->caches[VAR_0->level - 1];
    VAR_1->caches[VAR_0->level - 1] = VAR_0;
    VAR_0->next = VAR_2;
    VAR_0->nlcpus += 1;
    for (VAR_3 = 0; VAR_3 < VAR_0->nlcpus; VAR_3 += 1) {
 if (VAR_0->cpus[VAR_3] == ((void*)0)) {
     VAR_0->cpus[VAR_3] = VAR_1;
     break;
 }
    }
}

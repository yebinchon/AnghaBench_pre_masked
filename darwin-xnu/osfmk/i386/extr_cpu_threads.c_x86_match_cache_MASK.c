
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ maxcpus; scalar_t__ type; scalar_t__ level; scalar_t__ partitions; scalar_t__ line_size; scalar_t__ cache_size; struct TYPE_5__* next; } ;
typedef TYPE_1__ x86_cpu_cache_t ;



__attribute__((used)) static x86_cpu_cache_t *
FUNC_0(x86_cpu_cache_t *VAR_0, x86_cpu_cache_t *VAR_1)
{
    x86_cpu_cache_t *VAR_2;

    VAR_2 = VAR_0;
    while (VAR_2 != ((void*)0)) {
 if (VAR_2->maxcpus == VAR_1->maxcpus
     && VAR_2->type == VAR_1->type
     && VAR_2->level == VAR_1->level
     && VAR_2->partitions == VAR_1->partitions
     && VAR_2->line_size == VAR_1->line_size
     && VAR_2->cache_size == VAR_1->cache_size)
     break;

 VAR_2 = VAR_2->next;
    }

    return(VAR_2);
}

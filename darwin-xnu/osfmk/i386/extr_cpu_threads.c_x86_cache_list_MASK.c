
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; int level; scalar_t__ cache_size; struct TYPE_5__* next; int line_size; int partitions; int maxcpus; scalar_t__ nlcpus; } ;
typedef TYPE_1__ x86_cpu_cache_t ;
struct cpu_cache {scalar_t__ type; int level; } ;
struct TYPE_6__ {scalar_t__* cache_size; int cache_linesize; int * cache_partitions; int * cache_sharing; } ;


 int VAR_0 ;
 struct cpu_cache* VAR_1 ;
 TYPE_4__* FUNC_0 () ;
 int* VAR_2 ;
 TYPE_1__* FUNC_1 () ;

__attribute__((used)) static x86_cpu_cache_t *
FUNC_2(void)
{
    x86_cpu_cache_t *VAR_3 = ((void*)0);
    x86_cpu_cache_t *VAR_4 = ((void*)0);
    x86_cpu_cache_t *VAR_5 = ((void*)0);
    struct cpu_cache *VAR_6;
    int VAR_7;





    for (VAR_7 = 0, VAR_6 = &VAR_1[0]; VAR_7 < VAR_0; VAR_7++, VAR_6++) {

 if (VAR_6->type == 0 || FUNC_0()->cache_size[VAR_7] == 0)
     continue;

 VAR_4 = FUNC_1();
 if (VAR_4 == ((void*)0))
     break;

 VAR_4->type = VAR_6->type;
 VAR_4->level = VAR_6->level;
 VAR_4->nlcpus = 0;
 VAR_4->maxcpus = FUNC_0()->cache_sharing[VAR_7];
 VAR_4->partitions = FUNC_0()->cache_partitions[VAR_7];
 VAR_4->cache_size = FUNC_0()->cache_size[VAR_7];
 VAR_4->line_size = FUNC_0()->cache_linesize;

 if (VAR_5 == ((void*)0)) {
     VAR_3 = VAR_4;
     VAR_5 = VAR_4;
 } else {
     VAR_5->next = VAR_4;
     VAR_5 = VAR_4;
 }
 VAR_2[VAR_4->level - 1] += 1;
    }
    return VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int level; struct TYPE_4__* next; } ;
typedef TYPE_1__ x86_cpu_cache_t ;


 int VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static void
FUNC_0(x86_cpu_cache_t *VAR_4)
{
    VAR_2 -= 1;
    if (VAR_4->level > 0 && VAR_4->level <= VAR_0)
 VAR_1[VAR_4->level - 1] -= 1;
    VAR_4->next = VAR_3;
    VAR_3 = VAR_4;
}

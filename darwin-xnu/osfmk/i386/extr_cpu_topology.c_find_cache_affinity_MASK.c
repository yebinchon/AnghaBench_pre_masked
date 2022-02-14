
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int x86_cpu_cache_t ;
struct TYPE_4__ {int * cache; struct TYPE_4__* next; } ;
typedef TYPE_1__ x86_affinity_set_t ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static x86_affinity_set_t *
FUNC_0(x86_cpu_cache_t *VAR_1)
{
 x86_affinity_set_t *VAR_2;

 for (VAR_2 = VAR_0; VAR_2 != ((void*)0); VAR_2 = VAR_2->next) {
  if (VAR_1 == VAR_2->cache)
   break;
 }
 return VAR_2;
}

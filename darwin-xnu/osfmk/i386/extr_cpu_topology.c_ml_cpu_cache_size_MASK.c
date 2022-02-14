
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int cache_size; } ;
typedef TYPE_2__ x86_cpu_cache_t ;
typedef int uint64_t ;
struct TYPE_5__ {TYPE_2__** caches; } ;
struct TYPE_8__ {TYPE_1__ lcpu; } ;
struct TYPE_7__ {int max_mem; } ;


 unsigned int VAR_0 ;
 TYPE_4__* FUNC_0 () ;
 TYPE_3__ VAR_1 ;

uint64_t
FUNC_1(unsigned int VAR_2)
{
 x86_cpu_cache_t *VAR_3;

 if (VAR_2 == 0) {
  return VAR_1.max_mem;
 } else if ( 1 <= VAR_2 && VAR_2 <= VAR_0) {
  VAR_3 = FUNC_0()->lcpu.caches[VAR_2-1];
  return VAR_3 ? VAR_3->cache_size : 0;
 } else {
  return 0;
 }
}

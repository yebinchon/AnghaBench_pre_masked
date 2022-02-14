
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int l2_settings; int l2_cache_size; int l3_cache_size; scalar_t__ l3_settings; int l1_dcache_size; int l1_icache_size; int cache_line_size; scalar_t__ vector_unit; } ;
typedef TYPE_1__ ml_cpu_info_t ;
struct TYPE_6__ {int c_l2size; int c_dsize; int c_isize; int c_linesz; } ;
typedef TYPE_2__ cache_info_t ;


 TYPE_2__* FUNC_0 () ;

void
FUNC_1(ml_cpu_info_t * VAR_0)
{
 cache_info_t *VAR_1;

 VAR_1 = FUNC_0();
 VAR_0->vector_unit = 0;
 VAR_0->cache_line_size = VAR_1->c_linesz;
 VAR_0->l1_icache_size = VAR_1->c_isize;
 VAR_0->l1_dcache_size = VAR_1->c_dsize;





 VAR_0->l2_settings = 0;
 VAR_0->l2_cache_size = 0xFFFFFFFF;

 VAR_0->l3_settings = 0;
 VAR_0->l3_cache_size = 0xFFFFFFFF;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int vector_unit; scalar_t__ l1_icache_size; scalar_t__ l1_dcache_size; int l2_settings; scalar_t__ l2_cache_size; int l3_settings; scalar_t__ l3_cache_size; int cache_line_size; } ;
typedef TYPE_1__ ml_cpu_info_t ;
struct TYPE_6__ {scalar_t__* cache_size; int cache_linesize; } ;
typedef TYPE_2__ i386_cpu_info_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int FUNC_0 () ;
 TYPE_2__* FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;

void
FUNC_4(ml_cpu_info_t *VAR_12)
{
 boolean_t VAR_13;
 i386_cpu_info_t *VAR_14;

 if (VAR_12 == ((void*)0))
  return;





 VAR_13 = !!(FUNC_2() & VAR_7);

 if (FUNC_3())
  VAR_12->vector_unit = 9;
 else if ((FUNC_0() & VAR_5) && VAR_13)
  VAR_12->vector_unit = 8;
 else if ((FUNC_0() & VAR_4) && VAR_13)
  VAR_12->vector_unit = 7;
 else if ((FUNC_0() & VAR_6) && VAR_13)
  VAR_12->vector_unit = 6;
 else if ((FUNC_0() & VAR_3) && VAR_13)
  VAR_12->vector_unit = 5;
 else if ((FUNC_0() & VAR_2) && VAR_13)
  VAR_12->vector_unit = 4;
 else if ((FUNC_0() & VAR_1) && VAR_13)
  VAR_12->vector_unit = 3;
 else if (FUNC_0() & VAR_0)
  VAR_12->vector_unit = 2;
 else
  VAR_12->vector_unit = 0;

 VAR_14 = FUNC_1();

 VAR_12->cache_line_size = VAR_14->cache_linesize;

 VAR_12->l1_icache_size = VAR_14->cache_size[VAR_9];
 VAR_12->l1_dcache_size = VAR_14->cache_size[VAR_8];

        if (VAR_14->cache_size[VAR_10] > 0) {
            VAR_12->l2_settings = 1;
            VAR_12->l2_cache_size = VAR_14->cache_size[VAR_10];
        } else {
            VAR_12->l2_settings = 0;
            VAR_12->l2_cache_size = 0xFFFFFFFF;
        }

        if (VAR_14->cache_size[VAR_11] > 0) {
            VAR_12->l3_settings = 1;
            VAR_12->l3_cache_size = VAR_14->cache_size[VAR_11];
        } else {
            VAR_12->l3_settings = 0;
            VAR_12->l3_cache_size = 0xFFFFFFFF;
        }
}

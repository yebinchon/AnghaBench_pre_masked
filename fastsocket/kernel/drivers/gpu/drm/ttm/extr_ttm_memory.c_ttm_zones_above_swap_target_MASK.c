
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;
struct ttm_mem_zone {unsigned long long swap_limit; unsigned long long emer_mem; unsigned long long max_mem; unsigned long long used_mem; } ;
struct ttm_mem_global {unsigned int num_zones; struct ttm_mem_zone** zones; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(struct ttm_mem_global *VAR_1,
     bool VAR_2, uint64_t VAR_3)
{
 unsigned int VAR_4;
 struct ttm_mem_zone *VAR_5;
 uint64_t VAR_6;

 for (VAR_4 = 0; VAR_4 < VAR_1->num_zones; ++VAR_4) {
  VAR_5 = VAR_1->zones[VAR_4];

  if (VAR_2)
   VAR_6 = VAR_5->swap_limit;
  else if (FUNC_0(VAR_0))
   VAR_6 = VAR_5->emer_mem;
  else
   VAR_6 = VAR_5->max_mem;

  VAR_6 = (VAR_3 > VAR_6) ? 0ULL : VAR_6;

  if (VAR_5->used_mem > VAR_6)
   return 1;
 }
 return 0;
}

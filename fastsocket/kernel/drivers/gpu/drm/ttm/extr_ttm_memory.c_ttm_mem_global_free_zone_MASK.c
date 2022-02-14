
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct ttm_mem_zone {int used_mem; } ;
struct ttm_mem_global {unsigned int num_zones; int lock; struct ttm_mem_zone** zones; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct ttm_mem_global *VAR_0,
         struct ttm_mem_zone *VAR_1,
         uint64_t VAR_2)
{
 unsigned int VAR_3;
 struct ttm_mem_zone *VAR_4;

 FUNC_0(&VAR_0->lock);
 for (VAR_3 = 0; VAR_3 < VAR_0->num_zones; ++VAR_3) {
  VAR_4 = VAR_0->zones[VAR_3];
  if (VAR_1 && VAR_4 != VAR_1)
   continue;
  VAR_4->used_mem -= VAR_2;
 }
 FUNC_1(&VAR_0->lock);
}

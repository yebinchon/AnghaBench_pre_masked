
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone_cache {size_t zcc_depot_index; int * zcc_depot_list; } ;
struct zcc_per_cpu_cache {int current; } ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 int FUNC_1 (struct zone_cache*) ;
 int FUNC_2 (int *,int *) ;

void FUNC_3(struct zone_cache *VAR_1, struct zcc_per_cpu_cache *VAR_2)
{

 FUNC_0(FUNC_1(VAR_1));
 FUNC_0(VAR_1->zcc_depot_index < VAR_0);
 FUNC_2(&VAR_2->current, &VAR_1->zcc_depot_list[VAR_1->zcc_depot_index]);
 VAR_1->zcc_depot_index ++;
}

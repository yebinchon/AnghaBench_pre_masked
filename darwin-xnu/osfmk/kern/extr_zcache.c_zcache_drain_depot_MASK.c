
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* zone_t ;
struct zone_cache {int zcc_depot_index; int zcc_depot_lock; int * zcc_depot_list; } ;
struct TYPE_4__ {struct zone_cache* zcache; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct zone_cache*) ;
 int FUNC_3 (TYPE_1__*,int ) ;

void FUNC_4(zone_t VAR_1)
{
 struct zone_cache *VAR_2 = VAR_1->zcache;
 int VAR_3 = 0;





 FUNC_0(&(VAR_2->zcc_depot_lock));
 if (!FUNC_2(VAR_2) || (VAR_2->zcc_depot_index == 0)) {

  FUNC_1(&(VAR_2->zcc_depot_lock));
  return;
 }
 VAR_3 = VAR_2->zcc_depot_index;

 VAR_2->zcc_depot_index = VAR_0;
 FUNC_1(&(VAR_2->zcc_depot_lock));


 for (int VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
  FUNC_3(VAR_1, VAR_2->zcc_depot_list[VAR_4]);

 FUNC_0(&(VAR_2->zcc_depot_lock));

 VAR_2->zcc_depot_index = 0;
 FUNC_1(&(VAR_2->zcc_depot_lock));
}

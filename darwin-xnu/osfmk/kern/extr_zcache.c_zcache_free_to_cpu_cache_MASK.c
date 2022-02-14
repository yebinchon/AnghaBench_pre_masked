
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* zone_t ;
typedef int vm_offset_t ;
struct zone_cache {scalar_t__ zcc_depot_index; int zcc_depot_lock; struct zcc_per_cpu_cache* zcc_per_cpu_caches; } ;
struct zcc_per_cpu_cache {int current; int previous; } ;
struct TYPE_7__ {int cpu_id; } ;
struct TYPE_6__ {int elem_size; struct zone_cache* zcache; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 TYPE_5__* FUNC_1 () ;
 scalar_t__ VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*,void*) ;
 scalar_t__ FUNC_8 (struct zone_cache*) ;
 int FUNC_9 (struct zone_cache*,struct zcc_per_cpu_cache*) ;
 int FUNC_10 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int ,void*) ;
 int FUNC_13 (int *,int *) ;

bool FUNC_14(zone_t VAR_4, void *VAR_5)
{
 int VAR_6;
 struct zone_cache *VAR_7;
 struct zcc_per_cpu_cache *VAR_8;

 FUNC_2();
 VAR_6 = FUNC_1()->cpu_id;
 VAR_7 = VAR_4->zcache;
 VAR_8 = &VAR_7->zcc_per_cpu_caches[VAR_6];

 if (FUNC_11(VAR_8->current)) {

  goto free_to_current;
 } else if (FUNC_11(VAR_8->previous)) {

  FUNC_13(&VAR_8->previous, &VAR_8->current);
  goto free_to_current;
 } else{
  FUNC_5(&(VAR_7->zcc_depot_lock));
  if (FUNC_8(VAR_7) && (VAR_7->zcc_depot_index < VAR_3)) {

   FUNC_9(VAR_7, VAR_8);
   FUNC_6(&(VAR_7->zcc_depot_lock));
   goto free_to_current;
  }
  FUNC_6(&(VAR_7->zcc_depot_lock));

  FUNC_10(VAR_4, VAR_8->current);
  if(FUNC_11(VAR_8->current)){
   goto free_to_current;
  }
 }


 FUNC_3();
 return VAR_1;

free_to_current:
 FUNC_0(FUNC_11(VAR_8->current));
 FUNC_7(VAR_4, VAR_5);
 FUNC_12(VAR_8->current, VAR_5);





 FUNC_3();
 return VAR_2;
}

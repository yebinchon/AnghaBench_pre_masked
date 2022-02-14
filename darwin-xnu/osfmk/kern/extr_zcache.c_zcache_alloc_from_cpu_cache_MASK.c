
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
 int FUNC_0 (int ) ;
 TYPE_5__* FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*,void*) ;
 scalar_t__ FUNC_8 (struct zone_cache*) ;
 int FUNC_9 (struct zone_cache*,struct zcc_per_cpu_cache*) ;
 scalar_t__ FUNC_10 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_11 (int ) ;
 void* FUNC_12 (int ) ;
 int FUNC_13 (int *,int *) ;

vm_offset_t FUNC_14(zone_t VAR_1)
{
 int VAR_2;
 void *VAR_3 = ((void*)0);
 struct zone_cache *VAR_4;
 struct zcc_per_cpu_cache *VAR_5;

 FUNC_2();
 VAR_2 = FUNC_1()->cpu_id;
 VAR_4 = VAR_1->zcache;
 VAR_5 = &VAR_4->zcc_per_cpu_caches[VAR_2];

 if (FUNC_11(VAR_5->current)) {

  goto allocate_from_current;
 } else if (FUNC_11(VAR_5->previous)) {

  FUNC_13(&VAR_5->previous, &VAR_5->current);
  goto allocate_from_current;
 } else {
  FUNC_5(&(VAR_4->zcc_depot_lock));
  if (FUNC_8(VAR_4) && (VAR_4->zcc_depot_index > 0)) {

   FUNC_9(VAR_4, VAR_5);
   FUNC_6(&(VAR_4->zcc_depot_lock));
   goto allocate_from_current;
  }
  FUNC_6(&(VAR_4->zcc_depot_lock));

  if(FUNC_10(VAR_1, VAR_5->current)){
   goto allocate_from_current;
  }
 }


 FUNC_3();
 return (vm_offset_t) ((void*)0);

allocate_from_current:
 VAR_3 = FUNC_12(VAR_5->current);
 FUNC_0(VAR_3 != ((void*)0));
 FUNC_7(VAR_1, VAR_3);





 FUNC_3();
 return (vm_offset_t) VAR_3;
}

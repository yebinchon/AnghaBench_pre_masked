
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* zone_t ;
typedef int vm_size_t ;
struct zone_cache {scalar_t__ zcc_depot_index; struct zcc_magazine** zcc_depot_list; int zcc_depot_lock; TYPE_1__* zcc_per_cpu_caches; } ;
struct zcc_magazine {int dummy; } ;
struct TYPE_7__ {int cpu_cache_enabled; struct zone_cache* zcache; } ;
struct TYPE_6__ {struct zcc_magazine* previous; struct zcc_magazine* current; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_6 ;
 int FUNC_6 (struct zcc_magazine*,int ) ;

void FUNC_7(zone_t VAR_7)
 {
  int VAR_8;
 vm_size_t VAR_9;
 struct zone_cache *VAR_10;


 VAR_9 = sizeof(struct zone_cache) + (VAR_3 * sizeof(void *));

 VAR_10 = (struct zone_cache *) FUNC_1(VAR_9);



  for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
   VAR_10->zcc_per_cpu_caches[VAR_8].current = (struct zcc_magazine *)FUNC_5(VAR_5);
   VAR_10->zcc_per_cpu_caches[VAR_8].previous = (struct zcc_magazine *)FUNC_5(VAR_5);

   FUNC_0(VAR_10->zcc_per_cpu_caches[VAR_8].current != ((void*)0) && VAR_10->zcc_per_cpu_caches[VAR_8].previous != ((void*)0));

   FUNC_6(VAR_10->zcc_per_cpu_caches[VAR_8].current, VAR_4);
   FUNC_6(VAR_10->zcc_per_cpu_caches[VAR_8].previous, VAR_4);
  }


  FUNC_2(&(VAR_10->zcc_depot_lock), &VAR_6, VAR_0);


 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  VAR_10->zcc_depot_list[VAR_8] = (struct zcc_magazine *)FUNC_5(VAR_5);

  FUNC_0(VAR_10->zcc_depot_list[VAR_8] != ((void*)0));

  FUNC_6(VAR_10->zcc_depot_list[VAR_8], VAR_4);
 }

 VAR_10->zcc_depot_index = 0;

  FUNC_3(VAR_7);
 VAR_7->zcache = VAR_10;

  VAR_7->cpu_cache_enabled = VAR_2;
  FUNC_4(VAR_7);
  return;
 }

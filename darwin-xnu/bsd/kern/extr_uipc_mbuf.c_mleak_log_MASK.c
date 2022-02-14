
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct mtrace {int allocs; scalar_t__ depth; scalar_t__ collisions; int addr; int hitcount; } ;
struct mallocation {size_t trace_index; int count; int * element; int hitcount; } ;
typedef int mcache_obj_t ;
typedef int boolean_t ;
struct TYPE_2__ {int outstanding_allocs; int alloc_recorded; int alloc_overwrites; int alloc_collisions; int trace_recorded; int trace_overwrites; int trace_collisions; int total_conflicts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,uintptr_t*,size_t) ;
 size_t FUNC_2 (uintptr_t,int) ;
 size_t FUNC_3 (uintptr_t*,size_t,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,uintptr_t*,size_t) ;
 int VAR_2 ;
 struct mallocation* VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int VAR_6 ;
 struct mtrace* VAR_7 ;

__attribute__((used)) static boolean_t
FUNC_7(uintptr_t *VAR_8, mcache_obj_t *VAR_9, uint32_t VAR_10, int VAR_11)
{
 struct mallocation *VAR_12;
 struct mtrace *VAR_13;
 uint32_t VAR_14;


 if (!FUNC_4(VAR_4)) {
  VAR_5.total_conflicts++;
  return (VAR_0);
 }

 VAR_12 = &VAR_3[FUNC_2((uintptr_t)VAR_9,
     VAR_2)];
 VAR_14 = FUNC_3(VAR_8, VAR_10, VAR_6);
 VAR_13 = &VAR_7[VAR_14];

 FUNC_0(VAR_12 <= &VAR_3[VAR_2 - 1]);
 FUNC_0(VAR_13 <= &VAR_7[VAR_6 - 1]);

 VAR_12->hitcount++;
 VAR_13->hitcount++;





 if (VAR_12->element != ((void*)0) &&
     VAR_14 == VAR_12->trace_index) {
  VAR_5.alloc_collisions++;
  FUNC_5(VAR_4);
  return (VAR_1);
 }





 if (VAR_13->allocs > 0 &&
     FUNC_1(VAR_13->addr, VAR_8, (VAR_10 * sizeof (uintptr_t))) != 0) {

  VAR_13->collisions++;
  VAR_5.trace_collisions++;
  FUNC_5(VAR_4);
  return (VAR_1);
 } else if (VAR_13->allocs > 0) {

  VAR_13->allocs++;
 } else {

  if (VAR_13->depth != 0) {

   VAR_5.trace_overwrites++;
  }
  VAR_5.trace_recorded++;
  VAR_13->allocs = 1;
  FUNC_6(VAR_13->addr, VAR_8, (VAR_10 * sizeof (uintptr_t)));
  VAR_13->depth = VAR_10;
  VAR_13->collisions = 0;
 }


 if (VAR_12->element != ((void*)0)) {





  VAR_5.alloc_collisions++;
 } else if (VAR_12->trace_index != 0) {
  VAR_5.alloc_overwrites++;
 }
 VAR_12->element = VAR_9;
 VAR_12->trace_index = VAR_14;
 VAR_12->count = VAR_11;
 VAR_5.alloc_recorded++;
 VAR_5.outstanding_allocs++;

 FUNC_5(VAR_4);
 return (VAR_1);
}

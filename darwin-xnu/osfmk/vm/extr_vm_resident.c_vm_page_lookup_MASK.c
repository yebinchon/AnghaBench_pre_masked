
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef scalar_t__ vm_page_queue_entry_t ;
typedef scalar_t__ vm_page_object_t ;
struct TYPE_16__ {int page_list; } ;
typedef TYPE_2__ vm_page_bucket_t ;
typedef TYPE_3__* vm_object_t ;
typedef scalar_t__ vm_object_offset_t ;
typedef int uint64_t ;
typedef int lck_spin_t ;
struct TYPE_18__ {int vpl_miss; int vpl_hit; int vpl_fast_elapsed; int vpl_fast; int vpl_slow_elapsed; int vpl_slow; int vpl_bucket_NULL; int vpl_hit_hint_prev; int vpl_hit_hint_next; int vpl_hit_hint; int vpl_empty_obj; int vpl_total; } ;
struct TYPE_17__ {scalar_t__ resident_page_count; TYPE_1__* memq_hint; int memq; } ;
struct TYPE_15__ {scalar_t__ vmp_offset; scalar_t__ vmp_object; int vmp_next_m; int vmp_listq; } ;


 int VAR_0 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 TYPE_3__* FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;
 int FUNC_9 (TYPE_3__*) ;
 int * VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_10 (TYPE_3__*,scalar_t__) ;
 TYPE_4__ VAR_5 ;
 scalar_t__ FUNC_11 (int *,scalar_t__) ;
 scalar_t__ FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *) ;

vm_page_t
FUNC_15(
 vm_object_t VAR_6,
 vm_object_offset_t VAR_7)
{
 vm_page_t VAR_8;
 vm_page_bucket_t *VAR_9;
 vm_page_queue_entry_t VAR_10;
 lck_spin_t *VAR_11 = ((void*)0);
 int VAR_12;





 FUNC_9(VAR_6);

 if (VAR_6->resident_page_count == 0) {



  return (VAR_2);
 }

 VAR_8 = VAR_6->memq_hint;

 if (VAR_8 != VAR_2) {
  FUNC_5(FUNC_2(VAR_8) == VAR_6);

  if (VAR_8->vmp_offset == VAR_7) {



   return (VAR_8);
  }
  VAR_10 = (vm_page_queue_entry_t)FUNC_13(&VAR_8->vmp_listq);

  if (! FUNC_11(&VAR_6->memq, VAR_10)) {
   vm_page_t VAR_13;

   VAR_13 = (vm_page_t)((uintptr_t)VAR_10);
   FUNC_5(FUNC_2(VAR_13) == VAR_6);

   if (VAR_13->vmp_offset == VAR_7) {
    VAR_6->memq_hint = VAR_13;



    return (VAR_13);
   }
  }
  VAR_10 = (vm_page_queue_entry_t)FUNC_14(&VAR_8->vmp_listq);

  if (! FUNC_11(&VAR_6->memq, VAR_10)) {
   vm_page_t VAR_14;

   VAR_14 = (vm_page_t)((uintptr_t)VAR_10);
   FUNC_5(FUNC_2(VAR_14) == VAR_6);

   if (VAR_14->vmp_offset == VAR_7) {
    VAR_6->memq_hint = VAR_14;



    return (VAR_14);
   }
  }
 }



 VAR_12 = FUNC_10(VAR_6, VAR_7);
 VAR_9 = &VAR_4[VAR_12];
 if (!VAR_9->page_list) {



         return (VAR_2);
 }




 if (VAR_6->resident_page_count <= VAR_1) {




  VAR_8 = (vm_page_t)FUNC_12(&VAR_6->memq);

  while (!FUNC_11(&VAR_6->memq, (vm_page_queue_entry_t)VAR_8)) {

   if (VAR_8->vmp_offset == VAR_7)
    break;

   VAR_8 = (vm_page_t)FUNC_13(&VAR_8->vmp_listq);
  }
  if (FUNC_11(&VAR_6->memq, (vm_page_queue_entry_t)VAR_8))
   VAR_8 = ((void*)0);
 } else {
  vm_page_object_t VAR_15;

  VAR_15 = FUNC_3(VAR_6);

  VAR_11 = &VAR_3[VAR_12 / VAR_0];

  FUNC_6(VAR_11);

  for (VAR_8 = (vm_page_t)(FUNC_4(VAR_9->page_list));
       VAR_8 != VAR_2;
       VAR_8 = (vm_page_t)(FUNC_4(VAR_8->vmp_next_m))) {







   if ((VAR_8->vmp_object == VAR_15) && (VAR_8->vmp_offset == VAR_7))
    break;
  }
  FUNC_7(VAR_11);
 }
 if (VAR_8 != VAR_2) {
  FUNC_5(FUNC_2(VAR_8) == VAR_6);

  VAR_6->memq_hint = VAR_8;
 }
 return (VAR_8);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef TYPE_1__* vm_object_t ;
typedef scalar_t__ vm_object_offset_t ;
typedef TYPE_2__* vm_map_t ;
typedef scalar_t__ vm_map_offset_t ;
typedef TYPE_3__* vm_map_entry_t ;
typedef int kern_return_t ;
struct TYPE_25__ {int reusable_pages_success; int reusable_pages_shared; int reusable_shared; int reusable_pages_failure; int reusable_nonwritable; } ;
struct TYPE_24__ {scalar_t__ vme_start; int protection; int use_pmap; int is_sub_map; scalar_t__ iokit_acct; int vme_end; int used_for_jit; struct TYPE_24__* vme_next; } ;
struct TYPE_23__ {scalar_t__ pmap; } ;
struct TYPE_22__ {int ref_count; scalar_t__ copy_strategy; struct TYPE_22__* shadow; struct TYPE_22__* copy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 TYPE_1__* FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_1__* VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_10 ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,scalar_t__,scalar_t__,TYPE_3__**) ;
 TYPE_3__* FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_1__*,scalar_t__,scalar_t__,int,int ,scalar_t__,scalar_t__) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;
 TYPE_4__ VAR_11 ;

__attribute__((used)) static kern_return_t
FUNC_14(
 vm_map_t VAR_12,
 vm_map_offset_t VAR_13,
 vm_map_offset_t VAR_14)
{
 vm_map_entry_t VAR_15;
 vm_object_t VAR_16;
 vm_object_offset_t VAR_17, VAR_18;
 vm_map_offset_t VAR_19;






 FUNC_7(VAR_12);
 FUNC_5(VAR_12->pmap != VAR_10);







 if (!FUNC_8(VAR_12, VAR_13, VAR_14, &VAR_15)) {
  FUNC_10(VAR_12);
  VAR_11.reusable_pages_failure++;
  return VAR_0;
 }




 for (; VAR_15 != FUNC_9(VAR_12) && VAR_15->vme_start < VAR_14;
      VAR_15 = VAR_15->vme_next) {
  int VAR_20 = 0;




  if (! FUNC_6(VAR_15)) {
   FUNC_10(VAR_12);
   VAR_11.reusable_pages_failure++;
   return VAR_0;
  }

  if (! (VAR_15->protection & VAR_9) && !VAR_15->used_for_jit) {

   FUNC_10(VAR_12);
   VAR_11.reusable_nonwritable++;
   VAR_11.reusable_pages_failure++;
   return VAR_1;
  }






  if (VAR_15->vme_start < VAR_13) {
   VAR_17 = VAR_13 - VAR_15->vme_start;
   VAR_19 = VAR_13;
  } else {
   VAR_17 = 0;
   VAR_19 = VAR_15->vme_start;
  }
  VAR_18 = FUNC_0(VAR_14, VAR_15->vme_end) - VAR_15->vme_start;
  VAR_17 += FUNC_4(VAR_15);
  VAR_18 += FUNC_4(VAR_15);

  FUNC_5(!VAR_15->is_sub_map);
  VAR_16 = FUNC_3(VAR_15);
  if (VAR_16 == VAR_8)
   continue;


  FUNC_12(VAR_16);
  if (((VAR_16->ref_count == 1) ||
       (VAR_16->copy_strategy != VAR_3 &&
        VAR_16->copy == VAR_8)) &&
      VAR_16->shadow == VAR_8 &&
      !(VAR_15->iokit_acct ||
        (!VAR_15->is_sub_map && !VAR_15->use_pmap))) {
   if (VAR_16->ref_count != 1) {
    VAR_11.reusable_shared++;
   }
   VAR_20 = 1;
  } else {
   VAR_20 = -1;
  }
  if (VAR_20 != -1) {
   FUNC_11(VAR_16,
         VAR_17,
         VAR_18 - VAR_17,
         VAR_20,
         VAR_4 ,
         VAR_12->pmap,
         VAR_19);
  } else {
   VAR_11.reusable_pages_shared++;
  }
  FUNC_13(VAR_16);

  if (FUNC_1(VAR_15) == VAR_5 ||
      FUNC_1(VAR_15) == VAR_7) {
   FUNC_2(VAR_15, VAR_6);
  }
 }

 FUNC_10(VAR_12);
 VAR_11.reusable_pages_success++;
 return VAR_2;
}

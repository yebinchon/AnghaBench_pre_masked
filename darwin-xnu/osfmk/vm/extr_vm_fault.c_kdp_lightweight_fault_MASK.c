
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int vm_offset_t ;
typedef TYPE_2__* vm_object_t ;
typedef TYPE_3__* vm_map_t ;
typedef TYPE_4__* vm_map_entry_t ;
typedef scalar_t__ kern_return_t ;
struct TYPE_21__ {int vme_start; scalar_t__ is_sub_map; } ;
struct TYPE_20__ {int lock; } ;
struct TYPE_19__ {int wimg_bits; int paging_offset; int vo_shadow_offset; struct TYPE_19__* shadow; int pager; scalar_t__ pager_created; scalar_t__ activity_in_progress; scalar_t__ paging_in_progress; int Lock; } ;
struct TYPE_18__ {scalar_t__ vmp_q_state; scalar_t__ vmp_fictitious; scalar_t__ vmp_private; scalar_t__ vmp_unusual; scalar_t__ vmp_restart; scalar_t__ vmp_overwriting; scalar_t__ vmp_cleaning; scalar_t__ vmp_error; scalar_t__ vmp_absent; scalar_t__ vmp_free_when_done; scalar_t__ vmp_busy; scalar_t__ vmp_laundry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int,int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_2__* FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_3__* VAR_8 ;
 TYPE_2__* VAR_9 ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_4 (int) ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_5 (int *) ;
 TYPE_1__* FUNC_6 (TYPE_2__*,int) ;
 scalar_t__ VAR_17 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,int,int ,int*,int,int*) ;
 int FUNC_10 (TYPE_3__*,int,TYPE_4__**) ;

vm_offset_t
FUNC_11(vm_map_t VAR_18, vm_offset_t VAR_19)
{
 vm_map_entry_t VAR_20;
 vm_object_t VAR_21;
 vm_offset_t VAR_22;
 vm_page_t VAR_23;
 int VAR_24, VAR_25;
 int VAR_26 = (VAR_0 | VAR_2 | VAR_1);
 int VAR_27 = VAR_12;
 kern_return_t VAR_28;

 if (VAR_17) {
  FUNC_7("kdp_lightweight_fault called from outside of debugger context");
 }

 FUNC_4(VAR_18 != VAR_8);

 FUNC_4((VAR_19 & VAR_4) == 0);
 if ((VAR_19 & VAR_4) != 0) {
  return 0;
 }

 if (FUNC_5(&VAR_18->lock)) {
  return 0;
 }

 if (!FUNC_10(VAR_18, VAR_19, &VAR_20)) {
  return 0;
 }

 if (VAR_20->is_sub_map) {
  return 0;
 }

 VAR_21 = FUNC_1(VAR_20);
 if (VAR_21 == VAR_9) {
  return 0;
 }

 VAR_22 = VAR_19 - VAR_20->vme_start + FUNC_2(VAR_20);

 while (VAR_5) {
  if (FUNC_5(&VAR_21->Lock)) {
   return 0;
  }

  if (VAR_21->pager_created && (VAR_21->paging_in_progress ||
   VAR_21->activity_in_progress)) {
   return 0;
  }

  VAR_23 = FUNC_6(VAR_21, VAR_22);

  if (VAR_23 != VAR_10) {

   if ((VAR_21->wimg_bits & VAR_14) != VAR_13) {
    return 0;
   }

   if (VAR_23->vmp_laundry || VAR_23->vmp_busy || VAR_23->vmp_free_when_done || VAR_23->vmp_absent || VAR_23->vmp_error || VAR_23->vmp_cleaning ||
    VAR_23->vmp_overwriting || VAR_23->vmp_restart || VAR_23->vmp_unusual) {
    return 0;
   }

   FUNC_4(!VAR_23->vmp_private);
   if (VAR_23->vmp_private) {
    return 0;
   }

   FUNC_4(!VAR_23->vmp_fictitious);
   if (VAR_23->vmp_fictitious) {
    return 0;
   }

   FUNC_4(VAR_23->vmp_q_state != VAR_11);
   if (VAR_23->vmp_q_state == VAR_11) {
    return 0;
   }

   return FUNC_8(FUNC_3(VAR_23));
  }

  VAR_24 = VAR_7;

  if (VAR_21->pager_created && FUNC_0(VAR_21, VAR_22, VAR_24)) {
   if (VAR_24 == VAR_6) {
    VAR_28 = FUNC_9(VAR_21->pager, (VAR_22 + VAR_21->paging_offset),
        VAR_16, &VAR_27,
        VAR_26, &VAR_25);
    if (VAR_28 == VAR_3) {
     return VAR_15;
    } else {
     return 0;
    }
   }
  }

  if (VAR_21->shadow == VAR_9) {
   return 0;
  }

  VAR_22 += VAR_21->vo_shadow_offset;
  VAR_21 = VAR_21->shadow;
 }

}

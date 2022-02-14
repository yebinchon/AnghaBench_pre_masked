
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef void* vm_prot_t ;
typedef int vm_object_t ;
typedef int vm_object_offset_t ;
typedef TYPE_2__* vm_map_t ;
typedef void* vm_map_offset_t ;
typedef TYPE_3__* vm_map_entry_t ;
typedef int vm_inherit_t ;
typedef int vm_behavior_t ;
typedef int uint64_t ;
typedef void* boolean_t ;
struct TYPE_22__ {void* vme_start; void* vme_end; unsigned int wired_count; void* vme_atomic; void* vme_resilient_media; void* vme_resilient_codesign; void* iokit_acct; void* pmap_cs_associated; void* used_for_jit; void* superpage_size; void* permanent; void* no_cache; void* zero_wired_pages; void* use_pmap; scalar_t__ user_wired_count; int behavior; void* max_protection; void* protection; int inheritance; void* needs_wakeup; void* in_transition; void* needs_copy; void* is_sub_map; void* is_shared; void* map_aligned; } ;
struct TYPE_20__ {int entries_pageable; } ;
struct TYPE_21__ {int size; int pmap; void* jit_entry_exists; TYPE_1__ hdr; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*,TYPE_3__*) ;
 void* VAR_2 ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int VAR_3 ;
 int FUNC_4 (void*,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,char*,int ,int ) ;
 int FUNC_9 (void*,int ,int *) ;
 int FUNC_10 (void*) ;
 int FUNC_11 (int ) ;
 TYPE_3__* FUNC_12 (TYPE_2__*,int) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*,TYPE_3__*,TYPE_3__*,int ) ;

vm_map_entry_t
FUNC_15(
 vm_map_t VAR_4,
 vm_map_entry_t VAR_5,
 vm_map_offset_t VAR_6,
 vm_map_offset_t VAR_7,
 vm_object_t VAR_8,
 vm_object_offset_t VAR_9,
 boolean_t VAR_10,
 boolean_t VAR_11,
 boolean_t VAR_12,
 vm_prot_t VAR_13,
 vm_prot_t VAR_14,
 vm_behavior_t VAR_15,
 vm_inherit_t VAR_16,
 unsigned VAR_17,
 boolean_t VAR_18,
 boolean_t VAR_19,
 unsigned int VAR_20,
 boolean_t VAR_21,
 boolean_t VAR_22,
 boolean_t VAR_23,
 int VAR_24)
{
 vm_map_entry_t VAR_25;

 FUNC_7(VAR_5 != (vm_map_entry_t)0);
 FUNC_13(VAR_4);






 VAR_25 = FUNC_12(VAR_4, !VAR_4->hdr.entries_pageable);

 if (FUNC_6(VAR_4) != VAR_1) {
  VAR_25->map_aligned = VAR_2;
 } else {
  VAR_25->map_aligned = VAR_0;
 }
 if (VAR_21 &&
     (! FUNC_4(VAR_6, FUNC_5(VAR_4)) ||
      ! FUNC_4(VAR_7, FUNC_5(VAR_4)))) {
  VAR_25->map_aligned = VAR_0;
 }

 VAR_25->vme_start = VAR_6;
 VAR_25->vme_end = VAR_7;
 FUNC_7(FUNC_10(VAR_25->vme_start));
 FUNC_7(FUNC_10(VAR_25->vme_end));
 if (VAR_25->map_aligned) {
  FUNC_7(FUNC_4(VAR_25->vme_start,
        FUNC_5(VAR_4)));
  FUNC_7(FUNC_4(VAR_25->vme_end,
        FUNC_5(VAR_4)));
 }
 FUNC_7(VAR_25->vme_start < VAR_25->vme_end);

 FUNC_2(VAR_25, VAR_8);
 FUNC_3(VAR_25, VAR_9);
 VAR_25->is_shared = VAR_11;
 VAR_25->is_sub_map = VAR_22;
 VAR_25->needs_copy = VAR_10;
 VAR_25->in_transition = VAR_12;
 VAR_25->needs_wakeup = VAR_0;
 VAR_25->inheritance = VAR_16;
 VAR_25->protection = VAR_13;
 VAR_25->max_protection = VAR_14;
 VAR_25->behavior = VAR_15;
 VAR_25->wired_count = VAR_17;
 VAR_25->user_wired_count = 0;
 if (VAR_22) {




  VAR_25->use_pmap = VAR_0;
 } else {




  VAR_25->use_pmap = VAR_2;
 }
 FUNC_1(VAR_25, VAR_24);
 VAR_25->zero_wired_pages = VAR_0;
 VAR_25->no_cache = VAR_18;
 VAR_25->permanent = VAR_19;
 if (VAR_20)
  VAR_25->superpage_size = VAR_2;
 else
  VAR_25->superpage_size = VAR_0;
 if (VAR_23){



  {
   VAR_25->used_for_jit = VAR_2;
   VAR_4->jit_entry_exists = VAR_2;


   FUNC_11(VAR_4->pmap);
  }
 } else {
  VAR_25->used_for_jit = VAR_0;
 }
 VAR_25->pmap_cs_associated = VAR_0;
 VAR_25->iokit_acct = VAR_0;
 VAR_25->vme_resilient_codesign = VAR_0;
 VAR_25->vme_resilient_media = VAR_0;
 VAR_25->vme_atomic = VAR_0;





 FUNC_14(VAR_4, VAR_5, VAR_25,
    VAR_3);
 VAR_4->size += VAR_7 - VAR_6;





 FUNC_0(VAR_4, VAR_25);
 return VAR_25;
}

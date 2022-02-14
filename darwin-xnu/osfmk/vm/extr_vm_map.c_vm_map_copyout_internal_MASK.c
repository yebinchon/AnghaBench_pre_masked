
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_63__ TYPE_5__ ;
typedef struct TYPE_62__ TYPE_4__ ;
typedef struct TYPE_61__ TYPE_3__ ;
typedef struct TYPE_60__ TYPE_2__ ;
typedef struct TYPE_59__ TYPE_1__ ;


typedef int zone_t ;
typedef int vm_prot_t ;
typedef TYPE_3__* vm_page_t ;
typedef int vm_object_t ;
typedef scalar_t__ vm_object_offset_t ;
typedef TYPE_4__* vm_map_t ;
typedef scalar_t__ vm_map_size_t ;
typedef scalar_t__ vm_map_offset_t ;
typedef TYPE_5__* vm_map_entry_t ;
typedef TYPE_5__* vm_map_copy_t ;
typedef scalar_t__ vm_map_address_t ;
typedef int vm_inherit_t ;
struct vm_object_fault_info {int pmap_options; int user_tag; } ;
typedef scalar_t__ kern_return_t ;
typedef int event_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_60__ {scalar_t__ entries_pageable; } ;
struct TYPE_63__ {scalar_t__ size; scalar_t__ type; scalar_t__ offset; scalar_t__ vme_start; scalar_t__ vme_end; scalar_t__ wired_count; void* use_pmap; scalar_t__ is_sub_map; scalar_t__ iokit_acct; int protection; int behavior; int max_protection; int inheritance; void* map_aligned; struct TYPE_63__* vme_next; scalar_t__ from_reserved_zone; TYPE_2__ cpy_hdr; int cpy_object; } ;
struct TYPE_59__ {scalar_t__ entries_pageable; } ;
struct TYPE_62__ {scalar_t__ disable_vmentry_reuse; scalar_t__ max_offset; scalar_t__ min_offset; int size; int pmap; TYPE_1__ hdr; scalar_t__ holelistenabled; int holes_list; scalar_t__ wait_for_space; TYPE_5__* first_free; } ;
struct TYPE_61__ {scalar_t__ vmp_absent; } ;


 TYPE_5__* FUNC_0 (int ) ;
 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (TYPE_4__*,TYPE_5__*) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*) ;
 scalar_t__ FUNC_4 (TYPE_5__*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 TYPE_5__* VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_4__*,TYPE_5__*,scalar_t__) ;
 int VAR_19 ;
 int FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (TYPE_4__*) ;
 scalar_t__ FUNC_9 (TYPE_4__*) ;
 TYPE_3__* VAR_20 ;
 int FUNC_10 (TYPE_3__*) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_11 (int) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (TYPE_4__*) ;
 int FUNC_14 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_15 (TYPE_4__*,int ) ;
 int FUNC_16 (char*,...) ;
 int FUNC_17 (int ,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (TYPE_3__*,int ,scalar_t__,int ,int ,int ,void*,int ,struct vm_object_fault_info*,int *,int*) ;
 TYPE_5__* FUNC_20 (TYPE_5__*,int) ;
 int FUNC_21 (TYPE_5__*,TYPE_5__*,TYPE_5__*) ;
 TYPE_5__* FUNC_22 (TYPE_5__*) ;
 int FUNC_23 (TYPE_4__*,TYPE_5__*,TYPE_5__*) ;
 TYPE_5__* FUNC_24 (TYPE_5__*) ;
 int FUNC_25 (TYPE_4__*,TYPE_5__*,TYPE_5__*,scalar_t__,int ,int ,int ) ;
 TYPE_5__* FUNC_26 (TYPE_5__*) ;
 int VAR_24 ;
 scalar_t__ FUNC_27 (TYPE_4__*,scalar_t__*,TYPE_5__*,scalar_t__,void*,scalar_t__) ;
 scalar_t__ FUNC_28 (TYPE_4__*,scalar_t__*,scalar_t__,scalar_t__,int ,int ,int ,int ,scalar_t__,void*,int ,int ,int ) ;
 int FUNC_29 (TYPE_5__*,TYPE_5__*) ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_30 (TYPE_4__*) ;
 scalar_t__ FUNC_31 (TYPE_4__*,scalar_t__,TYPE_5__**) ;
 scalar_t__ FUNC_32 (TYPE_4__*) ;
 scalar_t__ FUNC_33 (scalar_t__,int ) ;
 int FUNC_34 (TYPE_5__*,TYPE_5__*) ;
 TYPE_5__* FUNC_35 (TYPE_4__*) ;
 scalar_t__ FUNC_36 (scalar_t__,int ) ;
 int FUNC_37 (TYPE_4__*) ;
 int FUNC_38 (int ) ;
 scalar_t__ FUNC_39 (scalar_t__) ;
 int FUNC_40 (int ) ;
 TYPE_3__* FUNC_41 (int ,scalar_t__) ;
 int FUNC_42 (int ,TYPE_5__*) ;

kern_return_t
FUNC_43(
 vm_map_t VAR_27,
 vm_map_address_t *VAR_28,
 vm_map_copy_t VAR_29,
 vm_map_size_t VAR_30,
 boolean_t VAR_31,
 vm_prot_t VAR_32,
 vm_prot_t VAR_33,
 vm_inherit_t VAR_34)
{
 vm_map_size_t VAR_35;
 vm_map_size_t VAR_36;
 vm_map_offset_t VAR_37;
 vm_object_offset_t VAR_38;
 vm_map_entry_t VAR_39;
 vm_map_entry_t VAR_40;
 vm_map_entry_t VAR_41;





 if (VAR_29 == VAR_17) {
  *VAR_28 = 0;
  return(VAR_4);
 }

 if (VAR_29->size != VAR_30) {
  *VAR_28 = 0;
  return VAR_2;
 }






 if (VAR_29->type == VAR_18) {
  vm_object_t VAR_42 = VAR_29->cpy_object;
  kern_return_t VAR_43;
  vm_object_offset_t VAR_44;

  VAR_44 = FUNC_39(VAR_29->offset);
  VAR_35 = FUNC_33((VAR_30 +
       (vm_map_size_t)(VAR_29->offset -
         VAR_44)),
      FUNC_8(VAR_27));
  *VAR_28 = 0;
  VAR_43 = FUNC_28(VAR_27, VAR_28, VAR_35,
      (vm_map_offset_t) 0, VAR_13,
      VAR_19,
      VAR_15,
      VAR_42, VAR_44, VAR_1,
      VAR_22, VAR_21,
      VAR_14);
  if (VAR_43 != VAR_4)
   return(VAR_43);

  *VAR_28 += (vm_map_offset_t)(VAR_29->offset - VAR_44);
  if (VAR_31)
   FUNC_42(VAR_24, VAR_29);
  return(VAR_4);
 }






 if (VAR_29->type == VAR_16) {
  return FUNC_27(VAR_27, VAR_28,
          VAR_29, VAR_30, VAR_1,
          VAR_31);
 }






 VAR_38 = FUNC_36((vm_map_size_t)VAR_29->offset,
       FUNC_5(VAR_29));
 VAR_35 = FUNC_33((vm_map_size_t)VAR_29->offset + VAR_30,
     FUNC_5(VAR_29))
  - VAR_38;


StartAgain: ;

 FUNC_30(VAR_27);
 if( VAR_27->disable_vmentry_reuse == VAR_11) {
  FUNC_6(VAR_27, VAR_40, VAR_37);
  VAR_39 = VAR_40;
 } else {
  if (VAR_27->holelistenabled) {
   VAR_41 = FUNC_0(VAR_27->holes_list);

   if (VAR_41 == ((void*)0)) {



    FUNC_37(VAR_27);
    return(VAR_3);
   }

   VAR_39 = VAR_41;
   VAR_37 = VAR_39->vme_start;
  } else {
   FUNC_11(FUNC_13(VAR_27));
   VAR_37 = ((VAR_39 = VAR_27->first_free) == FUNC_35(VAR_27)) ?
   FUNC_32(VAR_27) : VAR_39->vme_end;
  }
  VAR_37 = FUNC_33(VAR_37,
       FUNC_8(VAR_27));
 }

 while (VAR_11) {
  vm_map_entry_t VAR_45 = VAR_39->vme_next;
  vm_map_offset_t VAR_46 = VAR_37 + VAR_35;

  if ((VAR_46 > VAR_27->max_offset) || (VAR_46 < VAR_37)) {
   if (VAR_27->wait_for_space) {
    if (VAR_35 <= (VAR_27->max_offset - VAR_27->min_offset)) {
     FUNC_12((event_t) VAR_27,
          VAR_10);
     FUNC_37(VAR_27);
     FUNC_18(VAR_9);
     goto StartAgain;
    }
   }
   FUNC_37(VAR_27);
   return(VAR_3);
  }

  if (VAR_27->holelistenabled) {
   if (VAR_39->vme_end >= VAR_46)
    break;
  } else {
   if (VAR_45 == FUNC_35(VAR_27))
    break;

   if (VAR_45->vme_start >= VAR_46)
    break;
  }

  VAR_39 = VAR_45;

  if (VAR_27->holelistenabled) {
   if (VAR_39 == FUNC_0(VAR_27->holes_list)) {



    FUNC_37(VAR_27);
    return(VAR_3);
   }
   VAR_37 = VAR_39->vme_start;
  } else {
   VAR_37 = VAR_39->vme_end;
  }
  VAR_37 = FUNC_33(VAR_37,
       FUNC_8(VAR_27));
 }

 if (VAR_27->holelistenabled) {
  if (FUNC_31(VAR_27, VAR_39->vme_start, &VAR_39)) {
   FUNC_16("Found an existing entry (%p) instead of potential hole at address: 0x%llx.\n", VAR_39, (unsigned long long)VAR_39->vme_start);
  }
 }


 VAR_36 = VAR_37 - VAR_38;
 if (! VAR_31) {
  goto after_adjustments;
 }







 if (VAR_29->cpy_hdr.entries_pageable != VAR_27->hdr.entries_pageable) {




  zone_t VAR_47;
  vm_map_entry_t VAR_48, VAR_49;





  VAR_40 = FUNC_22(VAR_29);





  FUNC_34(VAR_29, VAR_40);
  VAR_29->cpy_hdr.entries_pageable = VAR_27->hdr.entries_pageable;




  while (VAR_40 != FUNC_26(VAR_29)) {
   VAR_49 = FUNC_20(VAR_29, !VAR_29->cpy_hdr.entries_pageable);
   FUNC_29(VAR_49, VAR_40);
   FUNC_11(!VAR_49->iokit_acct);
   if (VAR_49->is_sub_map) {

    VAR_49->use_pmap = VAR_1;
   }
   FUNC_21(VAR_29,
            FUNC_24(VAR_29),
            VAR_49);
   VAR_48 = VAR_40->vme_next;
   VAR_47 = VAR_40->from_reserved_zone ? VAR_25 : VAR_26;
   FUNC_42(VAR_47, VAR_40);
   VAR_40 = VAR_48;
  }
 }






 for (VAR_40 = FUNC_22(VAR_29);
      VAR_40 != FUNC_26(VAR_29);
      VAR_40 = VAR_40->vme_next) {
  if (FUNC_9(VAR_27) == VAR_5) {






   VAR_40->map_aligned = VAR_1;
  }

  VAR_40->vme_start += VAR_36;
  VAR_40->vme_end += VAR_36;

  if (VAR_40->map_aligned) {
   FUNC_11(FUNC_7(VAR_40->vme_start,
         FUNC_8(VAR_27)));
   FUNC_11(FUNC_7(VAR_40->vme_end,
         FUNC_8(VAR_27)));
  }

  VAR_40->inheritance = VAR_14;
  VAR_40->protection = VAR_22;
  VAR_40->max_protection = VAR_21;
  VAR_40->behavior = VAR_12;





  if (VAR_40->wired_count != 0) {
   vm_map_offset_t VAR_50;
   vm_object_offset_t VAR_51;
   vm_object_t VAR_52;
   vm_prot_t VAR_53;
   int VAR_54;

   VAR_52 = FUNC_3(VAR_40);
   VAR_51 = FUNC_4(VAR_40);
   VAR_50 = VAR_40->vme_start;

   FUNC_17(VAR_27->pmap,
          VAR_40->vme_start,
          VAR_40->vme_end,
          VAR_11);

   while (VAR_50 < VAR_40->vme_end) {
    vm_page_t VAR_55;
    struct vm_object_fault_info VAR_56 = {};
    FUNC_38(VAR_52);

    VAR_55 = FUNC_41(VAR_52, VAR_51);
    if (VAR_55 == VAR_20 || !FUNC_10(VAR_55) ||
        VAR_55->vmp_absent)
     FUNC_16("vm_map_copyout: wiring %p", VAR_55);

    VAR_53 = VAR_40->protection;

    if (FUNC_15(VAR_27, FUNC_2(VAR_40)) &&
        VAR_53)
            VAR_53 |= VAR_23;

    VAR_54 = VAR_0;

    VAR_56.user_tag = FUNC_2(VAR_40);
    VAR_56.pmap_options = 0;
    if (VAR_40->iokit_acct ||
        (!VAR_40->is_sub_map && !VAR_40->use_pmap)) {
     VAR_56.pmap_options |= VAR_8;
    }

    FUNC_19(VAR_55,
            VAR_27->pmap,
            VAR_50,
            VAR_53,
            VAR_53,
            FUNC_10(VAR_55),
            VAR_1,
            VAR_15,
            &VAR_56,
            ((void*)0),
            &VAR_54);

    FUNC_40(VAR_52);

    VAR_51 += VAR_7;
    VAR_50 += VAR_6;
   }
  }
 }

after_adjustments:





 *VAR_28 = VAR_37 + (VAR_29->offset - VAR_38);
 if (VAR_31) {
  FUNC_1(VAR_27, FUNC_24(VAR_29));
 } else {
  FUNC_1(VAR_27, VAR_39);
 }

 VAR_27->size += VAR_35;





 if (VAR_31) {
  FUNC_23(VAR_27, VAR_39, VAR_29);
 } else {
  FUNC_25(VAR_27, VAR_39, VAR_29, VAR_36,
      VAR_32, VAR_33,
      VAR_34);
 }

 FUNC_37(VAR_27);





 return(VAR_4);
}

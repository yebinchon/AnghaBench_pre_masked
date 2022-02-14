
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_25__ ;
typedef struct TYPE_26__ TYPE_1__ ;


typedef int vm_tag_t ;
typedef int vm_prot_t ;
typedef TYPE_2__* vm_map_t ;
typedef scalar_t__ vm_map_size_t ;
typedef scalar_t__ vm_map_offset_t ;
typedef int vm_map_kernel_flags_t ;
typedef TYPE_3__* vm_map_entry_t ;
typedef scalar_t__ vm_map_address_t ;
typedef int vm_inherit_t ;
struct TYPE_27__ {TYPE_3__* next; } ;
struct vm_map_header {TYPE_25__ links; } ;
struct pmap_cs_lookup_results {scalar_t__ region_size; scalar_t__ region_start; scalar_t__ base; struct pmap_cs_code_directory* region_cd_entry; } ;
struct pmap_cs_code_directory {int dummy; } ;
typedef scalar_t__ kern_return_t ;
typedef int boolean_t ;
struct TYPE_29__ {scalar_t__ vme_end; int is_sub_map; int map_aligned; int vme_start; scalar_t__ vme_resilient_codesign; void* protection; void* max_protection; struct TYPE_29__* vme_next; } ;
struct TYPE_26__ {int entries_pageable; } ;
struct TYPE_28__ {scalar_t__ disable_vmentry_reuse; scalar_t__ highest_entry_end; scalar_t__ wiring_required; int pmap; int size; int is_nested_map; TYPE_1__ hdr; } ;


 TYPE_3__* FUNC_0 (TYPE_25__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int VAR_4 ;
 int VAR_5 ;



 int VAR_6 ;
 TYPE_3__* VAR_7 ;
 TYPE_2__* VAR_8 ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_9 ;
 void* VAR_10 ;
 int FUNC_5 (struct vm_map_header*,TYPE_3__*) ;
 int FUNC_6 (struct vm_map_header*,TYPE_3__*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,scalar_t__,struct pmap_cs_lookup_results*) ;
 int FUNC_9 (char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,char*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (TYPE_2__*) ;
 scalar_t__ FUNC_12 (TYPE_2__*,scalar_t__,scalar_t__,int ,struct vm_map_header*,int*,int*,int ,int ,int,int ) ;
 scalar_t__ FUNC_13 (TYPE_2__*,scalar_t__*,scalar_t__,scalar_t__,int,int ,int ,TYPE_3__**) ;
 scalar_t__ FUNC_14 (scalar_t__,int ) ;
 int FUNC_15 (TYPE_2__*,TYPE_3__*,TYPE_3__*,int ) ;
 scalar_t__ FUNC_16 (scalar_t__,int ) ;
 int FUNC_17 (TYPE_2__*) ;
 scalar_t__ FUNC_18 (TYPE_2__*,scalar_t__,scalar_t__,int,int ,scalar_t__) ;
 int FUNC_19 (int ) ;

kern_return_t
FUNC_20(
 vm_map_t VAR_11,
 vm_map_address_t *VAR_12,
 vm_map_size_t VAR_13,
 vm_map_offset_t VAR_14,
 int VAR_15,
 vm_map_kernel_flags_t VAR_16,
 vm_tag_t VAR_17,
 vm_map_t VAR_18,
 vm_map_offset_t VAR_19,
 boolean_t VAR_20,
 vm_prot_t *VAR_21,
 vm_prot_t *VAR_22,
 vm_inherit_t VAR_23)
{
 kern_return_t VAR_24;
 vm_map_entry_t VAR_25;
 vm_map_entry_t VAR_26 = VAR_7;
 vm_map_entry_t VAR_27;
 struct vm_map_header VAR_28;
 vm_map_offset_t VAR_29;

 if (VAR_11 == VAR_8)
  return VAR_0;

 switch (VAR_23) {
 case 129:
 case 130:
 case 128:
  if (VAR_13 != 0 && VAR_18 != VAR_8)
   break;

 default:
  return VAR_0;
 }
 if ((VAR_15 & VAR_5) != 0) {
  VAR_29 = VAR_19 - FUNC_16(VAR_19, VAR_2);
  VAR_13 = FUNC_14(VAR_19 + VAR_13 - FUNC_16(VAR_19, VAR_2), VAR_2);
 } else {
  VAR_13 = FUNC_14(VAR_13, VAR_2);
 }
 if (VAR_13 == 0) {
  return VAR_0;
 }

 VAR_24 = FUNC_12(VAR_18, VAR_19,
          VAR_13, VAR_20, &VAR_28,
          VAR_21,
          VAR_22,
          VAR_23,
          VAR_11->hdr.entries_pageable,
          VAR_18 == VAR_11,
          VAR_16);

 if (VAR_24 != VAR_1) {
  return VAR_24;
 }





 *VAR_12 = FUNC_16(*VAR_12,
         FUNC_4(VAR_11));
 FUNC_11(VAR_11);
 VAR_24 = FUNC_13(VAR_11, VAR_12, VAR_13,
          VAR_14, VAR_15, VAR_16, VAR_17,
          &VAR_26);

 for (VAR_25 = VAR_28.links.next;
      VAR_25 != FUNC_0(&VAR_28.links);
      VAR_25 = VAR_27) {
  VAR_27 = VAR_25->vme_next;
  FUNC_6(&VAR_28, VAR_25);
  if (VAR_24 == VAR_1) {
   if (VAR_15 & VAR_4) {

    VAR_25->max_protection = VAR_10;
    VAR_25->protection = VAR_10;
    VAR_25->vme_resilient_codesign = VAR_3;
   }
   VAR_25->vme_start += *VAR_12;
   VAR_25->vme_end += *VAR_12;
   FUNC_7(!VAR_25->map_aligned);
   FUNC_15(VAR_11, VAR_26, VAR_25,
      VAR_16);
   VAR_26 = VAR_25;
  } else {
   if (!VAR_25->is_sub_map) {
    FUNC_19(FUNC_2(VAR_25));
   } else {
    FUNC_10(FUNC_3(VAR_25));
   }
   FUNC_5(&VAR_28, VAR_25);
  }
 }

 if (VAR_15 & VAR_4) {
  *VAR_21 = VAR_10;
  *VAR_22 = VAR_10;
 }

 if( VAR_11->disable_vmentry_reuse == VAR_3) {
  FUNC_7(!VAR_11->is_nested_map);
  if( VAR_11->highest_entry_end < VAR_26->vme_end ){
   VAR_11->highest_entry_end = VAR_26->vme_end;
  }
 }

 if (VAR_24 == VAR_1) {
  VAR_11->size += VAR_13;
  FUNC_1(VAR_11, VAR_26);
 }
 FUNC_17(VAR_11);

 if (VAR_24 == VAR_1 && VAR_11->wiring_required)
  VAR_24 = FUNC_18(VAR_11, *VAR_12,
         *VAR_12 + VAR_13, *VAR_21, VAR_6,
         VAR_3);





 if ((VAR_15 & VAR_5) != 0) {
  *VAR_12 += VAR_29;
 }

 return VAR_24;
}

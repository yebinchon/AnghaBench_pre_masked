
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef TYPE_1__* vm_region_top_info_t ;
typedef int vm_region_info_t ;
typedef int vm_region_flavor_t ;
typedef TYPE_2__* vm_region_extended_info_t ;
typedef TYPE_3__* vm_region_basic_info_t ;
typedef TYPE_4__* vm_region_basic_info_64_t ;
typedef scalar_t__ vm_map_t ;
typedef scalar_t__ vm_map_size_t ;
typedef scalar_t__ vm_map_offset_t ;
typedef TYPE_5__* vm_map_entry_t ;
typedef int uint32_t ;
typedef int mach_port_t ;
typedef int mach_msg_type_number_t ;
typedef int kern_return_t ;
struct TYPE_18__ {scalar_t__ vme_end; scalar_t__ vme_start; struct TYPE_18__* vme_next; int protection; void* is_shared; int is_sub_map; int user_wired_count; int behavior; int max_protection; int inheritance; } ;
struct TYPE_17__ {void* shared; int reserved; int user_wired_count; int behavior; int max_protection; int inheritance; int protection; int offset; } ;
struct TYPE_16__ {void* shared; int reserved; int user_wired_count; int behavior; int max_protection; int inheritance; int protection; int offset; } ;
struct TYPE_15__ {int ref_count; int share_mode; int external_pager; int pages_reusable; int shadow_depth; int pages_dirtied; int pages_shared_now_private; int pages_swapped_out; int pages_resident; int user_tag; int protection; } ;
struct TYPE_14__ {int shared_pages_resident; int private_pages_resident; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_5__*) ;
 scalar_t__ VAR_8 ;


 int VAR_9 ;
 int VAR_10 ;

 int VAR_11 ;
 int VAR_12 ;


 int VAR_13 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__,TYPE_5__**) ;
 int FUNC_4 (TYPE_5__*,TYPE_1__*) ;
 int FUNC_5 (scalar_t__,scalar_t__,TYPE_5__*,int ,scalar_t__,TYPE_2__*,int ,int ) ;
 TYPE_5__* FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;

kern_return_t
FUNC_8(
 vm_map_t VAR_14,
 vm_map_offset_t *VAR_15,
 vm_map_size_t *VAR_16,
 vm_region_flavor_t VAR_17,
 vm_region_info_t VAR_18,
 mach_msg_type_number_t *VAR_19,
 mach_port_t *VAR_20)
{
 vm_map_entry_t VAR_21;
 vm_map_entry_t VAR_22;
 vm_map_offset_t VAR_23;

 if (VAR_14 == VAR_8)
  return(VAR_3);

 switch (VAR_17) {

 case 132:

 {
  vm_region_basic_info_t VAR_24;

  if (*VAR_19 < VAR_9)
   return(VAR_3);

  VAR_24 = (vm_region_basic_info_t) VAR_18;
  *VAR_19 = VAR_9;

  FUNC_2(VAR_14);

  VAR_23 = *VAR_15;
  if (!FUNC_3(VAR_14, VAR_23, &VAR_21)) {
   if ((VAR_22 = VAR_21->vme_next) == FUNC_6(VAR_14)) {
    FUNC_7(VAR_14);
    return(VAR_2);
   }
  } else {
   VAR_22 = VAR_21;
  }

  VAR_23 = VAR_22->vme_start;

  VAR_24->offset = (uint32_t)FUNC_1(VAR_22);
  VAR_24->protection = VAR_22->protection;
  VAR_24->inheritance = VAR_22->inheritance;
  VAR_24->max_protection = VAR_22->max_protection;
  VAR_24->behavior = VAR_22->behavior;
  VAR_24->user_wired_count = VAR_22->user_wired_count;
  VAR_24->reserved = VAR_22->is_sub_map;
  *VAR_15 = VAR_23;
  *VAR_16 = (VAR_22->vme_end - VAR_23);

  if (VAR_20) *VAR_20 = VAR_1;
  if (VAR_22->is_sub_map) {
   VAR_24->shared = VAR_0;
  } else {
   VAR_24->shared = VAR_22->is_shared;
  }

  FUNC_7(VAR_14);
  return(VAR_4);
 }

 case 131:
 {
  vm_region_basic_info_64_t VAR_25;

  if (*VAR_19 < VAR_10)
   return(VAR_3);

  VAR_25 = (vm_region_basic_info_64_t) VAR_18;
  *VAR_19 = VAR_10;

  FUNC_2(VAR_14);

  VAR_23 = *VAR_15;
  if (!FUNC_3(VAR_14, VAR_23, &VAR_21)) {
   if ((VAR_22 = VAR_21->vme_next) == FUNC_6(VAR_14)) {
    FUNC_7(VAR_14);
    return(VAR_2);
   }
  } else {
   VAR_22 = VAR_21;
  }

  VAR_23 = VAR_22->vme_start;

  VAR_25->offset = FUNC_1(VAR_22);
  VAR_25->protection = VAR_22->protection;
  VAR_25->inheritance = VAR_22->inheritance;
  VAR_25->max_protection = VAR_22->max_protection;
  VAR_25->behavior = VAR_22->behavior;
  VAR_25->user_wired_count = VAR_22->user_wired_count;
  VAR_25->reserved = VAR_22->is_sub_map;
  *VAR_15 = VAR_23;
  *VAR_16 = (VAR_22->vme_end - VAR_23);

  if (VAR_20) *VAR_20 = VAR_1;
  if (VAR_22->is_sub_map) {
   VAR_25->shared = VAR_0;
  } else {
   VAR_25->shared = VAR_22->is_shared;
  }

  FUNC_7(VAR_14);
  return(VAR_4);
 }
 case 130:
  if (*VAR_19 < VAR_11)
   return(VAR_3);

 case 129:
  if (*VAR_19 < VAR_12)
   return VAR_3;

 {
  vm_region_extended_info_t VAR_26;
  mach_msg_type_number_t VAR_27;

  VAR_26 = (vm_region_extended_info_t) VAR_18;

  FUNC_2(VAR_14);

  VAR_23 = *VAR_15;
  if (!FUNC_3(VAR_14, VAR_23, &VAR_21)) {
   if ((VAR_22 = VAR_21->vme_next) == FUNC_6(VAR_14)) {
    FUNC_7(VAR_14);
    return(VAR_2);
   }
  } else {
   VAR_22 = VAR_21;
  }
  VAR_23 = VAR_22->vme_start;

  VAR_26->protection = VAR_22->protection;
  VAR_26->user_tag = FUNC_0(VAR_22);
  VAR_26->pages_resident = 0;
  VAR_26->pages_swapped_out = 0;
  VAR_26->pages_shared_now_private = 0;
  VAR_26->pages_dirtied = 0;
  VAR_26->external_pager = 0;
  VAR_26->shadow_depth = 0;

  VAR_27 = *VAR_19;
  if (VAR_17 == 129) {
   *VAR_19 = VAR_12;
  } else {
   VAR_26->pages_reusable = 0;
   *VAR_19 = VAR_11;
  }

  FUNC_5(VAR_14, VAR_23, VAR_22, FUNC_1(VAR_22), VAR_22->vme_end - VAR_23, VAR_26, VAR_7, *VAR_19);

  if (VAR_26->external_pager && VAR_26->ref_count == 2 && VAR_26->share_mode == VAR_6)
   VAR_26->share_mode = VAR_5;

  if (VAR_20)
   *VAR_20 = VAR_1;
  *VAR_15 = VAR_23;
  *VAR_16 = (VAR_22->vme_end - VAR_23);

  FUNC_7(VAR_14);
  return(VAR_4);
 }
 case 128:
 {
  vm_region_top_info_t VAR_28;

  if (*VAR_19 < VAR_13)
   return(VAR_3);

  VAR_28 = (vm_region_top_info_t) VAR_18;
  *VAR_19 = VAR_13;

  FUNC_2(VAR_14);

  VAR_23 = *VAR_15;
  if (!FUNC_3(VAR_14, VAR_23, &VAR_21)) {
   if ((VAR_22 = VAR_21->vme_next) == FUNC_6(VAR_14)) {
    FUNC_7(VAR_14);
    return(VAR_2);
   }
  } else {
   VAR_22 = VAR_21;

  }
  VAR_23 = VAR_22->vme_start;

  VAR_28->private_pages_resident = 0;
  VAR_28->shared_pages_resident = 0;

  FUNC_4(VAR_22, VAR_28);

  if (VAR_20)
   *VAR_20 = VAR_1;
  *VAR_15 = VAR_23;
  *VAR_16 = (VAR_22->vme_end - VAR_23);

  FUNC_7(VAR_14);
  return(VAR_4);
 }
 default:
  return(VAR_3);
 }
}

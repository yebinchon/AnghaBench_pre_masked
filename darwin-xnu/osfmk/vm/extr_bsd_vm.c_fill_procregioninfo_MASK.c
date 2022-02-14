
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_13__ ;


struct TYPE_19__ {int obj_id; scalar_t__ shared_pages_resident; void* private_pages_resident; } ;
typedef TYPE_1__ vm_region_top_info_data_t ;
struct TYPE_20__ {int ref_count; scalar_t__ share_mode; scalar_t__ shadow_depth; void* pages_dirtied; void* pages_swapped_out; scalar_t__ pages_shared_now_private; void* pages_resident; scalar_t__ external_pager; void* user_tag; void* protection; } ;
typedef TYPE_2__ vm_region_extended_info_data_t ;
typedef scalar_t__ vm_map_t ;
typedef scalar_t__ vm_map_offset_t ;
typedef TYPE_3__* vm_map_entry_t ;
typedef void* uint64_t ;
typedef void* uint32_t ;
typedef TYPE_4__* task_t ;
struct proc_regioninfo_internal {int pri_user_tag; int pri_ref_count; scalar_t__ pri_share_mode; scalar_t__ pri_depth; void* pri_size; void* pri_address; int pri_obj_id; scalar_t__ pri_shared_pages_resident; void* pri_private_pages_resident; scalar_t__ pri_shadow_depth; void* pri_pages_dirtied; void* pri_pages_swapped_out; scalar_t__ pri_pages_shared_now_private; void* pri_pages_resident; int pri_flags; int pri_user_wired_count; int pri_behavior; int pri_inheritance; void* pri_max_protection; void* pri_protection; scalar_t__ pri_offset; } ;
typedef int ledger_amount_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_22__ {scalar_t__ map; int ledger; } ;
struct TYPE_21__ {scalar_t__ vme_end; scalar_t__ vme_start; scalar_t__ is_sub_map; void* protection; scalar_t__ is_shared; int user_wired_count; int behavior; int inheritance; void* max_protection; struct TYPE_21__* vme_next; } ;
struct TYPE_18__ {int purgeable_nonvolatile; int purgeable_nonvolatile_compressed; } ;


 int FUNC_0 (scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 void* FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_3 (TYPE_3__*,uintptr_t*,void**) ;
 int FUNC_4 (int ,int ,int*) ;
 TYPE_13__ VAR_11 ;
 int FUNC_5 (TYPE_4__*) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__,scalar_t__,TYPE_3__**) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_13 (scalar_t__,scalar_t__,TYPE_3__*,scalar_t__,scalar_t__,TYPE_2__*,int ,int ) ;
 TYPE_3__* FUNC_14 (scalar_t__) ;
 int FUNC_15 (scalar_t__) ;

int
FUNC_16(task_t VAR_12, uint64_t VAR_13, struct proc_regioninfo_internal *VAR_14, uintptr_t *VAR_15, uint32_t *VAR_16)
{

 vm_map_t VAR_17;
 vm_map_offset_t VAR_18 = (vm_map_offset_t )VAR_13;
 vm_map_entry_t VAR_19;
 vm_map_entry_t VAR_20;
 vm_map_offset_t VAR_21;
 vm_region_extended_info_data_t VAR_22;
 vm_region_top_info_data_t VAR_23;
 boolean_t VAR_24;

     FUNC_5(VAR_12);
     VAR_17 = VAR_12->map;
     if (VAR_17 == VAR_8)
     {
   FUNC_7(VAR_12);
   return(0);
     }
     FUNC_11(VAR_17);
     FUNC_7(VAR_12);

     VAR_24 = FUNC_6();

     FUNC_9(VAR_17);

     VAR_21 = VAR_18;

     if (!FUNC_10(VAR_17, VAR_21, &VAR_19)) {
  if ((VAR_20 = VAR_19->vme_next) == FUNC_14(VAR_17)) {
   if (VAR_24 &&
       VAR_18 == VAR_19->vme_end) {
    ledger_amount_t VAR_25, VAR_26;
    FUNC_4(
     VAR_12->ledger,
     VAR_11.purgeable_nonvolatile,
     &VAR_25);
    FUNC_4(
     VAR_12->ledger,
     VAR_11.purgeable_nonvolatile_compressed,
     &VAR_26);
    if (VAR_25 + VAR_26 == 0) {

     FUNC_15(VAR_17);
     FUNC_8(VAR_17);
     return 0;
    }

    VAR_14->pri_offset = VAR_18;
    VAR_14->pri_protection = VAR_9;
    VAR_14->pri_max_protection = VAR_9;
    VAR_14->pri_inheritance = VAR_7;
    VAR_14->pri_behavior = VAR_6;
    VAR_14->pri_user_wired_count = 0;
    VAR_14->pri_user_tag = -1;
    VAR_14->pri_pages_resident =
     (uint32_t) (VAR_25 / VAR_0);
    VAR_14->pri_pages_shared_now_private = 0;
    VAR_14->pri_pages_swapped_out =
     (uint32_t) (VAR_26 / VAR_0);
    VAR_14->pri_pages_dirtied =
     (uint32_t) (VAR_25 / VAR_0);
    VAR_14->pri_ref_count = 1;
    VAR_14->pri_shadow_depth = 0;
    VAR_14->pri_share_mode = VAR_3;
    VAR_14->pri_private_pages_resident =
     (uint32_t) (VAR_25 / VAR_0);
    VAR_14->pri_shared_pages_resident = 0;
    VAR_14->pri_obj_id = FUNC_0(VAR_17, VAR_11.purgeable_nonvolatile);
    VAR_14->pri_address = VAR_18;
    VAR_14->pri_size =
     (uint64_t) (VAR_25 + VAR_26);
    VAR_14->pri_depth = 0;

    FUNC_15(VAR_17);
    FUNC_8(VAR_17);
    return 1;
   }
   FUNC_15(VAR_17);
   FUNC_8(VAR_17);
   return 0;
  }
     } else {
  VAR_20 = VAR_19;
     }

     VAR_21 = VAR_20->vme_start;

     VAR_14->pri_offset = FUNC_2(VAR_20);
     VAR_14->pri_protection = VAR_20->protection;
     VAR_14->pri_max_protection = VAR_20->max_protection;
     VAR_14->pri_inheritance = VAR_20->inheritance;
     VAR_14->pri_behavior = VAR_20->behavior;
     VAR_14->pri_user_wired_count = VAR_20->user_wired_count;
     VAR_14->pri_user_tag = FUNC_1(VAR_20);

     if (VAR_20->is_sub_map) {
  VAR_14->pri_flags |= VAR_2;
     } else {
  if (VAR_20->is_shared)
   VAR_14->pri_flags |= VAR_1;
     }


     VAR_22.protection = VAR_20->protection;
     VAR_22.user_tag = FUNC_1(VAR_20);
     VAR_22.pages_resident = 0;
     VAR_22.pages_swapped_out = 0;
     VAR_22.pages_shared_now_private = 0;
     VAR_22.pages_dirtied = 0;
     VAR_22.external_pager = 0;
     VAR_22.shadow_depth = 0;

     FUNC_13(VAR_17, VAR_21, VAR_20, FUNC_2(VAR_20), VAR_20->vme_end - VAR_21, &VAR_22, VAR_5, VAR_10);

     if (VAR_22.external_pager && VAR_22.ref_count == 2 && VAR_22.share_mode == VAR_4)
             VAR_22.share_mode = VAR_3;

     VAR_23.private_pages_resident = 0;
     VAR_23.shared_pages_resident = 0;
     FUNC_12(VAR_20, &VAR_23);


     VAR_14->pri_pages_resident = VAR_22.pages_resident;
     VAR_14->pri_pages_shared_now_private = VAR_22.pages_shared_now_private;
     VAR_14->pri_pages_swapped_out = VAR_22.pages_swapped_out;
     VAR_14->pri_pages_dirtied = VAR_22.pages_dirtied;
     VAR_14->pri_ref_count = VAR_22.ref_count;
     VAR_14->pri_shadow_depth = VAR_22.shadow_depth;
     VAR_14->pri_share_mode = VAR_22.share_mode;

     VAR_14->pri_private_pages_resident = VAR_23.private_pages_resident;
     VAR_14->pri_shared_pages_resident = VAR_23.shared_pages_resident;
     VAR_14->pri_obj_id = VAR_23.obj_id;

     VAR_14->pri_address = (uint64_t)VAR_21;
     VAR_14->pri_size = (uint64_t)(VAR_20->vme_end - VAR_21);
     VAR_14->pri_depth = 0;

     if ((VAR_15 != 0) && (VAR_20->is_sub_map == 0)) {
  *VAR_15 = (uintptr_t)0;

  if (FUNC_3(VAR_20, VAR_15, VAR_16) ==0) {
   FUNC_15(VAR_17);
       FUNC_8(VAR_17);
   return(1);
  }
     }

     FUNC_15(VAR_17);
     FUNC_8(VAR_17);
     return(1);
}

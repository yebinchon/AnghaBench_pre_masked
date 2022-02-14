
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ vm_map_t ;
typedef int vm_map_offset_t ;
typedef TYPE_1__* vm_map_entry_t ;
typedef void* uint64_t ;
typedef scalar_t__ uint32_t ;
typedef TYPE_2__* task_t ;
struct proc_regioninfo_internal {scalar_t__ pri_depth; void* pri_size; void* pri_address; scalar_t__ pri_obj_id; scalar_t__ pri_shared_pages_resident; scalar_t__ pri_private_pages_resident; scalar_t__ pri_share_mode; scalar_t__ pri_shadow_depth; scalar_t__ pri_ref_count; scalar_t__ pri_pages_dirtied; scalar_t__ pri_pages_swapped_out; scalar_t__ pri_pages_shared_now_private; scalar_t__ pri_pages_resident; int pri_flags; int pri_user_tag; int pri_user_wired_count; int pri_behavior; int pri_inheritance; int pri_max_protection; int pri_protection; int pri_offset; } ;
struct TYPE_12__ {scalar_t__ map; } ;
struct TYPE_11__ {scalar_t__ is_sub_map; struct TYPE_11__* vme_next; scalar_t__ vme_start; scalar_t__ vme_end; scalar_t__ is_shared; int user_wired_count; int behavior; int inheritance; int max_protection; int protection; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (TYPE_1__*,uintptr_t*,scalar_t__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__,int ,TYPE_1__**) ;
 int FUNC_8 (scalar_t__) ;
 TYPE_1__* FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;

int
FUNC_11(task_t VAR_2, uint64_t VAR_3, struct proc_regioninfo_internal *VAR_4, uintptr_t *VAR_5, uint32_t *VAR_6)
{

 vm_map_t VAR_7;
 vm_map_offset_t VAR_8 = (vm_map_offset_t )VAR_3;
 vm_map_entry_t VAR_9;
 vm_map_entry_t VAR_10;

 FUNC_3(VAR_2);
 VAR_7 = VAR_2->map;
 if (VAR_7 == VAR_1)
 {
  FUNC_4(VAR_2);
  return(0);
 }
 FUNC_8(VAR_7);
 FUNC_4(VAR_2);

 FUNC_6(VAR_7);

 if (!FUNC_7(VAR_7, VAR_8, &VAR_9)) {
  if ((VAR_10 = VAR_9->vme_next) == FUNC_9(VAR_7)) {
   FUNC_10(VAR_7);
   FUNC_5(VAR_7);
      return(0);
  }
 } else {
  VAR_10 = VAR_9;
 }

 while (VAR_10 != FUNC_9(VAR_7)) {
  *VAR_5 = 0;
  *VAR_6 = 0;

  if (VAR_10->is_sub_map == 0) {
   if (FUNC_2(VAR_10, VAR_5, VAR_6)) {

    VAR_4->pri_offset = FUNC_1(VAR_10);
    VAR_4->pri_protection = VAR_10->protection;
    VAR_4->pri_max_protection = VAR_10->max_protection;
    VAR_4->pri_inheritance = VAR_10->inheritance;
    VAR_4->pri_behavior = VAR_10->behavior;
    VAR_4->pri_user_wired_count = VAR_10->user_wired_count;
    VAR_4->pri_user_tag = FUNC_0(VAR_10);

    if (VAR_10->is_shared)
     VAR_4->pri_flags |= VAR_0;

    VAR_4->pri_pages_resident = 0;
    VAR_4->pri_pages_shared_now_private = 0;
    VAR_4->pri_pages_swapped_out = 0;
    VAR_4->pri_pages_dirtied = 0;
    VAR_4->pri_ref_count = 0;
    VAR_4->pri_shadow_depth = 0;
    VAR_4->pri_share_mode = 0;

    VAR_4->pri_private_pages_resident = 0;
    VAR_4->pri_shared_pages_resident = 0;
    VAR_4->pri_obj_id = 0;

    VAR_4->pri_address = (uint64_t)VAR_10->vme_start;
    VAR_4->pri_size = (uint64_t)(VAR_10->vme_end - VAR_10->vme_start);
    VAR_4->pri_depth = 0;

    FUNC_10(VAR_7);
    FUNC_5(VAR_7);
    return(1);
   }
  }


  VAR_10 = VAR_10->vme_next;
 }

 FUNC_10(VAR_7);
 FUNC_5(VAR_7);
 return(0);
}

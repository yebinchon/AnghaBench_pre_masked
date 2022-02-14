
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef size_t vm_phantom_hash_entry_t ;
typedef TYPE_1__* vm_page_t ;
typedef TYPE_2__* vm_object_t ;
typedef TYPE_3__* vm_ghost_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_17__ {int vm_phantom_cache_added_ghost; } ;
struct TYPE_16__ {int g_pages_held; scalar_t__ g_obj_id; size_t g_obj_offset; size_t g_next_index; } ;
struct TYPE_15__ {scalar_t__ phantom_object_id; scalar_t__ phantom_isssd; int pager; } ;
struct TYPE_14__ {size_t vmp_offset; } ;
struct TYPE_13__ {int pcs_added_new_entry; int pcs_replaced_entry; int pcs_wrapped; int pcs_added_page_to_entry; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (int,int *) ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 TYPE_2__* FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (char*) ;
 int* VAR_8 ;
 TYPE_10__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_12 ;
 TYPE_8__ VAR_13 ;
 TYPE_3__* VAR_14 ;
 size_t* VAR_15 ;
 TYPE_3__* FUNC_5 (TYPE_1__*,int ) ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 size_t FUNC_6 (scalar_t__,size_t) ;
 scalar_t__ VAR_18 ;
 int FUNC_7 (int ,scalar_t__*) ;

void
FUNC_8(vm_page_t VAR_19)
{
 vm_ghost_t VAR_20;
 vm_object_t VAR_21;
 int VAR_22;
 int VAR_23;
 boolean_t VAR_24 = VAR_0;
 vm_phantom_hash_entry_t VAR_25;

 VAR_21 = FUNC_2(VAR_19);

 FUNC_0(&VAR_12, VAR_1);
 FUNC_4(VAR_21);

 if (VAR_17 == 0)
  return;

 VAR_23 = VAR_8[(VAR_19->vmp_offset >> VAR_2) & VAR_5];

 if (VAR_21->phantom_object_id == 0) {

  FUNC_7(VAR_21->pager, &VAR_24);

  if (VAR_24 == VAR_3)
   VAR_21->phantom_isssd = VAR_3;

  VAR_21->phantom_object_id = VAR_18++;

  if (VAR_18 == 0)
   VAR_18 = VAR_7;
 } else {
  if ( (VAR_20 = FUNC_5(VAR_19, 0)) ) {
   VAR_20->g_pages_held |= VAR_23;

   VAR_9.pcs_added_page_to_entry++;
   goto done;
  }
 }






 VAR_22 = VAR_16++;

 if (VAR_16 == VAR_17) {
  VAR_16 = 1;

  VAR_9.pcs_wrapped++;
 }
 VAR_20 = &VAR_14[VAR_22];

 if (VAR_20->g_obj_id) {




  vm_ghost_t VAR_26;

  VAR_25 = FUNC_6(VAR_20->g_obj_id, VAR_20->g_obj_offset);

  VAR_26 = &VAR_14[VAR_15[VAR_25]];

  if (VAR_26 == VAR_20) {
   VAR_15[VAR_25] = VAR_20->g_next_index;
  } else {
   for (;;) {
    if (VAR_26->g_next_index == 0)
     FUNC_3("didn't find ghost in hash\n");

    if (&VAR_14[VAR_26->g_next_index] == VAR_20) {
     VAR_26->g_next_index = VAR_20->g_next_index;
     break;
    }
    VAR_26 = &VAR_14[VAR_26->g_next_index];
   }
  }
  VAR_9.pcs_replaced_entry++;
 } else
  VAR_9.pcs_added_new_entry++;

 VAR_20->g_pages_held = VAR_23;
 VAR_20->g_obj_offset = (VAR_19->vmp_offset >> (VAR_2 + VAR_6)) & VAR_4;
 VAR_20->g_obj_id = VAR_21->phantom_object_id;

 VAR_25 = FUNC_6(VAR_20->g_obj_id, VAR_20->g_obj_offset);
 VAR_20->g_next_index = VAR_15[VAR_25];
 VAR_15[VAR_25] = VAR_22;

done:
 VAR_13.vm_phantom_cache_added_ghost++;

 if (VAR_21->phantom_isssd)
  FUNC_1(1, &VAR_11);
 else
  FUNC_1(1, &VAR_10);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef TYPE_2__* vm_object_t ;
typedef TYPE_3__* vm_ghost_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct TYPE_13__ {int pcs_lookup_entry_not_in_cache; int pcs_lookup_page_not_in_entry; int pcs_lookup_found_page_in_cache; } ;
struct TYPE_12__ {int g_obj_id; scalar_t__ g_obj_offset; int g_pages_held; int g_next_index; } ;
struct TYPE_11__ {int phantom_object_id; } ;
struct TYPE_10__ {scalar_t__ vmp_offset; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* FUNC_0 (TYPE_1__*) ;
 TYPE_7__ VAR_3 ;
 TYPE_3__* VAR_4 ;
 int* VAR_5 ;
 size_t FUNC_1 (int,scalar_t__) ;

vm_ghost_t
FUNC_2(vm_page_t VAR_6, uint32_t VAR_7)
{
 uint64_t VAR_8;
 uint32_t VAR_9;
 uint32_t VAR_10;
 vm_object_t VAR_11;

 VAR_11 = FUNC_0(VAR_6);

 if ((VAR_9 = VAR_11->phantom_object_id) == 0) {



  return (((void*)0));
 }
 VAR_8 = (VAR_6->vmp_offset >> (VAR_0 + VAR_2)) & VAR_1;

 VAR_10 = VAR_5[FUNC_1(VAR_9, VAR_8)];

 while (VAR_10) {
  vm_ghost_t VAR_12;

  VAR_12 = &VAR_4[VAR_10];

  if (VAR_12->g_obj_id == VAR_9 && VAR_12->g_obj_offset == VAR_8) {

   if (VAR_7 == 0 || (VAR_12->g_pages_held & VAR_7)) {
    VAR_3.pcs_lookup_found_page_in_cache++;

    return (VAR_12);
   }
   VAR_3.pcs_lookup_page_not_in_entry++;

   return (((void*)0));
  }
  VAR_10 = VAR_12->g_next_index;
 }
 VAR_3.pcs_lookup_entry_not_in_cache++;

 return (((void*)0));
}

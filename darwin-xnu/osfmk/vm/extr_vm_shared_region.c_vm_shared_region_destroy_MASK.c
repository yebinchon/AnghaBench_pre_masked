
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int vm_size_t ;
typedef TYPE_2__* vm_shared_region_t ;
typedef int vm_offset_t ;
typedef TYPE_3__* vm_named_entry_t ;
typedef TYPE_4__* vm_map_t ;
struct TYPE_16__ {scalar_t__ ip_kobject; } ;
struct TYPE_15__ {int slide_object; scalar_t__ slide_info_size; scalar_t__ slide_info_entry; } ;
struct TYPE_14__ {scalar_t__ pmap; } ;
struct TYPE_11__ {TYPE_4__* map; } ;
struct TYPE_13__ {int is_sub_map; TYPE_1__ backing; int is_copy; int internal; } ;
struct TYPE_12__ {scalar_t__ sr_ref_count; TYPE_6__ sr_slide_info; scalar_t__ sr_timer_call; TYPE_7__* sr_mem_entry; scalar_t__ sr_size; scalar_t__ sr_base_address; int sr_slid; int sr_persists; int sr_64bit; int sr_cpu_subtype; int sr_cpu_type; struct TYPE_12__* sr_root_dir; } ;


 TYPE_7__* VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (TYPE_7__*) ;
 int FUNC_7 (scalar_t__,scalar_t__,scalar_t__) ;
 TYPE_6__* VAR_2 ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void
FUNC_10(
 vm_shared_region_t VAR_3)
{
 vm_named_entry_t VAR_4;
 vm_map_t VAR_5;

 FUNC_1(
  ("shared_region: -> destroy(%p) (root=%p,cpu=<%d,%d>,64bit=%d)\n",
   (void )FUNC_2(VAR_3),
   (void )FUNC_2(VAR_3->sr_root_dir),
   VAR_3->sr_cpu_type,
   VAR_3->sr_cpu_subtype,
   VAR_3->sr_64bit));

 FUNC_3(VAR_3->sr_ref_count == 0);
 FUNC_3(!VAR_3->sr_persists);
 FUNC_3(!VAR_3->sr_slid);

 VAR_4 = (vm_named_entry_t) VAR_3->sr_mem_entry->ip_kobject;
 FUNC_3(VAR_4->is_sub_map);
 FUNC_3(!VAR_4->internal);
 FUNC_3(!VAR_4->is_copy);
 VAR_5 = VAR_4->backing.map;
 if (VAR_5->pmap) {
  FUNC_7(VAR_5->pmap,
       VAR_3->sr_base_address,
       (VAR_3->sr_base_address +
        VAR_3->sr_size));
 }
 FUNC_6(VAR_3->sr_mem_entry);
 VAR_4 = ((void*)0);
 VAR_3->sr_mem_entry = VAR_0;

 if (VAR_3->sr_timer_call) {
  FUNC_8(VAR_3->sr_timer_call);
 }
 FUNC_4(VAR_3, sizeof (*VAR_3));

 FUNC_0(
  ("shared_region: destroy(%p) <-\n",
   (void *)FUNC_2(VAR_3)));
 VAR_3 = ((void*)0);

}

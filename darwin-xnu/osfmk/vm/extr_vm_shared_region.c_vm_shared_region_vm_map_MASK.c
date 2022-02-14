
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_2__* vm_shared_region_t ;
typedef TYPE_3__* vm_named_entry_t ;
typedef TYPE_2__* vm_map_t ;
typedef TYPE_5__* ipc_port_t ;
struct TYPE_12__ {scalar_t__ ip_kobject; } ;
struct TYPE_9__ {TYPE_2__* map; } ;
struct TYPE_11__ {int is_sub_map; TYPE_1__ backing; } ;
struct TYPE_10__ {int sr_ref_count; TYPE_5__* sr_mem_entry; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int) ;

vm_map_t
FUNC_3(
 vm_shared_region_t VAR_0)
{
 ipc_port_t VAR_1;
 vm_named_entry_t VAR_2;
 vm_map_t VAR_3;

 FUNC_0(
  ("shared_region: -> vm_map(%p)\n",
   (void *)FUNC_1(VAR_0)));
 FUNC_2(VAR_0->sr_ref_count > 1);

 VAR_1 = VAR_0->sr_mem_entry;
 VAR_2 = (vm_named_entry_t) VAR_1->ip_kobject;
 VAR_3 = VAR_2->backing.map;
 FUNC_2(VAR_2->is_sub_map);

 FUNC_0(
  ("shared_region: vm_map(%p) <- %p\n",
   (void )FUNC_1(VAR_0),
   (void *)FUNC_1(VAR_3)));
 return VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef TYPE_3__* vm_shared_region_t ;
typedef TYPE_4__* vm_named_entry_t ;
typedef TYPE_5__* vm_map_t ;
typedef TYPE_6__* task_t ;
typedef TYPE_7__* ipc_port_t ;
struct TYPE_18__ {scalar_t__ ip_kobject; } ;
struct TYPE_17__ {TYPE_2__* map; } ;
struct TYPE_16__ {int pmap; } ;
struct TYPE_12__ {TYPE_5__* map; } ;
struct TYPE_15__ {TYPE_1__ backing; } ;
struct TYPE_14__ {TYPE_7__* sr_mem_entry; } ;
struct TYPE_13__ {int pmap; } ;


 int FUNC_0 (int ,int ,int ,int ,int ) ;
 TYPE_3__* FUNC_1 (TYPE_6__*) ;

vm_shared_region_t
FUNC_2(task_t VAR_0)
{
 vm_shared_region_t VAR_1;
 ipc_port_t VAR_2;
 vm_named_entry_t VAR_3;
 vm_map_t VAR_4;


 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1 == ((void*)0)) {
  return ((void*)0);
 }

 VAR_2 = VAR_1->sr_mem_entry;
 VAR_3 = (vm_named_entry_t) VAR_2->ip_kobject;
 VAR_4 = VAR_3->backing.map;


 FUNC_0(VAR_0->map->pmap, VAR_4->pmap, 0, 0, 0);

 return VAR_1;
}

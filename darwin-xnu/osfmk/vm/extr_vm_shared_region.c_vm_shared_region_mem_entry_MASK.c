
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* vm_shared_region_t ;
typedef TYPE_1__* ipc_port_t ;
struct TYPE_6__ {int sr_ref_count; struct TYPE_6__* sr_mem_entry; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int) ;

ipc_port_t
FUNC_3(
 vm_shared_region_t VAR_0)
{
 FUNC_0(
  ("shared_region: -> mem_entry(%p)\n",
   (void *)FUNC_1(VAR_0)));
 FUNC_2(VAR_0->sr_ref_count > 1);
 FUNC_0(
  ("shared_region: mem_entry(%p) <- %p\n",
   (void )FUNC_1(VAR_0),
   (void *)FUNC_1(VAR_0->sr_mem_entry)));
 return VAR_0->sr_mem_entry;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* vnode_pager_t ;
typedef int vm_object_offset_t ;
typedef TYPE_2__* memory_object_t ;
struct TYPE_7__ {int * mo_pager_ops; } ;
struct TYPE_6__ {int vnode_handle; } ;


 TYPE_1__* FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;

void
FUNC_2(
 memory_object_t VAR_1,
 vm_object_offset_t VAR_2,
 vm_object_offset_t VAR_3)
{
 vnode_pager_t VAR_4;

 if (VAR_1 && VAR_1->mo_pager_ops == &VAR_0) {

  VAR_4 = FUNC_0(VAR_1);
  FUNC_1(VAR_4->vnode_handle, VAR_2, VAR_3);
 }
}

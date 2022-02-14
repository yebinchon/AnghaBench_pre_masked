
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* vnode_pager_t ;
typedef int memory_object_t ;
typedef int kern_return_t ;
struct TYPE_3__ {int vnode_handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int ) ;

kern_return_t
FUNC_3(
 memory_object_t VAR_2)
{
 vnode_pager_t VAR_3;

 FUNC_0(VAR_1, ("vnode_pager_last_unmap: %p\n", VAR_2));

 VAR_3 = FUNC_2(VAR_2);

 FUNC_1(VAR_3->vnode_handle);
 return VAR_0;
}

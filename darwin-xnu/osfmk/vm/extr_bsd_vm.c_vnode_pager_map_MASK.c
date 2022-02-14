
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* vnode_pager_t ;
typedef int vm_prot_t ;
typedef int memory_object_t ;
typedef int kern_return_t ;
struct TYPE_3__ {int vnode_handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ) ;
 TYPE_1__* FUNC_2 (int ) ;

kern_return_t
FUNC_3(
 memory_object_t VAR_3,
 vm_prot_t VAR_4)
{
 vnode_pager_t VAR_5;
 int VAR_6;
 kern_return_t VAR_7;

 FUNC_0(VAR_2, ("vnode_pager_map: %p %x\n", VAR_3, VAR_4));

 VAR_5 = FUNC_2(VAR_3);

 VAR_6 = FUNC_1(VAR_5->vnode_handle, VAR_4);

 if (VAR_6 != 0) {
  VAR_7 = VAR_0;
 } else {
  VAR_7 = VAR_1;
 }

 return VAR_7;
}

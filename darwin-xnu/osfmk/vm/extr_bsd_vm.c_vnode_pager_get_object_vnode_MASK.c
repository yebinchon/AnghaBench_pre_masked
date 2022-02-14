
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* vnode_pager_t ;
typedef scalar_t__ uint32_t ;
typedef int memory_object_t ;
typedef int kern_return_t ;
struct TYPE_3__ {scalar_t__ vnode_handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (void*) ;

kern_return_t
FUNC_2 (
 memory_object_t VAR_2,
 uintptr_t * VAR_3,
 uint32_t * VAR_4)
{
 vnode_pager_t VAR_5;

 VAR_5 = FUNC_0(VAR_2);
 if (VAR_5->vnode_handle) {
  *VAR_3 = (uintptr_t)VAR_5->vnode_handle;
  *VAR_4 = (uint32_t)FUNC_1((void *)VAR_5->vnode_handle);

  return(VAR_1);
 }

 return(VAR_0);
}

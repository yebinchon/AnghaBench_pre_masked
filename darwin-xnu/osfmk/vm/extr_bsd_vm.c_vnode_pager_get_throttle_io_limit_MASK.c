
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* vnode_pager_t ;
typedef int uint32_t ;
typedef TYPE_2__* memory_object_t ;
typedef int kern_return_t ;
struct TYPE_7__ {int * mo_pager_ops; } ;
struct TYPE_6__ {int vnode_handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_1 (int ,int *) ;

kern_return_t
FUNC_2(
 memory_object_t VAR_3,
 uint32_t *VAR_4)
{
 vnode_pager_t VAR_5;

 if (VAR_3->mo_pager_ops != &VAR_2)
  return VAR_0;

 VAR_5 = FUNC_0(VAR_3);

 (void)FUNC_1(VAR_5->vnode_handle, VAR_4);
 return VAR_1;
}

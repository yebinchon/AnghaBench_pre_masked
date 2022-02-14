
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* vnode_pager_t ;
typedef TYPE_2__* memory_object_t ;
typedef int memory_object_offset_t ;
typedef int kern_return_t ;
struct TYPE_7__ {int * mo_pager_ops; } ;
struct TYPE_6__ {int vnode_handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (TYPE_2__*) ;
 int VAR_2 ;

kern_return_t
FUNC_2(
 memory_object_t VAR_3,
 memory_object_offset_t *VAR_4)
{
 vnode_pager_t VAR_5;

 if (VAR_3->mo_pager_ops != &VAR_2) {
  *VAR_4 = 0;
  return VAR_0;
 }

 VAR_5 = FUNC_1(VAR_3);

 *VAR_4 = FUNC_0(VAR_5->vnode_handle);
 return VAR_1;
}

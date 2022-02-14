
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef TYPE_2__* memory_object_t ;
typedef int memory_object_size_t ;
typedef int memory_object_offset_t ;
typedef int kern_return_t ;
struct TYPE_6__ {TYPE_1__* mo_pager_ops; } ;
struct TYPE_5__ {int (* memory_object_data_unlock ) (TYPE_2__*,int ,int ,int ) ;} ;


 int FUNC_0 (TYPE_2__*,int ,int ,int ) ;

kern_return_t FUNC_1
(
 memory_object_t VAR_0,
 memory_object_offset_t VAR_1,
 memory_object_size_t VAR_2,
 vm_prot_t VAR_3
)
{
 return (VAR_0->mo_pager_ops->memory_object_data_unlock)(
  VAR_0,
  VAR_1,
  VAR_2,
  VAR_3);
}

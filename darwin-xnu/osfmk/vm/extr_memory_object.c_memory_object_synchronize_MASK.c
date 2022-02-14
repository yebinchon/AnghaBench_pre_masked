
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vm_sync_t ;
typedef TYPE_2__* memory_object_t ;
typedef int memory_object_size_t ;
typedef int memory_object_offset_t ;
typedef int kern_return_t ;
struct TYPE_6__ {TYPE_1__* mo_pager_ops; } ;
struct TYPE_5__ {int (* memory_object_synchronize ) (TYPE_2__*,int ,int ,int ) ;} ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_2__*,int ,int ,int ) ;

kern_return_t FUNC_2
(
 memory_object_t VAR_0,
 memory_object_offset_t VAR_1,
 memory_object_size_t VAR_2,
 vm_sync_t VAR_3
)
{
        FUNC_0("memory_object_syncrhonize no longer supported\n");

 return (VAR_0->mo_pager_ops->memory_object_synchronize)(
  VAR_0,
  VAR_1,
  VAR_2,
  VAR_3);
}

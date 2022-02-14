
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vm_size_t ;
typedef TYPE_1__* vm_object_t ;
typedef int vm_object_offset_t ;
typedef scalar_t__ vm_object_fault_info_t ;
typedef int uint32_t ;
typedef scalar_t__ memory_object_offset_t ;
typedef scalar_t__ memory_object_fault_info_t ;
typedef int memory_object_control_t ;
typedef int kern_return_t ;
struct TYPE_5__ {scalar_t__ paging_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int *,int *,scalar_t__,int *) ;

kern_return_t
FUNC_2(
 memory_object_control_t VAR_3,
 memory_object_offset_t *VAR_4,
 vm_size_t *VAR_5,
 uint32_t *VAR_6,
 memory_object_fault_info_t VAR_7)
{
 vm_object_t VAR_8;
 vm_object_fault_info_t VAR_9;

 VAR_8 = FUNC_0(VAR_3);

 if (VAR_8 == VAR_2 || VAR_8->paging_offset > *VAR_4)
  return VAR_0;

 *VAR_4 -= VAR_8->paging_offset;

 VAR_9 = (vm_object_fault_info_t)(uintptr_t) VAR_7;
 FUNC_1(VAR_8,
          (vm_object_offset_t *)VAR_4,
          VAR_5,
          VAR_9,
          VAR_6);

 *VAR_4 += VAR_8->paging_offset;

 return VAR_1;
}

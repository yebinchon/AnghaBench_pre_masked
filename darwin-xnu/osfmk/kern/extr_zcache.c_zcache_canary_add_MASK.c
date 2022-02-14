
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* zone_t ;
typedef uintptr_t vm_offset_t ;
struct TYPE_3__ {uintptr_t elem_size; } ;


 uintptr_t VAR_0 ;

void FUNC_0(zone_t VAR_1, void *VAR_2)
{
 vm_offset_t *VAR_3 = (vm_offset_t *)VAR_2;
 vm_offset_t *VAR_4 = (vm_offset_t *)((vm_offset_t)VAR_3 + VAR_1->elem_size - sizeof(vm_offset_t));
 *VAR_3 = *VAR_4 = (VAR_0 ^ (uintptr_t)VAR_2);
}

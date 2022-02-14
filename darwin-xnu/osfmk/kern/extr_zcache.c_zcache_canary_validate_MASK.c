
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* zone_t ;
typedef uintptr_t vm_offset_t ;
struct TYPE_3__ {uintptr_t elem_size; } ;


 int FUNC_0 (char*,void*,void*,void*,void*) ;
 uintptr_t VAR_0 ;

void FUNC_1(zone_t VAR_1, void *VAR_2)
{
 vm_offset_t *VAR_3 = (vm_offset_t *)VAR_2;
 vm_offset_t *VAR_4 = (vm_offset_t *)((vm_offset_t)VAR_3 + VAR_1->elem_size - sizeof(vm_offset_t));

 vm_offset_t VAR_5 = (*VAR_3 ^ (uintptr_t)VAR_2);
 if (VAR_5 != VAR_0) {
  FUNC_0("Zone cache element was used after free! Element %p was corrupted at beginning; Expected %p but found %p; canary %p",
   VAR_2, (void *)(VAR_0 ^ (uintptr_t)VAR_2) , (void *)(*VAR_3), (void *)VAR_0);
 }

 vm_offset_t VAR_6 = (*VAR_4 ^ (uintptr_t)VAR_2);
 if (VAR_6 != VAR_0) {
  FUNC_0("Zone cache element was used after free! Element %p was corrupted at end; Expected %p but found %p; canary %p",
   VAR_2, (void *)(VAR_0 ^ (uintptr_t)VAR_2), (void *)(*VAR_4), (void *)VAR_0);
 }
}

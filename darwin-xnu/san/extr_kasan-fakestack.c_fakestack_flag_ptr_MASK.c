
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef scalar_t__ vm_offset_t ;
typedef int uint8_t ;



__attribute__((used)) static uint8_t **
FUNC_0(vm_offset_t VAR_0, vm_size_t VAR_1)
{
 uint8_t **VAR_2 = (uint8_t **)VAR_0;
 size_t VAR_3 = VAR_1 / 8;
 return &VAR_2[VAR_3 - 1];
}

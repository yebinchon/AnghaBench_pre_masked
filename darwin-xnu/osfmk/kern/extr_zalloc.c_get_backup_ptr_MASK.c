
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_size_t ;
typedef scalar_t__ vm_offset_t ;



__attribute__((used)) static inline vm_offset_t *
FUNC_0(vm_size_t VAR_0,
               vm_offset_t *VAR_1)
{
 return (vm_offset_t *) ((vm_offset_t)VAR_1 + VAR_0 - sizeof(vm_offset_t));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef scalar_t__ vm_address_t ;
typedef scalar_t__ vaddr ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,void*) ;

vm_offset_t
FUNC_1(
    vm_offset_t VAR_3)
{
 if (((vm_address_t)(VAR_3) - VAR_2) >= VAR_1)
  FUNC_0("ml_static_ptovirt(): illegal vaddr: %p\n", (void*)VAR_3);
 return ((vm_address_t)(VAR_3) - VAR_2 + VAR_0);
}

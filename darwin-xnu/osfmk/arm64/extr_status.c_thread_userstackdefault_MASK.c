
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mach_vm_offset_t ;
typedef int kern_return_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

kern_return_t
FUNC_0(
 mach_vm_offset_t *VAR_3,
 boolean_t VAR_4)
{
 if (VAR_4) {
  *VAR_3 = VAR_2;
 } else {
  *VAR_3 = VAR_1;
 }

 return (VAR_0);
}

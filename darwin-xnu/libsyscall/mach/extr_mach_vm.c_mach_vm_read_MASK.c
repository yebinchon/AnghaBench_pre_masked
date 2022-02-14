
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int mach_vm_size_t ;
typedef int mach_vm_address_t ;
typedef int mach_port_name_t ;
typedef scalar_t__ mach_msg_type_number_t ;
typedef int kern_return_t ;


 int FUNC_0 (int,uintptr_t,uintptr_t,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int *,scalar_t__*) ;
 scalar_t__ FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;

kern_return_t
FUNC_3(
 mach_port_name_t VAR_2,
 mach_vm_address_t VAR_3,
 mach_vm_size_t VAR_4,
 vm_offset_t *VAR_5,
 mach_msg_type_number_t *VAR_6)
{
 kern_return_t VAR_7;

 VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);

 if (&FUNC_0) {
  int VAR_8 = VAR_1 | VAR_0;


  FUNC_0(VAR_8, (uintptr_t)FUNC_2(), (uintptr_t)*VAR_6, 0, *VAR_5, 0);
 }

 return (VAR_7);
}

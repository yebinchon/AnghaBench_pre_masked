
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_prot_t ;
typedef int mach_vm_size_t ;
typedef int mach_vm_address_t ;
typedef int mach_port_name_t ;
typedef scalar_t__ kern_return_t ;
typedef int boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,int ) ;

kern_return_t
FUNC_2(
 mach_port_name_t VAR_1,
 mach_vm_address_t VAR_2,
 mach_vm_size_t VAR_3,
 boolean_t VAR_4,
 vm_prot_t VAR_5)
{
 kern_return_t VAR_6;

 VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4,
  VAR_5);

 if (VAR_6 == VAR_0)
  VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3,
   VAR_4, VAR_5);

 return (VAR_6);
}

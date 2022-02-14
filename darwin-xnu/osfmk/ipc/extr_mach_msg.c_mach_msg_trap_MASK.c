
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mach_msg_overwrite_trap_args {scalar_t__ rcv_msg; } ;
typedef scalar_t__ mach_vm_address_t ;
typedef int mach_msg_return_t ;
typedef int kern_return_t ;


 int FUNC_0 (struct mach_msg_overwrite_trap_args*) ;

mach_msg_return_t
FUNC_1(
 struct mach_msg_overwrite_trap_args *VAR_0)
{
 kern_return_t VAR_1;
 VAR_0->rcv_msg = (mach_vm_address_t)0;

  VAR_1 = FUNC_0(VAR_0);
 return VAR_1;
}

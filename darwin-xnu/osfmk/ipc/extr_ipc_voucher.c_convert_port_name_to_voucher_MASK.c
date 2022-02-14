
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mach_port_name_t ;
typedef int kern_return_t ;
typedef int ipc_voucher_t ;
typedef int ipc_port_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int *) ;

ipc_voucher_t
FUNC_5(
 mach_port_name_t VAR_2)
{
 ipc_voucher_t VAR_3;
 kern_return_t VAR_4;
 ipc_port_t VAR_5;

 if (FUNC_0(VAR_2)) {
  VAR_4 = FUNC_4(FUNC_2(), VAR_2, &VAR_5);
  if (VAR_1 != VAR_4)
   return VAR_0;

  VAR_3 = FUNC_1(VAR_5);
  FUNC_3(VAR_5);
  return VAR_3;
 }
 return VAR_0;
}

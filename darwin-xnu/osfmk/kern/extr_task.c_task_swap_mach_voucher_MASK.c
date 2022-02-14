
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ task_t ;
typedef int kern_return_t ;
typedef int ipc_voucher_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

kern_return_t
FUNC_0(
 task_t VAR_3,
 ipc_voucher_t VAR_4,
 ipc_voucher_t *VAR_5)
{
 if (VAR_2 == VAR_3)
  return VAR_0;

 *VAR_5 = VAR_4;
 return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int ipc_voucher_attr_control_t ;
typedef TYPE_1__* ipc_port_t ;
struct TYPE_6__ {int ip_kobject; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;

ipc_voucher_attr_control_t
FUNC_5(
 ipc_port_t VAR_2)
{
 if (FUNC_0(VAR_2)) {
  ipc_voucher_attr_control_t VAR_3 = (ipc_voucher_attr_control_t) VAR_2->ip_kobject;







  if (FUNC_3(VAR_2) != VAR_0)
   return VAR_1;

  FUNC_1(FUNC_2(VAR_2));

  FUNC_4(VAR_3);
  return (VAR_3);
 }
 return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int mach_voucher_attr_value_handle_array_t ;
typedef scalar_t__ mach_voucher_attr_value_handle_array_size_t ;
typedef int kern_return_t ;
typedef int iv_index_t ;
typedef TYPE_1__* ipc_voucher_t ;
typedef TYPE_2__* ipc_voucher_attr_control_t ;
struct TYPE_9__ {int ivac_key_index; } ;
struct TYPE_8__ {int iv_refs; } ;


 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int ,int ,int ,scalar_t__*) ;
 scalar_t__ FUNC_3 (int *) ;

kern_return_t
FUNC_4(
 ipc_voucher_attr_control_t VAR_5,
 ipc_voucher_t VAR_6,
 mach_voucher_attr_value_handle_array_t VAR_7,
 mach_voucher_attr_value_handle_array_size_t *VAR_8)
{
 iv_index_t VAR_9, VAR_10;

 if (VAR_0 == VAR_5)
  return VAR_3;

 if (VAR_1 == VAR_6)
  return VAR_2;

 if (0 == *VAR_8)
  return VAR_4;

 VAR_9 = VAR_5->ivac_key_index;

 FUNC_0(FUNC_3(&VAR_6->iv_refs) > 0);
 VAR_10 = FUNC_1(VAR_6, VAR_9);
 FUNC_2(VAR_9, VAR_10,
       VAR_7, VAR_8);
 return VAR_4;
}

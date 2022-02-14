
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int mach_voucher_attr_value_handle_t ;
typedef int mach_voucher_attr_value_handle_array_size_t ;
typedef int mach_voucher_attr_key_t ;
typedef int mach_voucher_attr_content_t ;
typedef int mach_voucher_attr_content_size_t ;
typedef int mach_voucher_attr_command_t ;
typedef int kern_return_t ;
typedef int iv_index_t ;
typedef scalar_t__ ipc_voucher_t ;
typedef TYPE_1__* ipc_voucher_attr_manager_t ;
typedef int ipc_voucher_attr_control_t ;
struct TYPE_5__ {int (* ivam_command ) (TYPE_1__*,int ,int *,int ,int ,int ,int ,int ,int *) ;} ;


 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int *,int *) ;
 int FUNC_4 (int ,int ,TYPE_1__**,int *) ;
 int FUNC_5 (TYPE_1__*,int ,int *,int ,int ,int ,int ,int ,int *) ;

kern_return_t
FUNC_6(
 ipc_voucher_t VAR_5,
 mach_voucher_attr_key_t VAR_6,
 mach_voucher_attr_command_t VAR_7,
 mach_voucher_attr_content_t VAR_8,
 mach_voucher_attr_content_size_t VAR_9,
 mach_voucher_attr_content_t VAR_10,
 mach_voucher_attr_content_size_t *VAR_11)
{
 mach_voucher_attr_value_handle_t VAR_12[VAR_3];
 mach_voucher_attr_value_handle_array_size_t VAR_13;
 ipc_voucher_attr_manager_t VAR_14;
 ipc_voucher_attr_control_t VAR_15;
 iv_index_t VAR_16;
 iv_index_t VAR_17;
 kern_return_t VAR_18;


 if (VAR_1 == VAR_5)
  return VAR_2;

 VAR_17 = FUNC_0(VAR_6);
 FUNC_4(VAR_17, VAR_4, &VAR_14, &VAR_15);
 if (VAR_0 == VAR_14) {
  return VAR_2;
 }







 VAR_16 = FUNC_1(VAR_5, VAR_17);
 FUNC_3(VAR_17, VAR_16,
       VAR_12, &VAR_13);


 VAR_18 = (VAR_14->ivam_command)(VAR_14, VAR_6,
         VAR_12, VAR_13,
         VAR_7,
         VAR_8, VAR_9,
         VAR_10, VAR_11);


 FUNC_2(VAR_15);

 return VAR_18;
}

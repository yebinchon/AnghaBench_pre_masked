
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int mach_voucher_attr_value_handle_t ;
typedef scalar_t__ mach_voucher_attr_value_handle_array_size_t ;
typedef int mach_voucher_attr_recipe_command_t ;
typedef int mach_voucher_attr_key_t ;
typedef int mach_voucher_attr_content_t ;
typedef scalar_t__ mach_voucher_attr_content_size_t ;
typedef int kern_return_t ;
typedef scalar_t__ iv_index_t ;
typedef scalar_t__ ipc_voucher_t ;
typedef TYPE_1__* ipc_voucher_attr_manager_t ;
struct TYPE_5__ {int (* ivam_extract_content ) (TYPE_1__*,int ,int *,scalar_t__,int *,int ,scalar_t__*) ;} ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__,int *,scalar_t__*) ;
 int FUNC_4 (scalar_t__,int ,TYPE_1__**,int *) ;
 int FUNC_5 (TYPE_1__*,int ,int *,scalar_t__,int *,int ,scalar_t__*) ;

kern_return_t
FUNC_6(
 ipc_voucher_t VAR_7,
 mach_voucher_attr_key_t VAR_8,
 mach_voucher_attr_content_t VAR_9,
 mach_voucher_attr_content_size_t *VAR_10)
{
 mach_voucher_attr_value_handle_t VAR_11[VAR_6];
 mach_voucher_attr_value_handle_array_size_t VAR_12;
 mach_voucher_attr_recipe_command_t VAR_13;
 ipc_voucher_attr_manager_t VAR_14;
 iv_index_t VAR_15;
 iv_index_t VAR_16;
 kern_return_t VAR_17;


 if (VAR_2 == VAR_7)
  return VAR_4;

 VAR_16 = FUNC_1(VAR_8);

 VAR_15 = FUNC_2(VAR_7, VAR_16);
 if (VAR_3 == VAR_15) {
  *VAR_10 = 0;
  return VAR_5;
 }







 FUNC_4(VAR_16, VAR_0, &VAR_14, ((void*)0));
 if (VAR_1 == VAR_14) {
  return VAR_4;
 }





 FUNC_3(VAR_16, VAR_15,
       VAR_11, &VAR_12);
 FUNC_0(0 < VAR_12);



 VAR_17 = (VAR_14->ivam_extract_content)(VAR_14, VAR_8,
          VAR_11, VAR_12,
          &VAR_13,
          VAR_9, VAR_10);
 return VAR_17;
}

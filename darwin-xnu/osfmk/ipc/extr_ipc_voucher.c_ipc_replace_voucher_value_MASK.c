
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int mach_voucher_attr_value_handle_t ;
typedef int mach_voucher_attr_value_handle_array_size_t ;
typedef int mach_voucher_attr_value_flags_t ;
typedef int mach_voucher_attr_recipe_command_t ;
typedef int mach_voucher_attr_key_t ;
typedef int mach_voucher_attr_content_t ;
typedef int mach_voucher_attr_content_size_t ;
typedef scalar_t__ kern_return_t ;
typedef int iv_index_t ;
typedef scalar_t__ ipc_voucher_t ;
typedef TYPE_1__* ipc_voucher_attr_manager_t ;
typedef int ipc_voucher_attr_control_t ;
struct TYPE_5__ {scalar_t__ (* ivam_get_value ) (TYPE_1__*,int ,int ,int *,int ,int ,int ,int *,int *,scalar_t__*) ;} ;


 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int *,int *) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,TYPE_1__**,int *) ;
 scalar_t__ FUNC_9 (TYPE_1__*,int ,int ,int *,int ,int ,int ,int *,int *,scalar_t__*) ;

__attribute__((used)) static kern_return_t
FUNC_10(
 ipc_voucher_t VAR_6,
 mach_voucher_attr_key_t VAR_7,
 mach_voucher_attr_recipe_command_t VAR_8,
 ipc_voucher_t VAR_9,
 mach_voucher_attr_content_t VAR_10,
 mach_voucher_attr_content_size_t VAR_11)
{
 mach_voucher_attr_value_handle_t VAR_12[VAR_4];
 mach_voucher_attr_value_handle_array_size_t VAR_13;
 mach_voucher_attr_value_handle_t VAR_14;
 mach_voucher_attr_value_flags_t VAR_15;
 ipc_voucher_t VAR_16;
 ipc_voucher_attr_manager_t VAR_17;
 ipc_voucher_attr_control_t VAR_18;
 iv_index_t VAR_19;
 iv_index_t VAR_20;
 iv_index_t VAR_21;
 iv_index_t VAR_22;
 kern_return_t VAR_23;





 VAR_22 = FUNC_0(VAR_7);
 FUNC_8(VAR_22, VAR_5, &VAR_17, &VAR_18);
 if (VAR_0 == VAR_17)
  return VAR_2;


 VAR_20 = FUNC_1(VAR_6, VAR_22);







 VAR_19 = (VAR_1 != VAR_9) ?
           FUNC_1(VAR_9, VAR_22) :
           VAR_20;
 FUNC_5(VAR_22, VAR_19,
       VAR_12, &VAR_13);


 VAR_16 = VAR_1;
 VAR_23 = (VAR_17->ivam_get_value)(
        VAR_17, VAR_7, VAR_8,
        VAR_12, VAR_13,
        VAR_10, VAR_11,
        &VAR_14, &VAR_15, &VAR_16);
 if (VAR_3 != VAR_23) {
  FUNC_4(VAR_18);
  return VAR_23;
 }


 if (VAR_1 != VAR_16)
  FUNC_2(VAR_16);







 VAR_21 = FUNC_6(VAR_18, VAR_14, VAR_15);
 FUNC_3(VAR_6, VAR_22, VAR_21);







 FUNC_7(VAR_22, VAR_20);

 return VAR_3;
}

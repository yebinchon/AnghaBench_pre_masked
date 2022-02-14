
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mach_voucher_attr_value_handle_t ;
typedef int mach_voucher_attr_key_t ;
typedef int kern_return_t ;
typedef int iv_index_t ;
typedef int ipc_voucher_t ;
typedef scalar_t__ ipc_voucher_attr_manager_t ;
typedef int ipc_voucher_attr_control_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,scalar_t__*,int *) ;

__attribute__((used)) static kern_return_t
FUNC_6(
 ipc_voucher_t VAR_5,
 mach_voucher_attr_key_t VAR_6,
 mach_voucher_attr_value_handle_t VAR_7)
{
 ipc_voucher_attr_manager_t VAR_8;
 ipc_voucher_attr_control_t VAR_9;
 iv_index_t VAR_10;
 iv_index_t VAR_11;
 iv_index_t VAR_12;





 VAR_12 = FUNC_0(VAR_6);
 FUNC_5(VAR_12, VAR_4, &VAR_8, &VAR_9);
 if (VAR_0 == VAR_8)
  return VAR_1;


 VAR_10 = FUNC_1(VAR_5, VAR_12);







 VAR_11 = FUNC_3(VAR_9, VAR_7,
    VAR_3);
 FUNC_2(VAR_5, VAR_12, VAR_11);







 FUNC_4(VAR_12, VAR_10);

 return VAR_2;
}

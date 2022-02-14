
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int mach_voucher_attr_value_handle_t ;
typedef scalar_t__ mach_voucher_attr_value_handle_array_size_t ;
typedef scalar_t__ kern_return_t ;
typedef int ipc_voucher_t ;
typedef TYPE_1__* bank_element_t ;
typedef TYPE_2__* bank_account_t ;
struct TYPE_14__ {scalar_t__ ba_holder; scalar_t__ ba_merchant; } ;
struct TYPE_13__ {scalar_t__ be_type; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 TYPE_1__* VAR_3 ;
 TYPE_1__* VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_2__* FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int ) ;
 int VAR_6 ;
 TYPE_1__* FUNC_2 (int ) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int VAR_9 ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ,int ,int *,scalar_t__*) ;
 int FUNC_8 (char*,scalar_t__) ;

__attribute__((used)) static bank_account_t
FUNC_9(ipc_voucher_t VAR_10)
{
 bank_element_t VAR_11 = VAR_4;
 bank_account_t VAR_12 = VAR_1;
 mach_voucher_attr_value_handle_t VAR_13[VAR_8];
 mach_voucher_attr_value_handle_array_size_t VAR_14;
 kern_return_t VAR_15;

 VAR_14 = VAR_8;
 VAR_15 = FUNC_7(VAR_9,
    VAR_10,
    VAR_13,
    &VAR_14);

 if (VAR_15 != VAR_7 || VAR_14 == 0)
  return VAR_1;

 VAR_11 = FUNC_2(VAR_13[0]);
 if (VAR_11 == VAR_3)
  return VAR_1;
 if (VAR_11 == VAR_2)
  VAR_11 = FUNC_1(FUNC_6(FUNC_5(), VAR_6));

 if (VAR_11->be_type == VAR_5) {
  return VAR_1;
 } else if (VAR_11->be_type == VAR_0) {
  VAR_12 = FUNC_0(VAR_11);
  if (VAR_12->ba_holder != VAR_12->ba_merchant ||
   FUNC_3(VAR_12) !=
    FUNC_4(VAR_12->ba_merchant)) {
   return VAR_12;
  } else {
   return VAR_1;
  }
 } else {
  FUNC_8("Bogus bank type: %d passed in bank_get_voucher_bank_account\n", VAR_11->be_type);
 }
 return VAR_1;
}

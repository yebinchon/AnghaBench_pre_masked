
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int mach_voucher_attr_raw_recipe_array_t ;
typedef scalar_t__ kern_return_t ;
typedef scalar_t__ ipc_voucher_t ;
typedef int ipc_voucher_attr_recipe_data_t ;
typedef int ipc_voucher_attr_raw_recipe_array_size_t ;
typedef TYPE_1__* ipc_kmsg_t ;
struct TYPE_7__ {scalar_t__ ip_kobject; } ;
struct TYPE_6__ {TYPE_3__* ikm_voucher; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 TYPE_3__* FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (int *,int,scalar_t__*) ;
 int FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (scalar_t__,int ,int*,int ,int ,int*) ;
 scalar_t__ VAR_5 ;

void
FUNC_7(ipc_kmsg_t VAR_6)
{
 uint8_t VAR_7[(VAR_3 + 1) * sizeof(ipc_voucher_attr_recipe_data_t)];
 ipc_voucher_attr_raw_recipe_array_size_t VAR_8 = (VAR_3 + 1) *
      sizeof(ipc_voucher_attr_recipe_data_t);
 ipc_voucher_t VAR_9;
 ipc_voucher_t VAR_10;
 kern_return_t VAR_11;
 int VAR_12 = VAR_0;

 if (!FUNC_0(VAR_6->ikm_voucher) || FUNC_3() == VAR_5) {
  return;
 }


 VAR_9 = (ipc_voucher_t)VAR_6->ikm_voucher->ip_kobject;

 VAR_11 = FUNC_6(VAR_9,
  (mach_voucher_attr_raw_recipe_array_t)VAR_7,
  &VAR_8, VAR_4,
  VAR_1, &VAR_12);

 FUNC_1(VAR_2 == VAR_11);



 if (VAR_12) {
  VAR_11 = FUNC_4(VAR_7,
          VAR_8,
          &VAR_10);
  FUNC_1(VAR_2 == VAR_11);
  FUNC_5(VAR_6->ikm_voucher);
  VAR_6->ikm_voucher = FUNC_2(VAR_10);
 }
}

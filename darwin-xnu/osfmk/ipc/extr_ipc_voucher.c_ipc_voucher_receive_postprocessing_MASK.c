
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int mach_voucher_attr_raw_recipe_array_t ;
typedef int mach_msg_option_t ;
typedef scalar_t__ kern_return_t ;
typedef scalar_t__ ipc_voucher_t ;
typedef int ipc_voucher_attr_recipe_data_t ;
typedef int ipc_voucher_attr_raw_recipe_array_size_t ;
typedef TYPE_2__* ipc_kmsg_t ;
struct TYPE_9__ {scalar_t__ ip_kobject; } ;
struct TYPE_8__ {TYPE_4__* ikm_voucher; TYPE_1__* ikm_header; } ;
struct TYPE_7__ {int msgh_bits; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 TYPE_4__* FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (int *,int,scalar_t__*) ;
 int FUNC_5 (TYPE_4__*) ;
 scalar_t__ FUNC_6 (scalar_t__,int ,int*,int ,int ,int*) ;
 scalar_t__ VAR_7 ;

void
FUNC_7(
 ipc_kmsg_t VAR_8,
 mach_msg_option_t VAR_9)
{
 uint8_t VAR_10[(VAR_6 + 1) * sizeof(ipc_voucher_attr_recipe_data_t)];
 ipc_voucher_attr_raw_recipe_array_size_t VAR_11 = (VAR_6 + 1) *
      sizeof(ipc_voucher_attr_recipe_data_t);
 ipc_voucher_t VAR_12;
 ipc_voucher_t VAR_13;
 kern_return_t VAR_14;
 int VAR_15 = VAR_0;

 if ((VAR_9 & VAR_4) == 0 || (!FUNC_0(VAR_8->ikm_voucher)) ||
      FUNC_3() == VAR_7) {
  return;
 }


 VAR_13 = (ipc_voucher_t)VAR_8->ikm_voucher->ip_kobject;

 VAR_14 = FUNC_6(VAR_13,
  (mach_voucher_attr_raw_recipe_array_t)VAR_10,
  &VAR_11, VAR_5,
  VAR_1, &VAR_15);

 FUNC_1(VAR_2 == VAR_14);




 if (VAR_15) {
  VAR_14 = FUNC_4(VAR_10,
          VAR_11,
          &VAR_12);
  FUNC_1(VAR_2 == VAR_14);

  VAR_8->ikm_header->msgh_bits |= (VAR_3 << 16);
  FUNC_5(VAR_8->ikm_voucher);
  VAR_8->ikm_voucher = FUNC_2(VAR_12);
 }
}

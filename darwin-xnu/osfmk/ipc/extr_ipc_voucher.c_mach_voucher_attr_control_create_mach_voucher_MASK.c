
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* mach_voucher_attr_recipe_t ;
typedef int mach_voucher_attr_recipe_size_t ;
typedef int mach_voucher_attr_raw_recipe_size_t ;
typedef int * mach_voucher_attr_raw_recipe_array_t ;
typedef scalar_t__ mach_voucher_attr_key_t ;
typedef scalar_t__ kern_return_t ;
typedef scalar_t__ ipc_voucher_t ;
typedef TYPE_2__* ipc_voucher_attr_control_t ;
struct TYPE_6__ {int ivac_key_index; } ;
struct TYPE_5__ {int content_size; scalar_t__ previous_voucher; scalar_t__ key; int content; int command; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,int ,scalar_t__,int ,int,int) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,int ) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_8 ;

kern_return_t
FUNC_7(
 ipc_voucher_attr_control_t VAR_9,
 mach_voucher_attr_raw_recipe_array_t VAR_10,
 mach_voucher_attr_raw_recipe_size_t VAR_11,
 ipc_voucher_t *VAR_12)
{
 mach_voucher_attr_key_t VAR_13;
 mach_voucher_attr_recipe_t VAR_14;
 mach_voucher_attr_recipe_size_t VAR_15 = 0;
 ipc_voucher_t VAR_16 = VAR_2;
 kern_return_t VAR_17 = VAR_6;

 if (VAR_1 == VAR_9)
  return VAR_4;


 if (0 == VAR_11) {
  *VAR_12 = VAR_2;
  return VAR_6;
 }


 VAR_16 = FUNC_3(VAR_8);
 if (VAR_2 == VAR_16)
  return VAR_5;

 VAR_13 = FUNC_6(VAR_9->ivac_key_index);


 while (0 < VAR_11 - VAR_15) {
  ipc_voucher_t VAR_18;

  if (VAR_11 - VAR_15 < sizeof(*VAR_14)) {
   VAR_17 = VAR_3;
   break;
  }


  VAR_14 = (mach_voucher_attr_recipe_t)(void *)&VAR_10[VAR_15];
  if (VAR_11 - VAR_15 - sizeof(*VAR_14) < VAR_14->content_size) {
   VAR_17 = VAR_3;
   break;
  }
  VAR_15 += sizeof(*VAR_14) + VAR_14->content_size;


  VAR_18 = FUNC_0(VAR_14->previous_voucher);
  if (VAR_7 != VAR_14->previous_voucher && VAR_2 == VAR_18) {
   VAR_17 = VAR_4;
   break;
  }

  VAR_17 = FUNC_1(VAR_16,
       VAR_14->key,
       VAR_14->command,
       VAR_18,
       VAR_14->content,
       VAR_14->content_size,
       (VAR_14->key == VAR_13));
  FUNC_2(VAR_18);

  if (VAR_6 != VAR_17)
   break;
 }

 if (VAR_6 == VAR_17) {
  *VAR_12 = FUNC_5(VAR_16);
 } else {
  *VAR_12 = VAR_2;
  FUNC_4(VAR_16, VAR_0);
 }
 return VAR_17;
}

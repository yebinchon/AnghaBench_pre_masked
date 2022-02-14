
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef TYPE_1__* mach_voucher_attr_recipe_t ;
typedef int mach_voucher_attr_recipe_size_t ;
typedef int mach_voucher_attr_raw_recipe_size_t ;
typedef int * mach_voucher_attr_raw_recipe_array_t ;
typedef scalar_t__ kern_return_t ;
typedef scalar_t__ ipc_voucher_t ;
typedef scalar_t__ host_t ;
struct TYPE_2__ {int content_size; scalar_t__ previous_voucher; int content; int command; int key; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int ,scalar_t__,int ,int,int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,int ) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int VAR_8 ;

kern_return_t
FUNC_6(
 host_t VAR_9,
 mach_voucher_attr_raw_recipe_array_t VAR_10,
 mach_voucher_attr_raw_recipe_size_t VAR_11,
 ipc_voucher_t *VAR_12)
{
 mach_voucher_attr_recipe_t VAR_13;
 mach_voucher_attr_recipe_size_t VAR_14 = 0;
 ipc_voucher_t VAR_15 = VAR_2;
 kern_return_t VAR_16 = VAR_6;

 if (VAR_9 == VAR_1)
  return VAR_3;


 if (0 == VAR_11) {
  *VAR_12 = VAR_2;
  return VAR_6;
 }


 VAR_15 = FUNC_3(VAR_8);
 if (VAR_2 == VAR_15)
  return VAR_5;


 while (0 < VAR_11 - VAR_14) {
  ipc_voucher_t VAR_17;

  if (VAR_11 - VAR_14 < sizeof(*VAR_13)) {
   VAR_16 = VAR_3;
   break;
  }


  VAR_13 = (mach_voucher_attr_recipe_t)(void *)&VAR_10[VAR_14];
  if (VAR_11 - VAR_14 - sizeof(*VAR_13) < VAR_13->content_size) {
   VAR_16 = VAR_3;
   break;
  }
  VAR_14 += sizeof(*VAR_13) + VAR_13->content_size;


  VAR_17 = FUNC_0(VAR_13->previous_voucher);
  if (VAR_7 != VAR_13->previous_voucher && VAR_2 == VAR_17) {
   VAR_16 = VAR_4;
   break;
  }

  VAR_16 = FUNC_1(VAR_15,
       VAR_13->key,
       VAR_13->command,
       VAR_17,
       VAR_13->content,
       VAR_13->content_size,
       VAR_0);
  FUNC_2(VAR_17);

  if (VAR_6 != VAR_16)
   break;
 }

 if (VAR_6 == VAR_16) {
  *VAR_12 = FUNC_5(VAR_15);
 } else {
  *VAR_12 = VAR_2;
  FUNC_4(VAR_15, VAR_0);
 }
 return VAR_16;
}

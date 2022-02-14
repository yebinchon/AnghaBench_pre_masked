
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef scalar_t__ uint8_t ;
typedef int sz ;
struct mach_voucher_extract_attr_recipe_args {int recipe_size; int recipe; int key; int voucher_name; } ;
typedef int mach_voucher_attr_raw_recipe_t ;
typedef scalar_t__ mach_msg_type_number_t ;
typedef scalar_t__ kern_return_t ;
typedef scalar_t__ ipc_voucher_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,void*,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__*,int ,int) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__* FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__*,int ) ;
 scalar_t__ FUNC_8 (scalar_t__,int ,int ,scalar_t__*) ;

kern_return_t
FUNC_9(struct mach_voucher_extract_attr_recipe_args *VAR_8)
{
 ipc_voucher_t VAR_9 = VAR_0;
 kern_return_t VAR_10 = VAR_3;
 mach_msg_type_number_t VAR_11 = 0;

 if (FUNC_3(VAR_8->recipe_size, (void *)&VAR_11, sizeof(VAR_11)))
  return VAR_1;

 if (VAR_11 > VAR_5)
  return VAR_7;

 VAR_9 = FUNC_2(VAR_8->voucher_name);
 if (VAR_9 == VAR_0)
  return VAR_4;

 mach_msg_type_number_t VAR_12 = VAR_11;

 if (VAR_11 < VAR_6) {

  uint8_t VAR_13[VAR_11];
  if (FUNC_3(FUNC_0(VAR_8->recipe), (void *)VAR_13, VAR_11)) {
   VAR_10 = VAR_1;
   goto done;
  }
  VAR_10 = FUNC_8(VAR_9, VAR_8->key,
                                        (mach_voucher_attr_raw_recipe_t)VAR_13, &VAR_11);
  FUNC_1(VAR_11 <= VAR_12);

  if (VAR_10 == VAR_3 && VAR_11 > 0)
   VAR_10 = FUNC_4(VAR_13, FUNC_0(VAR_8->recipe), VAR_11);
 } else {
  uint8_t *VAR_14 = FUNC_6((vm_size_t)VAR_12);
  if (!VAR_14) {
   VAR_10 = VAR_2;
   goto done;
  }

  if (FUNC_3(FUNC_0(VAR_8->recipe), (void *)VAR_14, VAR_11)) {
   FUNC_7(VAR_14, (vm_size_t)VAR_12);
   VAR_10 = VAR_1;
   goto done;
  }

  VAR_10 = FUNC_8(VAR_9, VAR_8->key,
                                        (mach_voucher_attr_raw_recipe_t)VAR_14, &VAR_11);
  FUNC_1(VAR_11 <= VAR_12);

  if (VAR_10 == VAR_3 && VAR_11 > 0)
   VAR_10 = FUNC_4(VAR_14, FUNC_0(VAR_8->recipe), VAR_11);
  FUNC_7(VAR_14, (vm_size_t)VAR_12);
 }

 if (VAR_10 == VAR_3)
  VAR_10 = FUNC_4(&VAR_11, VAR_8->recipe_size, sizeof(VAR_11));

done:
 FUNC_5(VAR_9);
 return VAR_10;
}

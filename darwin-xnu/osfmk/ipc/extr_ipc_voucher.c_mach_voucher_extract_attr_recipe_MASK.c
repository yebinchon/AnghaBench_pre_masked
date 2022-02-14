
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int mach_voucher_attr_value_handle_t ;
typedef scalar_t__ mach_voucher_attr_value_handle_array_size_t ;
typedef TYPE_1__* mach_voucher_attr_recipe_t ;
typedef scalar_t__ mach_voucher_attr_raw_recipe_t ;
typedef int mach_voucher_attr_raw_recipe_size_t ;
typedef int mach_voucher_attr_key_t ;
typedef scalar_t__ kern_return_t ;
typedef scalar_t__ iv_index_t ;
typedef scalar_t__ ipc_voucher_t ;
typedef TYPE_2__* ipc_voucher_attr_manager_t ;
struct TYPE_7__ {scalar_t__ (* ivam_extract_content ) (TYPE_2__*,int ,int *,scalar_t__,int *,int ,int*) ;} ;
struct TYPE_6__ {int content_size; int content; int command; int previous_voucher; int key; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__,int *,scalar_t__*) ;
 int FUNC_4 (scalar_t__,int ,TYPE_2__**,int *) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int ,int *,scalar_t__,int *,int ,int*) ;

kern_return_t
FUNC_6(
 ipc_voucher_t VAR_10,
 mach_voucher_attr_key_t VAR_11,
 mach_voucher_attr_raw_recipe_t VAR_12,
 mach_voucher_attr_raw_recipe_size_t *VAR_13)
{
 mach_voucher_attr_value_handle_t VAR_14[VAR_8];
 mach_voucher_attr_value_handle_array_size_t VAR_15;
 ipc_voucher_attr_manager_t VAR_16;
 mach_voucher_attr_recipe_t VAR_17;
 iv_index_t VAR_18;
 iv_index_t VAR_19;
 kern_return_t VAR_20;


 if (VAR_2 == VAR_10)
  return VAR_4;

 VAR_19 = FUNC_1(VAR_11);

 VAR_18 = FUNC_2(VAR_10, VAR_19);
 if (VAR_3 == VAR_18) {
  *VAR_13 = 0;
  return VAR_6;
 }

 if (*VAR_13 < sizeof(*VAR_17))
  return VAR_5;

 VAR_17 = (mach_voucher_attr_recipe_t)(void *)VAR_12;
 VAR_17->key = VAR_11;
 VAR_17->command = VAR_7;
 VAR_17->previous_voucher = VAR_9;
 VAR_17->content_size = *VAR_13 - sizeof(*VAR_17);







 FUNC_4(VAR_19, VAR_0, &VAR_16, ((void*)0));
 if (VAR_1 == VAR_16) {
  return VAR_4;
 }





 FUNC_3(VAR_19, VAR_18,
       VAR_14, &VAR_15);
 FUNC_0(0 < VAR_15);


 VAR_20 = (VAR_16->ivam_extract_content)(VAR_16, VAR_11,
          VAR_14, VAR_15,
          &VAR_17->command,
          VAR_17->content, &VAR_17->content_size);
 if (VAR_6 == VAR_20) {
   FUNC_0(*VAR_13 - sizeof(*VAR_17) >= VAR_17->content_size);
   *VAR_13 = sizeof(*VAR_17) + VAR_17->content_size;
 }

 return VAR_20;
}

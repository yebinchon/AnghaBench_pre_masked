
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int mach_voucher_attr_value_handle_t ;
typedef scalar_t__ mach_voucher_attr_value_handle_array_size_t ;
typedef TYPE_1__* mach_voucher_attr_recipe_t ;
typedef int mach_voucher_attr_recipe_size_t ;
typedef int * mach_voucher_attr_raw_recipe_array_t ;
typedef int mach_voucher_attr_raw_recipe_array_size_t ;
typedef int mach_voucher_attr_key_t ;
typedef scalar_t__ mach_voucher_attr_content_size_t ;
typedef scalar_t__ kern_return_t ;
typedef scalar_t__ iv_index_t ;
typedef TYPE_2__* ipc_voucher_t ;
typedef TYPE_3__* ipc_voucher_attr_manager_t ;
struct TYPE_12__ {scalar_t__ (* ivam_extract_content ) (TYPE_3__*,int ,int *,scalar_t__,int *,int ,scalar_t__*) ;} ;
struct TYPE_11__ {scalar_t__ iv_table_size; } ;
struct TYPE_10__ {scalar_t__ content_size; int content; int command; int key; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 TYPE_2__* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_2__*,scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__,int *,scalar_t__*) ;
 int FUNC_4 (scalar_t__,int ,TYPE_3__**,int *) ;
 scalar_t__ FUNC_5 (TYPE_3__*,int ,int *,scalar_t__,int *,int ,scalar_t__*) ;

kern_return_t
FUNC_6(
 ipc_voucher_t VAR_9,
 mach_voucher_attr_raw_recipe_array_t VAR_10,
 mach_voucher_attr_raw_recipe_array_size_t *VAR_11)
{
 mach_voucher_attr_recipe_size_t VAR_12 = *VAR_11;
 mach_voucher_attr_recipe_size_t VAR_13 = 0;
 iv_index_t VAR_14;

 if (VAR_2 == VAR_9)
  return VAR_4;

 for (VAR_14 = 0; VAR_14 < VAR_9->iv_table_size; VAR_14++) {
  mach_voucher_attr_value_handle_t VAR_15[VAR_8];
  mach_voucher_attr_value_handle_array_size_t VAR_16;
  mach_voucher_attr_content_size_t VAR_17;
  ipc_voucher_attr_manager_t VAR_18;
  mach_voucher_attr_recipe_t VAR_19;
  mach_voucher_attr_key_t VAR_20;
  iv_index_t VAR_21;
  kern_return_t VAR_22;


  VAR_21 = FUNC_2(VAR_9, VAR_14);
  if (VAR_3 == VAR_21)
   continue;

  if (VAR_12 - VAR_13 < sizeof(*VAR_19))
   return VAR_5;







  FUNC_4(VAR_14, VAR_0, &VAR_18, ((void*)0));
  FUNC_0(VAR_1 != VAR_18);
  if (VAR_1 == VAR_18) {
   continue;
  }

  VAR_19 = (mach_voucher_attr_recipe_t)(void *)&VAR_10[VAR_13];
  VAR_17 = VAR_12 - VAR_13 - sizeof(*VAR_19);





  FUNC_3(VAR_14, VAR_21,
        VAR_15, &VAR_16);
  FUNC_0(0 < VAR_16);

  VAR_20 = FUNC_1(VAR_14);

  VAR_19->key = VAR_20;
  VAR_19->command = VAR_7;
  VAR_19->content_size = VAR_17;


  VAR_22 = (VAR_18->ivam_extract_content)(VAR_18, VAR_20,
          VAR_15, VAR_16,
          &VAR_19->command,
          VAR_19->content, &VAR_19->content_size);
  if (VAR_6 != VAR_22)
   return VAR_22;

  FUNC_0(VAR_19->content_size <= VAR_17);
  VAR_13 += sizeof(*VAR_19) + VAR_19->content_size;
 }

 *VAR_11 = VAR_13;
 return VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int mach_voucher_attr_recipe_command_t ;
typedef int mach_voucher_attr_key_t ;
typedef int kern_return_t ;
typedef scalar_t__ iv_index_t ;
typedef TYPE_1__* ipc_voucher_t ;
typedef TYPE_2__* ipc_voucher_attr_recipe_t ;
typedef int * ipc_voucher_attr_raw_recipe_array_t ;
typedef int ipc_voucher_attr_raw_recipe_array_size_t ;
typedef TYPE_3__* ipc_voucher_attr_manager_t ;
typedef int ipc_voucher_attr_manager_flags ;
struct TYPE_11__ {int ivam_flags; } ;
struct TYPE_10__ {scalar_t__ content_size; TYPE_1__* previous_voucher; int command; int key; } ;
struct TYPE_9__ {scalar_t__ iv_table_size; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_1__*,scalar_t__) ;
 int FUNC_3 (scalar_t__,int,TYPE_3__**,int *) ;

__attribute__((used)) static kern_return_t
FUNC_4(
 ipc_voucher_t VAR_10,
 ipc_voucher_attr_raw_recipe_array_t VAR_11,
 ipc_voucher_attr_raw_recipe_array_size_t *VAR_12,
 mach_voucher_attr_recipe_command_t VAR_13,
 ipc_voucher_attr_manager_flags VAR_14,
 int *VAR_15)
{
 ipc_voucher_attr_raw_recipe_array_size_t VAR_16 = *VAR_12;
 ipc_voucher_attr_raw_recipe_array_size_t VAR_17 = 0;
 iv_index_t VAR_18;
 ipc_voucher_attr_recipe_t VAR_19;

 if (VAR_2 == VAR_10)
  return VAR_4;


 if (VAR_16 < sizeof(*VAR_19))
   return VAR_5;

 *VAR_15 = VAR_0;
 VAR_19 = (ipc_voucher_attr_recipe_t)(void *)&VAR_11[VAR_17];
 VAR_19->key = VAR_8;
 VAR_19->command = VAR_7;
 VAR_19->previous_voucher = VAR_10;
 VAR_19->content_size = 0;
 VAR_17 += sizeof(*VAR_19) + VAR_19->content_size;

 for (VAR_18 = 0; VAR_18 < VAR_10->iv_table_size; VAR_18++) {
  ipc_voucher_attr_manager_t VAR_20;
  mach_voucher_attr_key_t VAR_21;
  iv_index_t VAR_22;


  VAR_22 = FUNC_2(VAR_10, VAR_18);
  if (VAR_3 == VAR_22)
   continue;

  if (VAR_16 - VAR_17 < sizeof(*VAR_19))
   return VAR_5;

  VAR_19 = (ipc_voucher_attr_recipe_t)(void *)&VAR_11[VAR_17];







  FUNC_3(VAR_18, VAR_0, &VAR_20, ((void*)0));
  FUNC_0(VAR_1 != VAR_20);
  if (VAR_1 == VAR_20) {
   continue;
  }


  if ((VAR_20->ivam_flags & VAR_14) == 0)
   continue;

  VAR_21 = FUNC_1(VAR_18);

  VAR_19->key = VAR_21;
  VAR_19->command = VAR_13;
  VAR_19->content_size = 0;
  VAR_19->previous_voucher = VAR_10;

  VAR_17 += sizeof(*VAR_19) + VAR_19->content_size;
  *VAR_15 = VAR_9;
 }

 *VAR_12 = VAR_17;
 return VAR_6;
}

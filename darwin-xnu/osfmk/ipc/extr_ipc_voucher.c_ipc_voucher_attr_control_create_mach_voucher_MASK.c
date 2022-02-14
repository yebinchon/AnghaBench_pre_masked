
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ mach_voucher_attr_key_t ;
typedef scalar_t__ kern_return_t ;
typedef scalar_t__ ipc_voucher_t ;
typedef TYPE_1__* ipc_voucher_attr_recipe_t ;
typedef int ipc_voucher_attr_recipe_size_t ;
typedef int * ipc_voucher_attr_raw_recipe_array_t ;
typedef int ipc_voucher_attr_raw_recipe_array_size_t ;
typedef TYPE_2__* ipc_voucher_attr_control_t ;
struct TYPE_6__ {int ivac_key_index; } ;
struct TYPE_5__ {int content_size; scalar_t__ key; int content; int previous_voucher; int command; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,int ,int ,int ,int,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_7 ;

kern_return_t
FUNC_5(
 ipc_voucher_attr_control_t VAR_8,
 ipc_voucher_attr_raw_recipe_array_t VAR_9,
 ipc_voucher_attr_raw_recipe_array_size_t VAR_10,
 ipc_voucher_t *VAR_11)
{
 mach_voucher_attr_key_t VAR_12;
 ipc_voucher_attr_recipe_t VAR_13;
 ipc_voucher_attr_recipe_size_t VAR_14 = 0;
 ipc_voucher_t VAR_15 = VAR_2;
 kern_return_t VAR_16 = VAR_6;

 if (VAR_1 == VAR_8)
  return VAR_4;


 if (0 == VAR_10) {
  *VAR_11 = VAR_2;
  return VAR_6;
 }


 VAR_15 = FUNC_1(VAR_7);
 if (VAR_2 == VAR_15)
  return VAR_5;

 VAR_12 = FUNC_4(VAR_8->ivac_key_index);


 while (0 < VAR_10 - VAR_14) {

  if (VAR_10 - VAR_14 < sizeof(*VAR_13)) {
   VAR_16 = VAR_3;
   break;
  }


  VAR_13 = (ipc_voucher_attr_recipe_t)(void *)&VAR_9[VAR_14];
  if (VAR_10 - VAR_14 - sizeof(*VAR_13) < VAR_13->content_size) {
   VAR_16 = VAR_3;
   break;
  }
  VAR_14 += sizeof(*VAR_13) + VAR_13->content_size;

  VAR_16 = FUNC_0(VAR_15,
       VAR_13->key,
       VAR_13->command,
       VAR_13->previous_voucher,
       VAR_13->content,
       VAR_13->content_size,
       (VAR_13->key == VAR_12));
  if (VAR_6 != VAR_16)
   break;
 }

 if (VAR_6 == VAR_16) {
  *VAR_11 = FUNC_3(VAR_15);
 } else {
  *VAR_11 = VAR_2;
  FUNC_2(VAR_15, VAR_0);
 }
 return VAR_16;
}

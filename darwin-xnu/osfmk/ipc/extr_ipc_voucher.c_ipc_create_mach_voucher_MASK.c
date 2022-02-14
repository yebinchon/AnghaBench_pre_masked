
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ kern_return_t ;
typedef scalar_t__ ipc_voucher_t ;
typedef TYPE_1__* ipc_voucher_attr_recipe_t ;
typedef int ipc_voucher_attr_recipe_size_t ;
typedef int * ipc_voucher_attr_raw_recipe_array_t ;
typedef int ipc_voucher_attr_raw_recipe_array_size_t ;
struct TYPE_2__ {int content_size; int content; int previous_voucher; int command; int key; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,int ,int ,int ,int,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_5 ;

kern_return_t
FUNC_4(
 ipc_voucher_attr_raw_recipe_array_t VAR_6,
 ipc_voucher_attr_raw_recipe_array_size_t VAR_7,
 ipc_voucher_t *VAR_8)
{
 ipc_voucher_attr_recipe_t VAR_9;
 ipc_voucher_attr_recipe_size_t VAR_10 = 0;
 ipc_voucher_t VAR_11;
 kern_return_t VAR_12 = VAR_4;


 if (0 == VAR_7) {
  *VAR_8 = VAR_1;
  return VAR_4;
 }


 VAR_11 = FUNC_1(VAR_5);
 if (VAR_1 == VAR_11)
  return VAR_3;


 while (0 < VAR_7 - VAR_10) {

  if (VAR_7 - VAR_10 < sizeof(*VAR_9)) {
   VAR_12 = VAR_2;
   break;
  }


  VAR_9 = (ipc_voucher_attr_recipe_t)(void *)&VAR_6[VAR_10];
  if (VAR_7 - VAR_10 - sizeof(*VAR_9) < VAR_9->content_size) {
   VAR_12 = VAR_2;
   break;
  }
  VAR_10 += sizeof(*VAR_9) + VAR_9->content_size;

  VAR_12 = FUNC_0(VAR_11,
       VAR_9->key,
       VAR_9->command,
       VAR_9->previous_voucher,
       VAR_9->content,
       VAR_9->content_size,
       VAR_0);
  if (VAR_4 != VAR_12)
   break;
 }

 if (VAR_4 == VAR_12) {
  *VAR_8 = FUNC_3(VAR_11);
 } else {
  FUNC_2(VAR_11, VAR_0);
  *VAR_8 = VAR_1;
 }
 return VAR_12;
}

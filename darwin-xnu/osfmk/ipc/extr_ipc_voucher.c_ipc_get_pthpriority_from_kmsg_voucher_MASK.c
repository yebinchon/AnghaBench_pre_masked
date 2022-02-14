
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef TYPE_1__* mach_voucher_attr_recipe_t ;
typedef int mach_voucher_attr_recipe_data_t ;
typedef int mach_voucher_attr_raw_recipe_size_t ;
typedef scalar_t__ kern_return_t ;
typedef scalar_t__ ipc_voucher_t ;
typedef int ipc_pthread_priority_value_t ;
typedef TYPE_2__* ipc_kmsg_t ;
struct TYPE_7__ {scalar_t__ ip_kobject; } ;
struct TYPE_6__ {TYPE_4__* ikm_voucher; } ;
struct TYPE_5__ {int content_size; int content; } ;


 int FUNC_0 (TYPE_4__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,int *,int*) ;
 int FUNC_3 (int *,int ,int) ;

kern_return_t
FUNC_4(
 ipc_kmsg_t VAR_4,
 ipc_pthread_priority_value_t *VAR_5)
{
 ipc_voucher_t VAR_6;
 mach_voucher_attr_raw_recipe_size_t VAR_7 =
   sizeof(mach_voucher_attr_recipe_data_t) + sizeof(ipc_pthread_priority_value_t);
 uint8_t VAR_8[VAR_7];
 mach_voucher_attr_recipe_t VAR_9;
 kern_return_t VAR_10 = VAR_2;

 if (!FUNC_0(VAR_4->ikm_voucher)) {
  return VAR_0;
 }

 VAR_6 = (ipc_voucher_t)VAR_4->ikm_voucher->ip_kobject;
 VAR_10 = FUNC_2(VAR_6,
    VAR_3,
    VAR_8,
    &VAR_7);
 if (VAR_10 != VAR_2) {
  return VAR_10;
 }


 if (VAR_7 < sizeof(mach_voucher_attr_recipe_t)) {
  return VAR_1;
 }

 VAR_9 = (mach_voucher_attr_recipe_t) (void *) &VAR_8[0];
 FUNC_1(VAR_9->content_size == sizeof(ipc_pthread_priority_value_t));
 FUNC_3(VAR_5, VAR_9->content, sizeof(ipc_pthread_priority_value_t));

 return VAR_2;
}

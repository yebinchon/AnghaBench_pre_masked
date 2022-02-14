
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int mach_voucher_t ;
typedef TYPE_1__* mach_voucher_attr_recipe_t ;
typedef int mach_voucher_attr_recipe_data_t ;
typedef size_t mach_voucher_attr_raw_recipe_size_t ;
typedef scalar_t__ mach_voucher_attr_raw_recipe_array_t ;
typedef int mach_msg_priority_t ;
typedef int kern_return_t ;
typedef int ipc_pthread_priority_value_t ;
typedef int ipc_pthread_priority_value ;
struct TYPE_2__ {int content_size; int * content; int previous_voucher; int command; int key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int VAR_4 ;
 int FUNC_1 (int ,scalar_t__,size_t,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int *,int) ;

__attribute__((used)) static mach_voucher_t
FUNC_4(mach_msg_priority_t VAR_5)
{
 char VAR_6[sizeof(mach_voucher_attr_recipe_data_t) + sizeof(ipc_pthread_priority_value_t)];

 mach_voucher_t VAR_7 = VAR_0;
 kern_return_t VAR_8;
 ipc_pthread_priority_value_t VAR_9 =
   (ipc_pthread_priority_value_t)VAR_5;

 mach_voucher_attr_raw_recipe_array_t VAR_10;
 mach_voucher_attr_raw_recipe_size_t VAR_11 = 0;
 mach_voucher_attr_recipe_t VAR_12 =
  (mach_voucher_attr_recipe_t)&VAR_6[VAR_11];

 VAR_12->key = VAR_1;
 VAR_12->command = VAR_2;
 VAR_12->previous_voucher = VAR_3;
 FUNC_3((char *)&VAR_12->content[0], &VAR_9, sizeof(VAR_9));
 VAR_12->content_size = sizeof(ipc_pthread_priority_value_t);
 VAR_11 += sizeof(mach_voucher_attr_recipe_data_t) + VAR_12->content_size;

 VAR_10 = (mach_voucher_attr_raw_recipe_array_t)&VAR_6[0];

 VAR_8 = FUNC_1(FUNC_2(),
    VAR_10,
    VAR_11,
    &VAR_7);

 VAR_4; FUNC_0(VAR_8, "client host_create_mach_voucher");
 return VAR_7;
}

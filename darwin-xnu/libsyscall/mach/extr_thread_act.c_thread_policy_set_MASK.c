
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thread_policy_t ;
typedef int thread_policy_flavor_t ;
typedef int thread_act_t ;
typedef int mach_msg_type_number_t ;
typedef scalar_t__ kern_return_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;

kern_return_t
FUNC_2(thread_act_t VAR_2, thread_policy_flavor_t VAR_3, thread_policy_t VAR_4, mach_msg_type_number_t VAR_5)
{
 kern_return_t VAR_6;

 VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_6 == VAR_1) {
  FUNC_1(VAR_2);
 } else if (VAR_6 == VAR_0) {
  VAR_6 = VAR_1;
 }

 return VAR_6;
}

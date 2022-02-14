
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thread_act_t ;
typedef int policy_t ;
typedef int policy_base_t ;
typedef int mach_msg_type_number_t ;
typedef scalar_t__ kern_return_t ;
typedef int boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;

kern_return_t
FUNC_2(thread_act_t VAR_2, policy_t VAR_3, policy_base_t VAR_4, mach_msg_type_number_t VAR_5, boolean_t VAR_6)
{
 kern_return_t VAR_7;

 VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 if (VAR_7 == VAR_1) {
  FUNC_1(VAR_2);
 } else if (VAR_7 == VAR_0) {
  VAR_7 = VAR_1;
 }

 return VAR_7;
}

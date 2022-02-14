
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_2__* thread_t ;
struct TYPE_11__ {scalar_t__ qos_tier; int tier_importance; } ;
typedef TYPE_3__ thread_qos_policy_data_t ;
typedef int thread_policy_t ;
typedef scalar_t__ thread_policy_flavor_t ;
typedef int mach_msg_type_number_t ;
typedef scalar_t__ kern_return_t ;
struct TYPE_9__ {scalar_t__ thrp_qos; int thrp_qos_relprio; } ;
struct TYPE_10__ {TYPE_1__ requested_policy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_2__* VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;

kern_return_t
FUNC_3(
 thread_t VAR_9,
 thread_policy_flavor_t VAR_10,
 thread_policy_t VAR_11,
 mach_msg_type_number_t VAR_12)
{
 thread_qos_policy_data_t VAR_13;
 kern_return_t VAR_14;

 VAR_13.qos_tier = VAR_7;

 if (VAR_9 == VAR_4)
  return (VAR_1);

 if (VAR_8 == VAR_0) {
  if (FUNC_0(VAR_9))
   return (VAR_2);

  if (VAR_10 == VAR_5)
   return (VAR_1);
 }


 if (VAR_9->requested_policy.thrp_qos != VAR_7) {

  VAR_13.qos_tier = VAR_9->requested_policy.thrp_qos;
  VAR_13.tier_importance = VAR_9->requested_policy.thrp_qos_relprio;

  VAR_14 = FUNC_2(VAR_9);
  if (VAR_14 != VAR_3) {
   return VAR_14;
  }
 }

 VAR_14 = FUNC_1(VAR_9, VAR_10, VAR_11, VAR_12);


 if (VAR_13.qos_tier != VAR_7) {
  if (VAR_14 != VAR_3) {

   (void)FUNC_1(VAR_9, VAR_5, (thread_policy_t)&VAR_13, VAR_6);
  }
 }

 return VAR_14;
}

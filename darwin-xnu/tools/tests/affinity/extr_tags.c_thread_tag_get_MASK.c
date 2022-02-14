
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int thread_t ;
typedef int thread_policy_t ;
struct TYPE_2__ {int affinity_tag; } ;
typedef TYPE_1__ thread_affinity_policy_data_t ;
typedef int mach_msg_type_number_t ;
typedef scalar_t__ kern_return_t ;
typedef int boolean_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int *,int *) ;

int
FUNC_3(thread_t VAR_4)
{
 kern_return_t VAR_5;
 boolean_t VAR_6 = VAR_0;
 thread_affinity_policy_data_t VAR_7;
 mach_msg_type_number_t VAR_8 = VAR_3;

 VAR_5 = FUNC_2(
   VAR_4, VAR_2,
   (thread_policy_t) &VAR_7, &VAR_8, &VAR_6);
 if (VAR_5 != VAR_1) {
  FUNC_1("thread_policy_set(1) returned %d\n", VAR_5);
  FUNC_0(1);
 }

 return VAR_7.affinity_tag;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int thread_policy_t ;
struct TYPE_2__ {int affinity_tag; } ;
typedef TYPE_1__ thread_affinity_policy_data_t ;
typedef scalar_t__ kern_return_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ) ;

void
FUNC_3(int VAR_4)
{
 kern_return_t VAR_5;
 thread_affinity_policy_data_t VAR_6;
 if (VAR_3) {
  VAR_6.affinity_tag = VAR_4;
  VAR_5 = FUNC_2(
    FUNC_0(), VAR_1,
    (thread_policy_t) &VAR_6,
    VAR_2);
  if (VAR_5 != VAR_0)
   FUNC_1("thread_policy_set(THREAD_AFFINITY_POLICY) returned %d\n", VAR_5);
 }
}

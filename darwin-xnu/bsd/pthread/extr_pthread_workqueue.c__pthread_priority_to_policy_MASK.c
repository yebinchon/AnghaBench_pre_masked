
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ qos_tier; scalar_t__ tier_importance; } ;
typedef TYPE_1__ thread_qos_policy_data_t ;
typedef int pthread_priority_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static bool
FUNC_2(pthread_priority_t VAR_2,
  thread_qos_policy_data_t *VAR_3)
{
 VAR_3->qos_tier = FUNC_1(VAR_2);
 VAR_3->tier_importance = FUNC_0(VAR_2);
 if (VAR_3->qos_tier == VAR_1 || VAR_3->tier_importance > 0 ||
   VAR_3->tier_importance < VAR_0) {
  return 0;
 }
 return 1;
}

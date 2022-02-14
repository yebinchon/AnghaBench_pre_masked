
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int task_policy_t ;
struct task_qos_policy {int task_throughput_qos_tier; int task_latency_qos_tier; } ;
typedef scalar_t__ kern_return_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,scalar_t__,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_4(void)
{
    struct task_qos_policy VAR_7;
    kern_return_t VAR_8;

 VAR_5;

 VAR_7.task_latency_qos_tier = VAR_1;
 VAR_7.task_throughput_qos_tier = VAR_4;

 VAR_8 = FUNC_3(FUNC_2(), VAR_2, (task_policy_t)&VAR_7,
                      VAR_3);
 if (VAR_8 != VAR_0) {
  FUNC_0("task_policy_set(... TASK_OVERRIDE_QOS_POLICY ...) failed: %d (%s)", VAR_8, FUNC_1(VAR_8));
 }

 VAR_6;
}

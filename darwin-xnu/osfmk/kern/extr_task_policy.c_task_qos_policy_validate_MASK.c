
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int task_throughput_qos_t ;
typedef TYPE_1__* task_qos_policy_t ;
typedef int task_latency_qos_t ;
typedef scalar_t__ mach_msg_type_number_t ;
typedef scalar_t__ kern_return_t ;
struct TYPE_3__ {int task_throughput_qos_tier; int task_latency_qos_tier; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static kern_return_t
FUNC_2(task_qos_policy_t VAR_3, mach_msg_type_number_t VAR_4) {
 if (VAR_4 < VAR_2)
  return VAR_0;

 task_latency_qos_t VAR_5 = VAR_3->task_latency_qos_tier;
 task_throughput_qos_t VAR_6 = VAR_3->task_throughput_qos_tier;

 kern_return_t VAR_7 = FUNC_0(VAR_5);

 if (VAR_7 != VAR_1)
  return VAR_7;

 VAR_7 = FUNC_1(VAR_6);

 return VAR_7;
}

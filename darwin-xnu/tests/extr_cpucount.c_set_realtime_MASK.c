
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_2__ {scalar_t__ preemptible; void* computation; void* constraint; void* period; } ;
typedef TYPE_1__ thread_time_constraint_policy_data_t ;
typedef int thread_policy_t ;
typedef int pthread_t ;
typedef int mach_port_t ;
typedef int kern_return_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(pthread_t VAR_3) {
 kern_return_t VAR_4;
 thread_time_constraint_policy_data_t VAR_5;

 mach_port_t VAR_6 = FUNC_3(VAR_3);
 VAR_2; FUNC_1(VAR_6, "pthread_mach_thread_np");


 VAR_5.period = (uint32_t)FUNC_2(1000000000);
 VAR_5.constraint = (uint32_t)FUNC_2(100000000);
 VAR_5.computation = (uint32_t)FUNC_2(10000000);

 VAR_5.preemptible = 0;
 VAR_4 = FUNC_4(VAR_6, VAR_0, (thread_policy_t) &VAR_5,
                        VAR_1);
 VAR_2; FUNC_0(VAR_4, "thread_policy_set(THREAD_TIME_CONSTRAINT_POLICY)");
}

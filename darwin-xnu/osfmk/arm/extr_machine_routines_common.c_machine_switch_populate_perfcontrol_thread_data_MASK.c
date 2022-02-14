
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef TYPE_1__* thread_t ;
struct perfcontrol_thread_data {int perfctl_state; int scheduling_latency_at_same_basepri; int thread_id; scalar_t__ energy_estimate_nj; int perfctl_class; } ;
struct TYPE_5__ {int thread_id; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct perfcontrol_thread_data*,int) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(struct perfcontrol_thread_data *VAR_0,
      thread_t VAR_1,
      uint64_t VAR_2)
{
 FUNC_1(VAR_0, sizeof(struct perfcontrol_thread_data));
 VAR_0->perfctl_class = FUNC_2(VAR_1);
 VAR_0->energy_estimate_nj = 0;
 VAR_0->thread_id = VAR_1->thread_id;
 VAR_0->scheduling_latency_at_same_basepri = VAR_2;
 VAR_0->perfctl_state = FUNC_0(VAR_1);
}

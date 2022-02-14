
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct kperf_timer {int pending_cpus; } ;
typedef TYPE_1__* processor_t ;
typedef int cpumask_t ;
struct TYPE_6__ {int logical_cpu_max; } ;
struct TYPE_5__ {scalar_t__ state; scalar_t__ active_thread; } ;


 int FUNC_0 (int ,int,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *,int,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 TYPE_1__* FUNC_6 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__ VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (int ,int ,int ,struct kperf_timer*) ;

bool
FUNC_8(struct kperf_timer *VAR_10)
{
 int VAR_11 = FUNC_4();
 int VAR_12 = VAR_8.logical_cpu_max;
 bool VAR_13 = 1;
 cpumask_t VAR_14 = 0;

 for (int VAR_15 = 0; VAR_15 < VAR_12; VAR_15++) {
  uint64_t VAR_16 = FUNC_1(1) << VAR_15;
  processor_t VAR_17 = FUNC_6(VAR_15);


  if (VAR_17 == VAR_3 ||
    VAR_17->state != VAR_4 ||
    VAR_17->active_thread == VAR_5)
  {





   continue;
  }


  if (VAR_15 == VAR_11) {
   VAR_13 = 0;
   continue;
  }


  uint64_t VAR_18 = FUNC_3(
    &VAR_10->pending_cpus, VAR_16,
    VAR_9);
  if (VAR_18 & VAR_16) {





   continue;
  }

  VAR_14 |= FUNC_5(VAR_15);
 }

 if (VAR_14 != 0) {
  FUNC_7(VAR_14, VAR_0, VAR_6, VAR_10);
 }

 return VAR_13;
}

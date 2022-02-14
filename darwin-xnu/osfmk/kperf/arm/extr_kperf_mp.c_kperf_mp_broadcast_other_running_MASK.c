
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct kperf_timer {int pending_cpus; } ;
typedef TYPE_1__* processor_t ;
struct TYPE_6__ {int logical_cpu_max; } ;
struct TYPE_5__ {scalar_t__ state; scalar_t__ active_thread; } ;


 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ,int *,int *) ;
 TYPE_1__* FUNC_6 (int) ;
 int VAR_4 ;
 TYPE_2__ VAR_5 ;
 int VAR_6 ;

bool
FUNC_7(struct kperf_timer *VAR_7)
{
 int VAR_8 = FUNC_4();
 bool VAR_9 = 1;
 int VAR_10 = VAR_5.logical_cpu_max;


 for (int VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
  uint64_t VAR_12 = FUNC_0(1) << VAR_11;
  processor_t VAR_13 = FUNC_6(VAR_11);


  if (VAR_13 == VAR_0 ||
    VAR_13->state != VAR_1 ||
    VAR_13->active_thread == VAR_3)
  {
   continue;
  }

  if (VAR_11 == VAR_8) {
   VAR_9 = 0;
   continue;
  }


  uint64_t VAR_14 = FUNC_2(
    &VAR_7->pending_cpus, VAR_12, VAR_6);
  if (VAR_14 & VAR_12)
  {




   continue;
  }

  FUNC_5(FUNC_3(VAR_11), VAR_2, ((void*)0), ((void*)0));
 }

 return VAR_9;
}

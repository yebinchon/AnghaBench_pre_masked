
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef TYPE_1__* thread_t ;
typedef scalar_t__ task_t ;
typedef int int32_t ;
typedef int boolean_t ;
struct TYPE_6__ {int * latency_tier_rate_limited; int * latency_qos_abstime_max; int * latency_qos_scale; } ;
struct TYPE_5__ {scalar_t__ task; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 TYPE_3__ VAR_4 ;

__attribute__((used)) static boolean_t FUNC_2(thread_t VAR_5, int32_t *VAR_6, uint64_t *VAR_7, boolean_t *VAR_8) {
 uint32_t VAR_9;
 boolean_t VAR_10 = VAR_0;
 task_t VAR_11 = VAR_5->task;

 if (VAR_11) {
  VAR_9 = FUNC_1(VAR_5, VAR_2);

  FUNC_0(VAR_9 <= VAR_1);

  if (VAR_9) {
   *VAR_6 = VAR_4.latency_qos_scale[VAR_9 - 1];
   *VAR_7 = VAR_4.latency_qos_abstime_max[VAR_9 - 1];
   *VAR_8 = VAR_4.latency_tier_rate_limited[VAR_9 - 1];
   VAR_10 = VAR_3;
  }
 }
 return VAR_10;
}

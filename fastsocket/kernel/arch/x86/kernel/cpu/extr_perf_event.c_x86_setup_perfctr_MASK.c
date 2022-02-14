
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef long long u64 ;
struct perf_event_attr {scalar_t__ type; scalar_t__ config; int exclude_kernel; int freq; } ;
struct hw_perf_event {int sample_period; int last_period; long long config; int period_left; } ;
struct perf_event {struct hw_perf_event hw; struct perf_event_attr attr; } ;
struct TYPE_2__ {int max_period; scalar_t__ max_events; long long (* event_map ) (scalar_t__) ;int bts_active; int apic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct perf_event*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct hw_perf_event*,struct perf_event*) ;
 long long FUNC_3 (scalar_t__) ;
 TYPE_1__ VAR_6 ;

int FUNC_4(struct perf_event *VAR_7)
{
 struct perf_event_attr *VAR_8 = &VAR_7->attr;
 struct hw_perf_event *VAR_9 = &VAR_7->hw;
 u64 VAR_10;

 if (!FUNC_0(VAR_7)) {
  VAR_9->sample_period = VAR_6.max_period;
  VAR_9->last_period = VAR_9->sample_period;
  FUNC_1(&VAR_9->period_left, VAR_9->sample_period);
 } else {






  if (!VAR_6.apic)
   return -VAR_2;
 }





 if (VAR_8->type == VAR_5)
  return 0;

 if (VAR_8->type == VAR_4)
  return FUNC_2(VAR_9, VAR_7);

 if (VAR_8->config >= VAR_6.max_events)
  return -VAR_0;




 VAR_10 = VAR_6.event_map(VAR_8->config);

 if (VAR_10 == 0)
  return -VAR_1;

 if (VAR_10 == -1LL)
  return -VAR_0;




 if (VAR_8->config == VAR_3 &&
     !VAR_8->freq && VAR_9->sample_period == 1) {

  if (!VAR_6.bts_active)
   return -VAR_2;


  if (!VAR_8->exclude_kernel)
   return -VAR_2;
 }

 VAR_9->config |= VAR_10;

 return 0;
}

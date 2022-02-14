
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct perf_event_map {int pic_mask; int encoding; } ;
struct perf_event_attr {scalar_t__ type; scalar_t__ config; int exclude_hv; int exclude_kernel; int exclude_user; } ;
struct hw_perf_event {unsigned long event_base; int config; int idx; scalar_t__ sample_period; int period_left; scalar_t__ last_period; int config_base; } ;
struct perf_event {int destroy; struct perf_event* group_leader; struct hw_perf_event hw; struct perf_event_attr attr; } ;
struct TYPE_2__ {scalar_t__ max_events; int lower_shift; int upper_shift; int hv_bit; int irq_bit; struct perf_event_map* (* event_map ) (scalar_t__) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct perf_event_map const*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct perf_event_map const*) ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct perf_event**,int,int) ;
 int FUNC_5 (struct perf_event*,scalar_t__,struct perf_event**,unsigned long*) ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned long FUNC_6 (struct perf_event_map const*) ;
 int FUNC_7 () ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_8 (unsigned long*,int) ;
 struct perf_event_map* FUNC_9 (scalar_t__) ;
 TYPE_1__* VAR_15 ;
 struct perf_event_map* FUNC_10 (scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct perf_event *VAR_16)
{
 struct perf_event_attr *VAR_17 = &VAR_16->attr;
 struct perf_event *VAR_18[VAR_3];
 struct hw_perf_event *VAR_19 = &VAR_16->hw;
 unsigned long VAR_20[VAR_3];
 const struct perf_event_map *VAR_21;
 u64 VAR_22;
 int VAR_23;

 if (FUNC_3(&VAR_13) < 0)
  return -VAR_1;

 if (VAR_17->type == VAR_7) {
  if (VAR_17->config >= VAR_15->max_events)
   return -VAR_0;
  VAR_21 = VAR_15->event_map(VAR_17->config);
 } else if (VAR_17->type == VAR_8) {
  VAR_21 = FUNC_9(VAR_17->config);
  if (FUNC_0(VAR_21))
   return FUNC_1(VAR_21);
 } else
  return -VAR_2;





 VAR_19->config_base = VAR_15->irq_bit;
 if (!VAR_17->exclude_user)
  VAR_19->config_base |= VAR_6;
 if (!VAR_17->exclude_kernel)
  VAR_19->config_base |= VAR_5;
 if (!VAR_17->exclude_hv)
  VAR_19->config_base |= VAR_15->hv_bit;

 VAR_19->event_base = FUNC_6(VAR_21);

 VAR_22 = VAR_21->encoding;

 VAR_23 = 0;
 if (VAR_16->group_leader != VAR_16) {
  VAR_23 = FUNC_5(VAR_16->group_leader,
       VAR_14 - 1,
       VAR_18, VAR_20);
  if (VAR_23 < 0)
   return -VAR_0;
 }
 VAR_20[VAR_23] = VAR_19->event_base;
 VAR_18[VAR_23] = VAR_16;

 if (FUNC_4(VAR_18, VAR_23, 1))
  return -VAR_0;

 if (FUNC_8(VAR_20, VAR_23 + 1))
  return -VAR_0;




 FUNC_7();
 VAR_16->destroy = VAR_12;

 if (!VAR_19->sample_period) {
  VAR_19->sample_period = VAR_4;
  VAR_19->last_period = VAR_19->sample_period;
  FUNC_2(&VAR_19->period_left, VAR_19->sample_period);
 }

 if (VAR_21->pic_mask & VAR_10) {
  VAR_19->idx = VAR_11;
  VAR_22 <<= VAR_15->upper_shift;
 } else {
  VAR_19->idx = VAR_9;
  VAR_22 <<= VAR_15->lower_shift;
 }

 VAR_19->config |= VAR_22;
 return 0;
}

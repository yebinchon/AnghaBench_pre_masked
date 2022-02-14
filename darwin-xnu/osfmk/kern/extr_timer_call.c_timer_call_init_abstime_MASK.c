
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef void* uint32_t ;
struct TYPE_4__ {int * latency_tier_rate_limited; int * latency_qos_ns_max; int * latency_qos_scale; int timer_coalesce_ts_ns_max; int timer_coalesce_fp_ns_max; int timer_coalesce_kt_ns_max; int timer_coalesce_bg_ns_max; int timer_coalesce_rt_ns_max; int timer_coalesce_ts_shift; int timer_coalesce_fp_shift; int timer_coalesce_kt_shift; int timer_coalesce_bg_shift; int timer_coalesce_rt_shift; int timer_resort_threshold_ns; int interrupt_timer_coalescing_ilat_threshold_ns; int idle_entry_timer_processing_hdeadline_threshold_ns; } ;
typedef TYPE_1__ timer_coalescing_priority_params_ns_t ;
struct TYPE_5__ {int * latency_tier_rate_limited; scalar_t__* latency_qos_abstime_max; int * latency_qos_scale; scalar_t__ timer_coalesce_ts_abstime_max; scalar_t__ timer_coalesce_fp_abstime_max; scalar_t__ timer_coalesce_kt_abstime_max; scalar_t__ timer_coalesce_bg_abstime_max; scalar_t__ timer_coalesce_rt_abstime_max; int timer_coalesce_ts_shift; int timer_coalesce_fp_shift; int timer_coalesce_kt_shift; int timer_coalesce_bg_shift; int timer_coalesce_rt_shift; void* timer_resort_threshold_abstime; void* interrupt_timer_coalescing_ilat_threshold_abstime; void* idle_entry_timer_processing_hdeadline_threshold_abstime; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__*) ;
 scalar_t__ VAR_2 ;
 TYPE_3__ VAR_3 ;
 TYPE_1__* FUNC_1 () ;

__attribute__((used)) static void
FUNC_2(void)
{
 int VAR_4;
 uint64_t VAR_5;
 timer_coalescing_priority_params_ns_t * VAR_6 = FUNC_1();
 FUNC_0(VAR_1, &VAR_2);
 FUNC_0(VAR_6->idle_entry_timer_processing_hdeadline_threshold_ns, &VAR_5);
 VAR_3.idle_entry_timer_processing_hdeadline_threshold_abstime = (uint32_t)VAR_5;
 FUNC_0(VAR_6->interrupt_timer_coalescing_ilat_threshold_ns, &VAR_5);
 VAR_3.interrupt_timer_coalescing_ilat_threshold_abstime = (uint32_t)VAR_5;
 FUNC_0(VAR_6->timer_resort_threshold_ns, &VAR_5);
 VAR_3.timer_resort_threshold_abstime = (uint32_t)VAR_5;
 VAR_3.timer_coalesce_rt_shift = VAR_6->timer_coalesce_rt_shift;
 VAR_3.timer_coalesce_bg_shift = VAR_6->timer_coalesce_bg_shift;
 VAR_3.timer_coalesce_kt_shift = VAR_6->timer_coalesce_kt_shift;
 VAR_3.timer_coalesce_fp_shift = VAR_6->timer_coalesce_fp_shift;
 VAR_3.timer_coalesce_ts_shift = VAR_6->timer_coalesce_ts_shift;

 FUNC_0(VAR_6->timer_coalesce_rt_ns_max,
     &VAR_3.timer_coalesce_rt_abstime_max);
 FUNC_0(VAR_6->timer_coalesce_bg_ns_max,
     &VAR_3.timer_coalesce_bg_abstime_max);
 FUNC_0(VAR_6->timer_coalesce_kt_ns_max,
     &VAR_3.timer_coalesce_kt_abstime_max);
 FUNC_0(VAR_6->timer_coalesce_fp_ns_max,
     &VAR_3.timer_coalesce_fp_abstime_max);
 FUNC_0(VAR_6->timer_coalesce_ts_ns_max,
     &VAR_3.timer_coalesce_ts_abstime_max);

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_3.latency_qos_scale[VAR_4] = VAR_6->latency_qos_scale[VAR_4];
  FUNC_0(VAR_6->latency_qos_ns_max[VAR_4],
      &VAR_3.latency_qos_abstime_max[VAR_4]);
  VAR_3.latency_tier_rate_limited[VAR_4] = VAR_6->latency_tier_rate_limited[VAR_4];
 }
}

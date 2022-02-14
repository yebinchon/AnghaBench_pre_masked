
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef TYPE_1__* thread_t ;
typedef int int32_t ;
typedef scalar_t__ int16_t ;
typedef int boolean_t ;
struct TYPE_7__ {int timer_coalesce_rt_shift; scalar_t__ timer_coalesce_rt_abstime_max; scalar_t__ timer_coalesce_bg_abstime_max; int timer_coalesce_bg_shift; int timer_coalesce_kt_shift; scalar_t__ timer_coalesce_kt_abstime_max; int timer_coalesce_fp_shift; scalar_t__ timer_coalesce_fp_abstime_max; int timer_coalesce_ts_shift; scalar_t__ timer_coalesce_ts_abstime_max; } ;
struct TYPE_6__ {scalar_t__ sched_pri; scalar_t__ sched_mode; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 TYPE_4__ VAR_16 ;
 scalar_t__ FUNC_2 (TYPE_1__*,int*,scalar_t__*,int *) ;
 int VAR_17 ;

__attribute__((used)) static void
FUNC_3(thread_t VAR_18, int32_t VAR_19, int32_t *VAR_20, uint64_t *VAR_21, boolean_t *VAR_22) {
 int16_t VAR_23 = VAR_18->sched_pri;
 if ((VAR_19 & VAR_9) != 0) {
  if (VAR_23 >= VAR_0 ||
  VAR_19 == VAR_8) {
   *VAR_20 = VAR_16.timer_coalesce_rt_shift;
   *VAR_21 = VAR_16.timer_coalesce_rt_abstime_max;
   FUNC_0(VAR_15);
  } else if (FUNC_1(VAR_18, VAR_3) ||
  (VAR_19 == VAR_7)) {

   if (FUNC_2(VAR_18, VAR_20, VAR_21, VAR_22)) {
    if (*VAR_21 > VAR_16.timer_coalesce_bg_abstime_max) {
     return;
    } else {
     *VAR_22 = VAR_1;
    }
   }
   *VAR_20 = VAR_16.timer_coalesce_bg_shift;
   *VAR_21 = VAR_16.timer_coalesce_bg_abstime_max;
   FUNC_0(VAR_10);
  } else if (VAR_23 >= VAR_2) {
   *VAR_20 = VAR_16.timer_coalesce_kt_shift;
   *VAR_21 = VAR_16.timer_coalesce_kt_abstime_max;
   FUNC_0(VAR_12);
  } else if (VAR_18->sched_mode == VAR_4) {
   *VAR_20 = VAR_16.timer_coalesce_fp_shift;
   *VAR_21 = VAR_16.timer_coalesce_fp_abstime_max;
   FUNC_0(VAR_11);
  } else if (FUNC_2(VAR_18, VAR_20, VAR_21, VAR_22)) {
   FUNC_0(VAR_14);
  } else if (VAR_18->sched_mode == VAR_5) {
   *VAR_20 = VAR_16.timer_coalesce_ts_shift;
   *VAR_21 = VAR_16.timer_coalesce_ts_abstime_max;
   FUNC_0(VAR_17);
  } else {
   FUNC_0(VAR_13);
  }
 } else if (VAR_19 == VAR_6) {
  *VAR_20 = VAR_16.timer_coalesce_bg_shift;
  *VAR_21 = VAR_16.timer_coalesce_bg_abstime_max;
  FUNC_0(VAR_10);
 } else {
  *VAR_20 = VAR_16.timer_coalesce_kt_shift;
  *VAR_21 = VAR_16.timer_coalesce_kt_abstime_max;
  FUNC_0(VAR_12);
 }
}

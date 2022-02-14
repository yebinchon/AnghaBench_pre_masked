
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct perf_event {int dummy; } ;
struct hw_perf_event {int sample_period; int last_period; int prev_count; int period_left; } ;
typedef int s64 ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct perf_event*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct perf_event *VAR_1,
           struct hw_perf_event *VAR_2, int VAR_3)
{
 s64 VAR_4 = FUNC_0(&VAR_2->period_left);
 s64 VAR_5 = VAR_2->sample_period;
 int VAR_6 = 0;

 if (FUNC_3(VAR_4 <= -VAR_5)) {
  VAR_4 = VAR_5;
  FUNC_1(&VAR_2->period_left, VAR_4);
  VAR_2->last_period = VAR_5;
  VAR_6 = 1;
 }

 if (FUNC_3(VAR_4 <= 0)) {
  VAR_4 += VAR_5;
  FUNC_1(&VAR_2->period_left, VAR_4);
  VAR_2->last_period = VAR_5;
  VAR_6 = 1;
 }
 if (VAR_4 > VAR_0)
  VAR_4 = VAR_0;

 FUNC_1(&VAR_2->prev_count, (u64)-VAR_4);

 FUNC_4(VAR_3, (u64)(-VAR_4) & 0xffffffff);

 FUNC_2(VAR_1);

 return VAR_6;
}

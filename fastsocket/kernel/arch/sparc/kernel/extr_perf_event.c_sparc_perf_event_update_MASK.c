
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct perf_event {int count; } ;
struct hw_perf_event {int period_left; int prev_count; } ;
typedef int s64 ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int) ;

__attribute__((used)) static u64 FUNC_5(struct perf_event *VAR_0,
       struct hw_perf_event *VAR_1, int VAR_2)
{
 int VAR_3 = 64 - 32;
 u64 VAR_4, VAR_5;
 s64 VAR_6;

again:
 VAR_4 = FUNC_2(&VAR_1->prev_count);
 VAR_5 = FUNC_4(VAR_2);

 if (FUNC_1(&VAR_1->prev_count, VAR_4,
        VAR_5) != VAR_4)
  goto again;

 VAR_6 = (VAR_5 << VAR_3) - (VAR_4 << VAR_3);
 VAR_6 >>= VAR_3;

 FUNC_0(VAR_6, &VAR_0->count);
 FUNC_3(VAR_6, &VAR_1->period_left);

 return VAR_5;
}

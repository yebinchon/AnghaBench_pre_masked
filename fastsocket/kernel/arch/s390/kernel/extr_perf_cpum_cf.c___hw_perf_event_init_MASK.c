
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u64 ;
struct perf_event_attr {int type; size_t config; int exclude_user; int exclude_kernel; int exclude_hv; } ;
struct hw_perf_event {size_t config; int config_base; } ;
struct perf_event {int destroy; struct hw_perf_event hw; struct perf_event_attr attr; } ;


 size_t FUNC_0 (size_t*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;


 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 size_t* VAR_5 ;
 size_t* VAR_6 ;
 int FUNC_4 (size_t) ;
 int VAR_7 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (struct hw_perf_event*) ;
 int FUNC_9 (struct hw_perf_event*) ;
 int FUNC_10 (struct hw_perf_event*) ;

__attribute__((used)) static int FUNC_11(struct perf_event *VAR_10)
{
 struct perf_event_attr *VAR_11 = &VAR_10->attr;
 struct hw_perf_event *VAR_12 = &VAR_10->hw;
 int VAR_13;
 u64 VAR_14;

 switch (VAR_11->type) {
 case 128:


  if (VAR_11->exclude_kernel || VAR_11->exclude_user ||
      VAR_11->exclude_hv)
   return -VAR_3;
  VAR_14 = VAR_11->config;
  break;

 case 129:
  VAR_14 = VAR_11->config;

  if (!VAR_11->exclude_user && VAR_11->exclude_kernel) {
   if (VAR_14 >= FUNC_0(VAR_6))
    return -VAR_3;
   VAR_14 = VAR_6[VAR_14];


  } else if (!VAR_11->exclude_kernel && VAR_11->exclude_user) {
   return -VAR_3;


  } else {
   if (VAR_14 >= FUNC_0(VAR_5))
    return -VAR_3;
   VAR_14 = VAR_5[VAR_14];
  }
  break;

 default:
  return -VAR_2;
 }

 if (VAR_14 == -1)
  return -VAR_2;

 if (VAR_14 >= VAR_4)
  return -VAR_1;






 VAR_12->config = VAR_14;
 VAR_12->config_base = FUNC_4(VAR_14);






 VAR_13 = FUNC_10(VAR_12);
 if (VAR_13)
  return VAR_13;


 if (!FUNC_2(&VAR_8)) {
  FUNC_5(&VAR_9);
  if (FUNC_3(&VAR_8) == 0 && FUNC_7())
   VAR_13 = -VAR_0;
  else
   FUNC_1(&VAR_8);
  FUNC_6(&VAR_9);
 }
 VAR_10->destroy = VAR_7;


 VAR_13 = FUNC_8(VAR_12);
 if (!VAR_13)
  VAR_13 = FUNC_9(VAR_12);

 return VAR_13;
}

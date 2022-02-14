
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_perf_event {int state; int idx; scalar_t__ last_tag; } ;
struct perf_event {struct hw_perf_event hw; } ;
struct intel_uncore_box {int n_events; scalar_t__* tags; struct perf_event** event_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct intel_uncore_box*,int*,int) ;
 int FUNC_1 (struct intel_uncore_box*,struct perf_event*,int) ;
 int FUNC_2 (struct intel_uncore_box*,struct perf_event*,int) ;
 struct intel_uncore_box* FUNC_3 (struct perf_event*) ;
 int FUNC_4 (struct perf_event*,int ) ;
 int FUNC_5 (struct perf_event*,int ) ;

__attribute__((used)) static int FUNC_6(struct perf_event *VAR_7, int VAR_8)
{
 struct intel_uncore_box *VAR_9 = FUNC_3(VAR_7);
 struct hw_perf_event *VAR_10 = &VAR_7->hw;
 int VAR_11[VAR_6];
 int VAR_12, VAR_13, VAR_14;

 if (!VAR_9)
  return -VAR_0;

 VAR_14 = VAR_13 = FUNC_2(VAR_9, VAR_7, 0);
 if (VAR_14 < 0)
  return VAR_14;

 VAR_10->state = VAR_5 | VAR_4;
 if (!(VAR_8 & VAR_1))
  VAR_10->state |= VAR_3;

 VAR_14 = FUNC_0(VAR_9, VAR_11, VAR_13);
 if (VAR_14)
  return VAR_14;


 for (VAR_12 = 0; VAR_12 < VAR_9->n_events; VAR_12++) {
  VAR_7 = VAR_9->event_list[VAR_12];
  VAR_10 = &VAR_7->hw;

  if (VAR_10->idx == VAR_11[VAR_12] &&
   VAR_10->last_tag == VAR_9->tags[VAR_11[VAR_12]])
   continue;




  if (VAR_10->state & VAR_4)
   VAR_10->state |= VAR_3;

  FUNC_5(VAR_7, VAR_2);
 }


 for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++) {
  VAR_7 = VAR_9->event_list[VAR_12];
  VAR_10 = &VAR_7->hw;

  if (VAR_10->idx != VAR_11[VAR_12] ||
   VAR_10->last_tag != VAR_9->tags[VAR_11[VAR_12]])
   FUNC_1(VAR_9, VAR_7, VAR_11[VAR_12]);
  else if (VAR_12 < VAR_9->n_events)
   continue;

  if (VAR_10->state & VAR_3)
   continue;

  FUNC_4(VAR_7, 0);
 }
 VAR_9->n_events = VAR_13;

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct intel_uncore_box {TYPE_1__** event_list; } ;
struct hw_perf_event {int idx; } ;
struct event_constraint {unsigned long* idxmsk; int weight; } ;
struct TYPE_3__ {struct hw_perf_event hw; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,unsigned long*) ;
 int FUNC_2 (unsigned long*,int) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (struct event_constraint**,int,int,int,int*) ;
 scalar_t__ FUNC_6 (int,unsigned long*) ;
 struct event_constraint* FUNC_7 (struct intel_uncore_box*,TYPE_1__*) ;
 int FUNC_8 (struct intel_uncore_box*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_9(struct intel_uncore_box *VAR_2, int VAR_3[], int VAR_4)
{
 unsigned long VAR_5[FUNC_0(VAR_1)];
 struct event_constraint *VAR_6, *VAR_7[VAR_1];
 int VAR_8, VAR_9, VAR_10, VAR_11 = 0;
 struct hw_perf_event *VAR_12;

 FUNC_2(VAR_5, VAR_1);

 for (VAR_8 = 0, VAR_9 = VAR_1, VAR_10 = 0; VAR_8 < VAR_4; VAR_8++) {
  VAR_6 = FUNC_7(VAR_2, VAR_2->event_list[VAR_8]);
  VAR_7[VAR_8] = VAR_6;
  VAR_9 = FUNC_4(VAR_9, VAR_6->weight);
  VAR_10 = FUNC_3(VAR_10, VAR_6->weight);
 }


 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  VAR_12 = &VAR_2->event_list[VAR_8]->hw;
  VAR_6 = VAR_7[VAR_8];


  if (VAR_12->idx == -1)
   break;


  if (!FUNC_6(VAR_12->idx, VAR_6->idxmsk))
   break;


  if (FUNC_6(VAR_12->idx, VAR_5))
   break;

  FUNC_1(VAR_12->idx, VAR_5);
  if (VAR_3)
   VAR_3[VAR_8] = VAR_12->idx;
 }

 if (VAR_8 != VAR_4)
  VAR_11 = FUNC_5(VAR_7, VAR_4, VAR_9, VAR_10, VAR_3);

 if (!VAR_3 || VAR_11) {
  for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
   FUNC_8(VAR_2, VAR_2->event_list[VAR_8]);
 }
 return VAR_11 ? -VAR_0 : 0;
}

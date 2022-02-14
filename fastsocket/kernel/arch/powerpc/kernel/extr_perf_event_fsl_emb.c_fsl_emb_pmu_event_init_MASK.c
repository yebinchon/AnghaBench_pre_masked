
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u64 ;
typedef int u32 ;
struct TYPE_5__ {int config; int idx; int config_base; int last_period; int period_left; int sample_period; } ;
struct TYPE_4__ {int type; size_t config; scalar_t__ exclude_idle; scalar_t__ exclude_kernel; scalar_t__ exclude_user; } ;
struct perf_event {int destroy; TYPE_2__ hw; TYPE_1__ attr; struct perf_event* group_leader; } ;
struct TYPE_6__ {size_t n_generic; size_t* generic_events; int (* xlate_event ) (size_t) ;int n_restricted; scalar_t__ n_counter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;



 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct perf_event*,scalar_t__,struct perf_event**) ;
 int FUNC_4 (size_t,size_t*) ;
 int VAR_15 ;
 int FUNC_5 () ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 TYPE_3__* VAR_19 ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (size_t) ;

__attribute__((used)) static int FUNC_12(struct perf_event *VAR_20)
{
 u64 VAR_21;
 struct perf_event *VAR_22[VAR_7];
 int VAR_23;
 int VAR_24;
 int VAR_25;
 int VAR_26;

 switch (VAR_20->attr.type) {
 case 130:
  VAR_21 = VAR_20->attr.config;
  if (VAR_21 >= VAR_19->n_generic || VAR_19->generic_events[VAR_21] == 0)
   return -VAR_4;
  VAR_21 = VAR_19->generic_events[VAR_21];
  break;

 case 129:
  VAR_24 = FUNC_4(VAR_20->attr.config, &VAR_21);
  if (VAR_24)
   return VAR_24;
  break;

 case 128:
  VAR_21 = VAR_20->attr.config;
  break;

 default:
  return -VAR_2;
 }

 VAR_20->hw.config = VAR_19->xlate_event(VAR_21);
 if (!(VAR_20->hw.config & VAR_6))
  return -VAR_1;






 VAR_23 = 0;
 if (VAR_20->group_leader != VAR_20) {
  VAR_23 = FUNC_3(VAR_20->group_leader,
                     VAR_19->n_counter - 1, VAR_22);
  if (VAR_23 < 0)
   return -VAR_1;
 }

 if (VAR_20->hw.config & VAR_5) {
  VAR_25 = 0;
  for (VAR_26 = 0; VAR_26 < VAR_23; VAR_26++) {
   if (VAR_22[VAR_26]->hw.config & VAR_5)
    VAR_25++;
  }

  if (VAR_25 >= VAR_19->n_restricted)
   return -VAR_1;
 }

 VAR_20->hw.idx = -1;

 VAR_20->hw.config_base = VAR_9 | VAR_11 |
                         (u32)((VAR_21 << 16) & VAR_10);

 if (VAR_20->attr.exclude_user)
  VAR_20->hw.config_base |= VAR_13;
 if (VAR_20->attr.exclude_kernel)
  VAR_20->hw.config_base |= VAR_12;
 if (VAR_20->attr.exclude_idle)
  return -VAR_3;

 VAR_20->hw.last_period = VAR_20->hw.sample_period;
 FUNC_6(&VAR_20->hw.period_left, VAR_20->hw.last_period);







 VAR_24 = 0;
 if (!FUNC_1(&VAR_16)) {
  FUNC_8(&VAR_18);
  if (FUNC_2(&VAR_16) == 0 &&
      FUNC_10(VAR_17))
   VAR_24 = -VAR_0;
  else
   FUNC_0(&VAR_16);
  FUNC_9(&VAR_18);

  FUNC_7(VAR_14, VAR_8);
  FUNC_5();
 }
 VAR_20->destroy = VAR_15;

 return VAR_24;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct pulse_event {scalar_t__ ts; int freq; } ;
struct pri_sequence {int count_falses; int count; int pri; } ;
struct pri_detector {TYPE_1__* rs; struct pri_sequence* (* add_pulse ) (struct pri_detector*,struct pulse_event*) ;} ;
struct dfs_pattern_detector {scalar_t__ region; scalar_t__ last_pulse_ts; size_t num_radar_types; int ah; } ;
struct channel_detector {struct pri_detector** detectors; } ;
struct TYPE_2__ {int type_id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,char*,int ,int ,int ,int ,int ) ;
 struct channel_detector* FUNC_2 (struct dfs_pattern_detector*,int ) ;
 int FUNC_3 (struct dfs_pattern_detector*,struct channel_detector*) ;
 int FUNC_4 (struct dfs_pattern_detector*) ;
 struct pri_sequence* FUNC_5 (struct pri_detector*,struct pulse_event*) ;

__attribute__((used)) static bool
FUNC_6(struct dfs_pattern_detector *VAR_2, struct pulse_event *VAR_3)
{
 u32 VAR_4;
 struct channel_detector *VAR_5;





 if (VAR_2->region == VAR_1)
  return 1;

 VAR_5 = FUNC_2(VAR_2, VAR_3->freq);
 if (VAR_5 == ((void*)0))
  return 0;

 VAR_2->last_pulse_ts = VAR_3->ts;

 if (VAR_3->ts < VAR_2->last_pulse_ts)
  FUNC_4(VAR_2);


 for (VAR_4 = 0; VAR_4 < VAR_2->num_radar_types; VAR_4++) {
  struct pri_detector *VAR_6 = VAR_5->detectors[VAR_4];
  struct pri_sequence *VAR_7 = VAR_6->add_pulse(VAR_6, VAR_3);
  if (VAR_7 != ((void*)0)) {
   FUNC_1(FUNC_0(VAR_2->ah), VAR_0,
    "DFS: radar found on freq=%d: id=%d, pri=%d, "
    "count=%d, count_false=%d\n",
    VAR_3->freq, VAR_6->rs->type_id,
    VAR_7->pri, VAR_7->count, VAR_7->count_falses);
   FUNC_3(VAR_2, VAR_5);
   return 1;
  }
 }
 return 0;
}

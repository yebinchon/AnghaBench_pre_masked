
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ctl_arena_stats_t ;
struct TYPE_2__ {int narenas; int * arenas; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 int * FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *) ;
 TYPE_1__ VAR_0 ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,int ,int) ;

__attribute__((used)) static bool
FUNC_6(void)
{
 ctl_arena_stats_t *VAR_1;


 if (FUNC_2(VAR_0.narenas) == ((void*)0))
  return (1);


 VAR_1 = (ctl_arena_stats_t *)FUNC_1((VAR_0.narenas + 2) *
     sizeof(ctl_arena_stats_t));
 if (VAR_1 == ((void*)0))
  return (1);


 FUNC_4(VAR_1, VAR_0.arenas, (VAR_0.narenas + 1) *
     sizeof(ctl_arena_stats_t));
 FUNC_5(&VAR_1[VAR_0.narenas + 1], 0, sizeof(ctl_arena_stats_t));
 if (FUNC_3(&VAR_1[VAR_0.narenas + 1])) {
  FUNC_0(VAR_1);
  return (1);
 }

 {
  ctl_arena_stats_t VAR_2;
  FUNC_4(&VAR_2, &VAR_1[VAR_0.narenas],
      sizeof(ctl_arena_stats_t));
  FUNC_4(&VAR_1[VAR_0.narenas],
      &VAR_1[VAR_0.narenas + 1], sizeof(ctl_arena_stats_t));
  FUNC_4(&VAR_1[VAR_0.narenas + 1], &VAR_2,
      sizeof(ctl_arena_stats_t));
 }
 FUNC_0(VAR_0.arenas);
 VAR_0.arenas = VAR_1;
 VAR_0.narenas++;

 return (0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int initialized; struct TYPE_6__* hstats; struct TYPE_6__* lstats; } ;
typedef TYPE_1__ ctl_arena_stats_t ;
struct TYPE_7__ {int narenas; TYPE_1__* arenas; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 () ;
 TYPE_3__ VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;
 int FUNC_7 () ;

__attribute__((used)) static bool
FUNC_8(void)
{
 bool VAR_5;

 FUNC_4(&VAR_3);
 if (!VAR_2) {




  VAR_4.narenas = FUNC_7();
  VAR_4.arenas = (ctl_arena_stats_t *)FUNC_1(
      (VAR_4.narenas + 1) * sizeof(ctl_arena_stats_t));
  if (VAR_4.arenas == ((void*)0)) {
   VAR_5 = 1;
   goto label_return;
  }
  FUNC_6(VAR_4.arenas, 0, (VAR_4.narenas + 1) *
      sizeof(ctl_arena_stats_t));






  if (VAR_0) {
   unsigned VAR_6;
   for (VAR_6 = 0; VAR_6 <= VAR_4.narenas; VAR_6++) {
    if (FUNC_2(&VAR_4.arenas[VAR_6])) {
     unsigned VAR_7;
     for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
      FUNC_0(
          VAR_4.arenas[VAR_7].lstats);
      FUNC_0(
          VAR_4.arenas[VAR_7].hstats);
     }
     FUNC_0(VAR_4.arenas);
     VAR_4.arenas = ((void*)0);
     VAR_5 = 1;
     goto label_return;
    }
   }
  }
  VAR_4.arenas[VAR_4.narenas].initialized = 1;

  VAR_1 = 0;
  FUNC_3();
  VAR_2 = 1;
 }

 VAR_5 = 0;
label_return:
 FUNC_5(&VAR_3);
 return (VAR_5);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* activategoalheap; TYPE_2__* activatestack; } ;
typedef TYPE_1__ bot_state_t ;
typedef int bot_activategoal_t ;
struct TYPE_5__ {int inuse; float justused_time; struct TYPE_5__* next; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,int *,int) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_2(bot_state_t *VAR_3, bot_activategoal_t *VAR_4) {
 int VAR_5, VAR_6;
 float VAR_7;

 VAR_6 = -1;
 VAR_7 = FUNC_0() + 9999;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (!VAR_3->activategoalheap[VAR_5].inuse) {
   if (VAR_3->activategoalheap[VAR_5].justused_time < VAR_7) {
    VAR_7 = VAR_3->activategoalheap[VAR_5].justused_time;
    VAR_6 = VAR_5;
   }
  }
 }
 if (VAR_6 != -1) {
  FUNC_1(&VAR_3->activategoalheap[VAR_6], VAR_4, sizeof(bot_activategoal_t));
  VAR_3->activategoalheap[VAR_6].inuse = VAR_2;
  VAR_3->activategoalheap[VAR_6].next = VAR_3->activatestack;
  VAR_3->activatestack = &VAR_3->activategoalheap[VAR_6];
  return VAR_2;
 }
 return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int goalstacktop; int * goalstack; } ;
typedef TYPE_1__ bot_goalstate_t ;
typedef int bot_goal_t ;
struct TYPE_5__ {int (* Print ) (int ,char*) ;} ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (int *,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_3 (int ,char*) ;

void FUNC_4(int VAR_3, bot_goal_t *VAR_4)
{
 bot_goalstate_t *VAR_5;

 VAR_5 = FUNC_1(VAR_3);
 if (!VAR_5) return;
 if (VAR_5->goalstacktop >= VAR_0-1)
 {
  VAR_2.Print(VAR_1, "goal heap overflow\n");
  FUNC_0(VAR_3);
  return;
 }
 VAR_5->goalstacktop++;
 FUNC_2(&VAR_5->goalstack[VAR_5->goalstacktop], VAR_4, sizeof(bot_goal_t));
}

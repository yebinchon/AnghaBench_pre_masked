
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ flags; scalar_t__ number; scalar_t__ iteminfo; scalar_t__ entitynum; int maxs; int mins; int origin; int areanum; } ;
struct TYPE_7__ {scalar_t__ reachedaltroutegoal_time; TYPE_2__ altroutegoal; } ;
typedef TYPE_1__ bot_state_t ;
typedef TYPE_2__ bot_goal_t ;
struct TYPE_9__ {int origin; int areanum; } ;
typedef TYPE_3__ aas_altroutegoal_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int,int,int) ;
 TYPE_3__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 () ;
 TYPE_3__* VAR_5 ;
 int VAR_6 ;

int FUNC_3(bot_state_t *VAR_7, int VAR_8) {
 aas_altroutegoal_t *VAR_9;
 bot_goal_t *VAR_10;
 int VAR_11, VAR_12;

 if (VAR_8 == VAR_0) {
  VAR_9 = VAR_5;
  VAR_11 = VAR_6;
 }
 else {
  VAR_9 = VAR_1;
  VAR_11 = VAR_2;
 }
 if (!VAR_11)
  return VAR_3;
 VAR_12 = (float) FUNC_2() * VAR_11;
 if (VAR_12 >= VAR_11)
  VAR_12 = VAR_11-1;
 VAR_10 = &VAR_7->altroutegoal;
 VAR_10->areanum = VAR_9[VAR_12].areanum;
 FUNC_0(VAR_9[VAR_12].origin, VAR_10->origin);
 FUNC_1(VAR_10->mins, -8, -8, -8);
 FUNC_1(VAR_10->maxs, 8, 8, 8);
 VAR_10->entitynum = 0;
 VAR_10->iteminfo = 0;
 VAR_10->number = 0;
 VAR_10->flags = 0;

 VAR_7->reachedaltroutegoal_time = 0;
 return VAR_4;
}

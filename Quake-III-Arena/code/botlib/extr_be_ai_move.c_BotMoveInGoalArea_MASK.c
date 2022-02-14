
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
struct TYPE_10__ {int moveflags; int lastorigin; scalar_t__* origin; int lastgoalareanum; scalar_t__ lastareanum; scalar_t__ lastreachnum; int client; } ;
typedef TYPE_1__ bot_movestate_t ;
struct TYPE_11__ {int flags; int ideal_viewangles; int movedir; int traveltype; } ;
typedef TYPE_2__ bot_moveresult_t ;
struct TYPE_12__ {int areanum; scalar_t__* origin; } ;
typedef TYPE_3__ bot_goal_t ;


 int FUNC_0 (TYPE_1__*,scalar_t__*,int ,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,scalar_t__*,float) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (scalar_t__*,int ) ;
 int FUNC_4 (scalar_t__*,int ) ;
 float FUNC_5 (scalar_t__*) ;
 int VAR_4 ;

bot_moveresult_t FUNC_6(bot_movestate_t *VAR_5, bot_goal_t *VAR_6)
{
 bot_moveresult_t VAR_7;
 vec3_t VAR_8;
 float VAR_9, VAR_10;






 FUNC_1(&VAR_7);

 VAR_8[0] = VAR_6->origin[0] - VAR_5->origin[0];
 VAR_8[1] = VAR_6->origin[1] - VAR_5->origin[1];
 if (VAR_5->moveflags & VAR_0)
 {
  VAR_8[2] = VAR_6->origin[2] - VAR_5->origin[2];
  VAR_7.traveltype = VAR_2;
 }
 else
 {
  VAR_8[2] = 0;
  VAR_7.traveltype = VAR_3;
 }

 VAR_9 = FUNC_5(VAR_8);
 if (VAR_9 > 100) VAR_9 = 100;
 VAR_10 = 400 - (400 - 4 * VAR_9);
 if (VAR_10 < 10) VAR_10 = 0;

 FUNC_0(VAR_5, VAR_8, VAR_4, &VAR_7);

 FUNC_2(VAR_5->client, VAR_8, VAR_10);
 FUNC_4(VAR_8, VAR_7.movedir);

 if (VAR_5->moveflags & VAR_0)
 {
  FUNC_3(VAR_8, VAR_7.ideal_viewangles);
  VAR_7.flags |= VAR_1;
 }



 VAR_5->lastreachnum = 0;
 VAR_5->lastareanum = 0;
 VAR_5->lastgoalareanum = VAR_6->areanum;
 FUNC_4(VAR_5->origin, VAR_5->lastorigin);

 return VAR_7;
}

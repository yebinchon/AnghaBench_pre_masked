
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
struct TYPE_9__ {int client; int lastreachnum; int jumpreach; scalar_t__* origin; int * viewangles; } ;
typedef TYPE_1__ bot_movestate_t ;
struct TYPE_10__ {int* ideal_viewangles; int weapon; int movedir; int flags; } ;
typedef TYPE_2__ bot_moveresult_t ;
struct TYPE_11__ {scalar_t__* end; scalar_t__* start; } ;
typedef TYPE_3__ aas_reachability_t ;
struct TYPE_12__ {scalar_t__ value; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__*,float) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_7 (scalar_t__*,int*) ;
 int FUNC_8 (scalar_t__*,int ) ;
 float FUNC_9 (scalar_t__*) ;
 int FUNC_10 (int ) ;
 TYPE_4__* VAR_3 ;

bot_moveresult_t FUNC_11(bot_movestate_t *VAR_4, aas_reachability_t *VAR_5)
{
 vec3_t VAR_6;
 float VAR_7, VAR_8;
 bot_moveresult_t VAR_9;


 FUNC_1(&VAR_9);

 VAR_6[0] = VAR_5->start[0] - VAR_4->origin[0];
 VAR_6[1] = VAR_5->start[1] - VAR_4->origin[1];
 VAR_6[2] = 0;

 VAR_7 = FUNC_9(VAR_6);

 FUNC_7(VAR_6, VAR_9.ideal_viewangles);

 VAR_9.ideal_viewangles[VAR_2] = 90;

 if (VAR_7 < 5 &&
   FUNC_10(FUNC_0(VAR_9.ideal_viewangles[0], VAR_4->viewangles[0])) < 5 &&
   FUNC_10(FUNC_0(VAR_9.ideal_viewangles[1], VAR_4->viewangles[1])) < 5)
 {

  VAR_6[0] = VAR_5->end[0] - VAR_4->origin[0];
  VAR_6[1] = VAR_5->end[1] - VAR_4->origin[1];
  VAR_6[2] = 0;
  FUNC_9(VAR_6);

  FUNC_3(VAR_4->client);
  FUNC_2(VAR_4->client);
  FUNC_4(VAR_4->client, VAR_6, 800);

  VAR_4->jumpreach = VAR_4->lastreachnum;
 }
 else
 {
  if (VAR_7 > 80) VAR_7 = 80;
  VAR_8 = 400 - (400 - 5 * VAR_7);
  FUNC_4(VAR_4->client, VAR_6, VAR_8);
 }

 FUNC_7(VAR_6, VAR_9.ideal_viewangles);

 VAR_9.ideal_viewangles[VAR_2] = 90;

 FUNC_6(VAR_4->client, VAR_9.ideal_viewangles);

 VAR_9.flags |= VAR_0;

 FUNC_5(VAR_4->client, (int) VAR_3->value);

 VAR_9.weapon = (int) VAR_3->value;
 VAR_9.flags |= VAR_1;

 FUNC_8(VAR_6, VAR_9.movedir);

 return VAR_9;
}

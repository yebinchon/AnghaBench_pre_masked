
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
struct TYPE_10__ {int moveflags; int client; int entitynum; scalar_t__* origin; } ;
typedef TYPE_1__ bot_movestate_t ;
struct TYPE_11__ {int movedir; } ;
typedef TYPE_2__ bot_moveresult_t ;
struct TYPE_12__ {int areanum; scalar_t__* end; scalar_t__* start; } ;
typedef TYPE_3__ aas_reachability_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,scalar_t__*,int ,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 float FUNC_3 (scalar_t__*,scalar_t__*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,scalar_t__*,float) ;
 int FUNC_6 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_7 (scalar_t__*,int ) ;
 float FUNC_8 (scalar_t__*) ;
 int VAR_2 ;

bot_moveresult_t FUNC_9(bot_movestate_t *VAR_3, aas_reachability_t *VAR_4)
{
 float VAR_5, VAR_6;
 vec3_t VAR_7;
 bot_moveresult_t VAR_8;

 FUNC_2(&VAR_8);

 VAR_7[0] = VAR_4->start[0] - VAR_3->origin[0];
 VAR_7[1] = VAR_4->start[1] - VAR_3->origin[1];
 VAR_7[2] = 0;
 VAR_5 = FUNC_8(VAR_7);

 FUNC_1(VAR_3, VAR_7, VAR_2, &VAR_8);

 if (VAR_5 < 10)
 {

  VAR_7[0] = VAR_4->end[0] - VAR_3->origin[0];
  VAR_7[1] = VAR_4->end[1] - VAR_3->origin[1];
  VAR_7[2] = 0;
  VAR_5 = FUNC_8(VAR_7);
 }

 if (!(FUNC_0(VAR_4->areanum) & VAR_1))
 {

  if (VAR_5 < 20) FUNC_4(VAR_3->client);
 }

 VAR_5 = FUNC_3(VAR_3->origin, VAR_7, VAR_3->entitynum);

 if (VAR_3->moveflags & VAR_0)
 {
  if (VAR_5 > 0) VAR_6 = 200 - (180 - 1 * VAR_5);
  else VAR_6 = 200;
  FUNC_6(VAR_3->client);
 }
 else
 {
  if (VAR_5 > 0) VAR_6 = 400 - (360 - 2 * VAR_5);
  else VAR_6 = 400;
 }

 FUNC_5(VAR_3->client, VAR_7, VAR_6);
 FUNC_7(VAR_7, VAR_8.movedir);

 return VAR_8;
}

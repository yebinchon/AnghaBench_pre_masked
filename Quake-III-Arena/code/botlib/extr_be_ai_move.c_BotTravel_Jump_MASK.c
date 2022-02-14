
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int* vec3_t ;
struct TYPE_9__ {scalar_t__ reachareanum; int* origin; int client; int lastreachnum; int jumpreach; } ;
typedef TYPE_1__ bot_movestate_t ;
struct TYPE_10__ {int* movedir; } ;
typedef TYPE_2__ bot_moveresult_t ;
struct TYPE_11__ {int* start; int* end; } ;
typedef TYPE_3__ aas_reachability_t ;


 int FUNC_0 (TYPE_3__*,int*) ;
 scalar_t__ FUNC_1 (int*) ;
 int FUNC_2 (TYPE_2__*) ;
 double FUNC_3 (int*,int*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int*,float) ;
 int FUNC_7 (int*,int*) ;
 int FUNC_8 (int*,float,int*,int*) ;
 float FUNC_9 (int*) ;
 int FUNC_10 (int*,int*,int*) ;

bot_moveresult_t FUNC_11(bot_movestate_t *VAR_0, aas_reachability_t *VAR_1)
{
 vec3_t VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;

 float VAR_8, VAR_9, VAR_10;
 bot_moveresult_t VAR_11;

 FUNC_2(&VAR_11);

 FUNC_0(VAR_1, VAR_7);

 VAR_2[0] = VAR_7[0] - VAR_1->start[0];
 VAR_2[1] = VAR_7[1] - VAR_1->start[1];
 VAR_2[2] = 0;
 FUNC_9(VAR_2);

 FUNC_7(VAR_1->start, VAR_5);
 VAR_5[2] += 1;
 FUNC_8(VAR_1->start, 80, VAR_2, VAR_7);

 for (VAR_8 = 0; VAR_8 < 80; VAR_8 += 10)
 {
  FUNC_8(VAR_5, VAR_8+10, VAR_2, VAR_6);
  VAR_6[2] += 1;
  if (FUNC_1(VAR_6) != VAR_0->reachareanum) break;
 }
 if (VAR_8 < 80) FUNC_8(VAR_1->start, VAR_8, VAR_2, VAR_7);

 FUNC_10(VAR_0->origin, VAR_1->start, VAR_3);
 VAR_3[2] = 0;
 VAR_8 = FUNC_9(VAR_3);
 FUNC_10(VAR_0->origin, VAR_7, VAR_4);
 VAR_4[2] = 0;
 VAR_9 = FUNC_9(VAR_4);

 if (FUNC_3(VAR_3, VAR_4) < -0.8 || VAR_9 < 5)
 {

  VAR_2[0] = VAR_1->end[0] - VAR_0->origin[0];
  VAR_2[1] = VAR_1->end[1] - VAR_0->origin[1];
  VAR_2[2] = 0;
  FUNC_9(VAR_2);

  if (VAR_8 < 24) FUNC_5(VAR_0->client);
  else if (VAR_8 < 32) FUNC_4(VAR_0->client);
  FUNC_6(VAR_0->client, VAR_2, 600);

  VAR_0->jumpreach = VAR_0->lastreachnum;
 }
 else
 {

  VAR_2[0] = VAR_7[0] - VAR_0->origin[0];
  VAR_2[1] = VAR_7[1] - VAR_0->origin[1];
  VAR_2[2] = 0;
  FUNC_9(VAR_2);

  if (VAR_9 > 80) VAR_9 = 80;
  VAR_10 = 400 - (400 - 5 * VAR_9);
  FUNC_6(VAR_0->client, VAR_2, VAR_10);
 }
 FUNC_7(VAR_2, VAR_11.movedir);

 return VAR_11;
}

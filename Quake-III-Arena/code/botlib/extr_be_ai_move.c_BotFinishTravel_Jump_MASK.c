
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
struct TYPE_8__ {int client; scalar_t__* origin; int jumpreach; } ;
typedef TYPE_1__ bot_movestate_t ;
struct TYPE_9__ {int movedir; } ;
typedef TYPE_2__ bot_moveresult_t ;
struct TYPE_10__ {scalar_t__* start; scalar_t__* end; } ;
typedef TYPE_3__ aas_reachability_t ;


 int FUNC_0 (TYPE_2__*) ;
 double FUNC_1 (scalar_t__*,scalar_t__*) ;
 int FUNC_2 (int ,scalar_t__*,float) ;
 int FUNC_3 (scalar_t__*,int ) ;
 float FUNC_4 (scalar_t__*) ;

bot_moveresult_t FUNC_5(bot_movestate_t *VAR_0, aas_reachability_t *VAR_1)
{
 vec3_t VAR_2, VAR_3;
 float VAR_4, VAR_5;
 bot_moveresult_t VAR_6;

 FUNC_0(&VAR_6);

 if (!VAR_0->jumpreach) return VAR_6;

 VAR_2[0] = VAR_1->end[0] - VAR_0->origin[0];
 VAR_2[1] = VAR_1->end[1] - VAR_0->origin[1];
 VAR_2[2] = 0;
 VAR_5 = FUNC_4(VAR_2);

 VAR_3[0] = VAR_1->end[0] - VAR_1->start[0];
 VAR_3[1] = VAR_1->end[1] - VAR_1->start[1];
 VAR_3[2] = 0;
 FUNC_4(VAR_3);

 if (FUNC_1(VAR_2, VAR_3) < -0.5 && VAR_5 < 24) return VAR_6;

 VAR_4 = 800;

 FUNC_2(VAR_0->client, VAR_2, VAR_4);
 FUNC_3(VAR_2, VAR_6.movedir);

 return VAR_6;
}

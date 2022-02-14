
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
struct TYPE_8__ {int client; int origin; int velocity; int jumpreach; } ;
typedef TYPE_1__ bot_movestate_t ;
struct TYPE_9__ {int movedir; } ;
typedef TYPE_2__ bot_moveresult_t ;
struct TYPE_10__ {int end; } ;
typedef TYPE_3__ aas_reachability_t ;


 int FUNC_0 (int ,int ,int ,scalar_t__*,float*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,scalar_t__*,float) ;
 int FUNC_3 (scalar_t__*,int ) ;
 int FUNC_4 (scalar_t__*) ;
 int FUNC_5 (int ,int ,scalar_t__*) ;

bot_moveresult_t FUNC_6(bot_movestate_t *VAR_0, aas_reachability_t *VAR_1)
{
 vec3_t VAR_2;
 float VAR_3;
 bot_moveresult_t VAR_4;

 FUNC_1(&VAR_4);

 if (!VAR_0->jumpreach) return VAR_4;
 if (!FUNC_0(VAR_0->origin, VAR_0->velocity, VAR_1->end, VAR_2, &VAR_3))
 {

  FUNC_5(VAR_1->end, VAR_0->origin, VAR_2);
  VAR_2[2] = 0;
  FUNC_4(VAR_2);
  VAR_3 = 400;
 }

 FUNC_2(VAR_0->client, VAR_2, VAR_3);
 FUNC_3(VAR_2, VAR_4.movedir);

 return VAR_4;
}

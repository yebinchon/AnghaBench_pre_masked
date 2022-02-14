
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
struct TYPE_10__ {int client; scalar_t__* origin; int velocity; } ;
typedef TYPE_1__ bot_movestate_t ;
struct TYPE_11__ {int movedir; } ;
typedef TYPE_2__ bot_moveresult_t ;
struct TYPE_12__ {scalar_t__* end; } ;
typedef TYPE_3__ aas_reachability_t ;


 int FUNC_0 (scalar_t__*,int ,scalar_t__*,scalar_t__*,float*) ;
 int FUNC_1 (TYPE_1__*,scalar_t__*,int ,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,scalar_t__*,float) ;
 int FUNC_4 (scalar_t__*,int ) ;
 int FUNC_5 (scalar_t__*) ;
 int VAR_0 ;

bot_moveresult_t FUNC_6(bot_movestate_t *VAR_1, aas_reachability_t *VAR_2)
{
 float VAR_3;
 vec3_t VAR_4;
 bot_moveresult_t VAR_5;

 FUNC_2(&VAR_5);
 if (!FUNC_0(VAR_1->origin, VAR_1->velocity, VAR_2->end, VAR_4, &VAR_3))
 {
  VAR_4[0] = VAR_2->end[0] - VAR_1->origin[0];
  VAR_4[1] = VAR_2->end[1] - VAR_1->origin[1];
  VAR_4[2] = 0;
  FUNC_5(VAR_4);
  VAR_3 = 400;
 }
 FUNC_1(VAR_1, VAR_4, VAR_0, &VAR_5);

 FUNC_3(VAR_1->client, VAR_4, VAR_3);
 FUNC_4(VAR_4, VAR_5.movedir);

 return VAR_5;
}

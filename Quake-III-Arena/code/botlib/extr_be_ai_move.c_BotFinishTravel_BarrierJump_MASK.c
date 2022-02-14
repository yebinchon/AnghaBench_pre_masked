
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
struct TYPE_10__ {int* velocity; int client; scalar_t__* origin; } ;
typedef TYPE_1__ bot_movestate_t ;
struct TYPE_11__ {int movedir; } ;
typedef TYPE_2__ bot_moveresult_t ;
struct TYPE_12__ {scalar_t__* end; } ;
typedef TYPE_3__ aas_reachability_t ;


 int FUNC_0 (TYPE_1__*,scalar_t__*,int ,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,scalar_t__*,int) ;
 int FUNC_3 (scalar_t__*,int ) ;
 float FUNC_4 (scalar_t__*) ;
 int VAR_0 ;

bot_moveresult_t FUNC_5(bot_movestate_t *VAR_1, aas_reachability_t *VAR_2)
{
 float VAR_3;
 vec3_t VAR_4;
 bot_moveresult_t VAR_5;

 FUNC_1(&VAR_5);

 if (VAR_1->velocity[2] < 250)
 {
  VAR_4[0] = VAR_2->end[0] - VAR_1->origin[0];
  VAR_4[1] = VAR_2->end[1] - VAR_1->origin[1];
  VAR_4[2] = 0;
  VAR_3 = FUNC_4(VAR_4);

  FUNC_0(VAR_1, VAR_4, VAR_0, &VAR_5);

  FUNC_2(VAR_1->client, VAR_4, 400);
  FUNC_3(VAR_4, VAR_5.movedir);
 }

 return VAR_5;
}

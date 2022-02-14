
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
struct TYPE_10__ {int client; int velocity; int origin; } ;
typedef TYPE_1__ bot_movestate_t ;
struct TYPE_11__ {scalar_t__* movedir; } ;
typedef TYPE_2__ bot_moveresult_t ;
struct TYPE_12__ {scalar_t__* end; } ;
typedef TYPE_3__ aas_reachability_t ;


 int FUNC_0 (int ,int ,scalar_t__*,scalar_t__*,float*) ;
 int FUNC_1 (TYPE_1__*,scalar_t__*,int ,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,scalar_t__*,float) ;
 int FUNC_4 (scalar_t__*,scalar_t__*) ;
 int FUNC_5 (scalar_t__*,int,scalar_t__*,scalar_t__*) ;
 float FUNC_6 (scalar_t__*) ;
 int FUNC_7 (scalar_t__*,int ,scalar_t__*) ;
 int VAR_0 ;

bot_moveresult_t FUNC_8(bot_movestate_t *VAR_1, aas_reachability_t *VAR_2)
{
 vec3_t VAR_3, VAR_4, VAR_5, VAR_6;
 float VAR_7, VAR_8;
 bot_moveresult_t VAR_9;

 FUNC_2(&VAR_9);

 FUNC_7(VAR_2->end, VAR_1->origin, VAR_3);
 FUNC_1(VAR_1, VAR_3, VAR_0, &VAR_9);

 FUNC_7(VAR_2->end, VAR_1->origin, VAR_6);
 VAR_6[2] = 0;
 VAR_7 = FUNC_6(VAR_6);
 if (VAR_7 > 16) FUNC_5(VAR_2->end, 16, VAR_6, VAR_5);
 else FUNC_4(VAR_2->end, VAR_5);

 if (!FUNC_0(VAR_1->origin, VAR_1->velocity, VAR_5, VAR_4, &VAR_8))
 {

  FUNC_4(VAR_3, VAR_4);
  VAR_4[2] = 0;

  VAR_7 = FUNC_6(VAR_4);
  VAR_8 = 400;
 }

 FUNC_3(VAR_1->client, VAR_4, VAR_8);
 FUNC_4(VAR_4, VAR_9.movedir);

 return VAR_9;
}

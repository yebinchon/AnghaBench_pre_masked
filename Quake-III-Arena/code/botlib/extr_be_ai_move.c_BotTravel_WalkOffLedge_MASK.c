
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
struct TYPE_10__ {int client; scalar_t__* origin; } ;
typedef TYPE_1__ bot_movestate_t ;
struct TYPE_11__ {int movedir; } ;
typedef TYPE_2__ bot_moveresult_t ;
struct TYPE_12__ {scalar_t__* end; scalar_t__* start; } ;
typedef TYPE_3__ aas_reachability_t ;


 int FUNC_0 (int ,scalar_t__*,scalar_t__*,float*) ;
 int FUNC_1 (TYPE_1__*,scalar_t__*,int ,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,scalar_t__*,float) ;
 int FUNC_4 (scalar_t__*,int ) ;
 float FUNC_5 (scalar_t__*) ;
 float FUNC_6 (scalar_t__*) ;
 int FUNC_7 (scalar_t__*,scalar_t__*,scalar_t__*) ;
 int VAR_0 ;

bot_moveresult_t FUNC_8(bot_movestate_t *VAR_1, aas_reachability_t *VAR_2)
{
 vec3_t VAR_3, VAR_4;
 float VAR_5, VAR_6, VAR_7;
 bot_moveresult_t VAR_8;

 FUNC_2(&VAR_8);

 FUNC_7(VAR_2->start, VAR_1->origin, VAR_4);
 FUNC_6(VAR_4);
 FUNC_1(VAR_1, VAR_4, VAR_0, &VAR_8);

 FUNC_7(VAR_2->end, VAR_2->start, VAR_4);
 VAR_4[2] = 0;
 VAR_7 = FUNC_5(VAR_4);

 VAR_3[0] = VAR_2->start[0] - VAR_1->origin[0];
 VAR_3[1] = VAR_2->start[1] - VAR_1->origin[1];
 VAR_3[2] = 0;
 VAR_5 = FUNC_6(VAR_3);

 if (VAR_5 < 48)
 {
  VAR_3[0] = VAR_2->end[0] - VAR_1->origin[0];
  VAR_3[1] = VAR_2->end[1] - VAR_1->origin[1];
  VAR_3[2] = 0;
  FUNC_6(VAR_3);

  if (VAR_7 < 20)
  {
   VAR_6 = 100;
  }
  else if (!FUNC_0(0, VAR_2->start, VAR_2->end, &VAR_6))
  {
   VAR_6 = 400;
  }
 }
 else
 {
  if (VAR_7 < 20)
  {
   if (VAR_5 > 64) VAR_5 = 64;
   VAR_6 = 400 - (256 - 4 * VAR_5);
  }
  else
  {
   VAR_6 = 400;
  }
 }

 FUNC_1(VAR_1, VAR_3, VAR_0, &VAR_8);

 FUNC_3(VAR_1->client, VAR_3, VAR_6);
 FUNC_4(VAR_3, VAR_8.movedir);

 return VAR_8;
}

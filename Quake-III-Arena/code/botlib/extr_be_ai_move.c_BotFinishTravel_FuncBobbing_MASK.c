
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
struct TYPE_10__ {int moveflags; int client; scalar_t__* origin; } ;
typedef TYPE_1__ bot_movestate_t ;
struct TYPE_11__ {int movedir; int flags; } ;
typedef TYPE_2__ bot_moveresult_t ;
struct TYPE_12__ {scalar_t__* end; } ;
typedef TYPE_3__ aas_reachability_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_2 (int ,scalar_t__*,float) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (TYPE_3__*,scalar_t__*) ;
 int FUNC_4 (scalar_t__*,int ) ;
 float FUNC_5 (scalar_t__*) ;
 float FUNC_6 (scalar_t__*) ;
 int FUNC_7 (scalar_t__*,scalar_t__*,scalar_t__*) ;

bot_moveresult_t FUNC_8(bot_movestate_t *VAR_2, aas_reachability_t *VAR_3)
{
 vec3_t VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
 bot_moveresult_t VAR_10;
 float VAR_11, VAR_12;

 FUNC_0(&VAR_10);

 FUNC_1(VAR_3, VAR_5, VAR_6, VAR_4);

 FUNC_7(VAR_4, VAR_6, VAR_7);
 VAR_11 = FUNC_5(VAR_7);

 if (VAR_11 < 16)
 {
  FUNC_7(VAR_3->end, VAR_2->origin, VAR_8);
  if (!(VAR_2->moveflags & VAR_0)) VAR_8[2] = 0;
  VAR_11 = FUNC_6(VAR_8);

  if (VAR_11 > 60) VAR_11 = 60;
  VAR_12 = 360 - (360 - 6 * VAR_11);

  if (VAR_12 > 5) FUNC_2(VAR_2->client, VAR_7, VAR_12);
  FUNC_4(VAR_7, VAR_10.movedir);

  if (VAR_2->moveflags & VAR_0) VAR_10.flags |= VAR_1;
 }
 else
 {
  FUNC_3(VAR_3, VAR_9);
  FUNC_7(VAR_9, VAR_2->origin, VAR_8);
  if (!(VAR_2->moveflags & VAR_0)) VAR_8[2] = 0;
  VAR_11 = FUNC_6(VAR_8);

  if (VAR_11 > 5)
  {

   if (VAR_11 > 100) VAR_11 = 100;
   VAR_12 = 400 - (400 - 4 * VAR_11);

   FUNC_2(VAR_2->client, VAR_8, VAR_12);
   FUNC_4(VAR_8, VAR_10.movedir);
  }
 }
 return VAR_10;
}

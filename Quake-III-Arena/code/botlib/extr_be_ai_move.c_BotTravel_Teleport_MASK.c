
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
struct TYPE_10__ {int moveflags; int client; int origin; } ;
typedef TYPE_1__ bot_movestate_t ;
struct TYPE_11__ {int movedir; int flags; } ;
typedef TYPE_2__ bot_moveresult_t ;
struct TYPE_12__ {int start; } ;
typedef TYPE_3__ aas_reachability_t ;


 int FUNC_0 (TYPE_1__*,scalar_t__*,int ,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,scalar_t__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (scalar_t__*,int ) ;
 float FUNC_4 (scalar_t__*) ;
 int FUNC_5 (int ,int ,scalar_t__*) ;
 int VAR_3 ;

bot_moveresult_t FUNC_6(bot_movestate_t *VAR_4, aas_reachability_t *VAR_5)
{
 vec3_t VAR_6;
 float VAR_7;
 bot_moveresult_t VAR_8;

 FUNC_1(&VAR_8);

 if (VAR_4->moveflags & VAR_1) return VAR_8;


 FUNC_5(VAR_5->start, VAR_4->origin, VAR_6);
 if (!(VAR_4->moveflags & VAR_0)) VAR_6[2] = 0;
 VAR_7 = FUNC_4(VAR_6);

 FUNC_0(VAR_4, VAR_6, VAR_3, &VAR_8);

 if (VAR_7 < 30) FUNC_2(VAR_4->client, VAR_6, 200);
 else FUNC_2(VAR_4->client, VAR_6, 400);

 if (VAR_4->moveflags & VAR_0) VAR_8.flags |= VAR_2;

 FUNC_3(VAR_6, VAR_8.movedir);
 return VAR_8;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_10__ {int client; int origin; } ;
typedef TYPE_1__ bot_movestate_t ;
struct TYPE_11__ {int flags; int ideal_viewangles; int movedir; } ;
typedef TYPE_2__ bot_moveresult_t ;
struct TYPE_12__ {int start; } ;
typedef TYPE_3__ aas_reachability_t ;


 int FUNC_0 (TYPE_1__*,int ,int ,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_0 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int VAR_1 ;

bot_moveresult_t FUNC_7(bot_movestate_t *VAR_2, aas_reachability_t *VAR_3)
{
 vec3_t VAR_4;
 bot_moveresult_t VAR_5;

 FUNC_1(&VAR_5);

 FUNC_6(VAR_3->start, VAR_2->origin, VAR_4);
 FUNC_5(VAR_4);

 FUNC_0(VAR_2, VAR_4, VAR_1, &VAR_5);

 FUNC_2(VAR_2->client, VAR_4, 400);

 FUNC_4(VAR_4, VAR_5.movedir);
 FUNC_3(VAR_4, VAR_5.ideal_viewangles);
 VAR_5.flags |= VAR_0;

 return VAR_5;
}

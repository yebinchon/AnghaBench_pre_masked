
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int* vec3_t ;
struct TYPE_8__ {int moveflags; int* origin; int client; } ;
typedef TYPE_1__ bot_movestate_t ;
struct TYPE_9__ {int* movedir; int flags; int ideal_viewangles; } ;
typedef TYPE_2__ bot_moveresult_t ;
struct TYPE_10__ {int end; } ;
typedef TYPE_3__ aas_reachability_t ;


 int FUNC_0 (int*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int*,int ) ;
 int FUNC_4 (int*,int*) ;
 float FUNC_5 (int*) ;
 int FUNC_6 (int ,int*,int*) ;
 int FUNC_7 () ;

bot_moveresult_t FUNC_8(bot_movestate_t *VAR_5, aas_reachability_t *VAR_6)
{
 vec3_t VAR_7, VAR_8;
 float VAR_9;
 bot_moveresult_t VAR_10;


 FUNC_1(&VAR_10);

 if (VAR_5->moveflags & VAR_3) return VAR_10;


 FUNC_4(VAR_5->origin, VAR_8);
 VAR_8[2] -= 32;
 if (!(FUNC_0(VAR_8) & (VAR_0|VAR_1|VAR_2))) return VAR_10;

 FUNC_6(VAR_6->end, VAR_5->origin, VAR_7);
 VAR_7[0] += FUNC_7() * 10;
 VAR_7[1] += FUNC_7() * 10;
 VAR_7[2] += 70 + FUNC_7() * 10;
 VAR_9 = FUNC_5(VAR_7);

 FUNC_2(VAR_5->client, VAR_7, 400);

 FUNC_3(VAR_7, VAR_10.ideal_viewangles);
 VAR_10.flags |= VAR_4;

 FUNC_4(VAR_7, VAR_10.movedir);

 return VAR_10;
}

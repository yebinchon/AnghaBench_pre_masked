
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int* vec3_t ;
struct TYPE_8__ {int client; int origin; } ;
typedef TYPE_1__ bot_movestate_t ;
struct TYPE_9__ {int movedir; int flags; int ideal_viewangles; } ;
typedef TYPE_2__ bot_moveresult_t ;
struct TYPE_10__ {int end; } ;
typedef TYPE_3__ aas_reachability_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int*,int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int*,int ) ;
 int FUNC_4 (int*,int ) ;
 int FUNC_5 (int*) ;
 int FUNC_6 (int ,int ,int*) ;

bot_moveresult_t FUNC_7(bot_movestate_t *VAR_1, aas_reachability_t *VAR_2)
{

 vec3_t VAR_3, VAR_4;
 vec3_t VAR_5 = {0, 0, 0};

 bot_moveresult_t VAR_6;

 FUNC_0(&VAR_6);




 {

  FUNC_6(VAR_2->end, VAR_1->origin, VAR_3);
  FUNC_5(VAR_3);

  VAR_4[0] = VAR_3[0];
  VAR_4[1] = VAR_3[1];
  VAR_4[2] = 3 * VAR_3[2];
  FUNC_3(VAR_4, VAR_6.ideal_viewangles);

  FUNC_1(VAR_1->client, VAR_5, 0);
  FUNC_2(VAR_1->client);

  VAR_6.flags |= VAR_0;
 }
 FUNC_4(VAR_3, VAR_6.movedir);

 return VAR_6;
}

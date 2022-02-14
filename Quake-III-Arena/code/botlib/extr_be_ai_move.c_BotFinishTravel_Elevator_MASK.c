
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int * vec3_t ;
struct TYPE_6__ {int client; int origin; } ;
typedef TYPE_1__ bot_movestate_t ;
typedef int bot_moveresult_t ;
struct TYPE_7__ {int * end; } ;
typedef TYPE_2__ aas_reachability_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int *) ;
 scalar_t__ FUNC_5 (int ) ;

bot_moveresult_t FUNC_6(bot_movestate_t *VAR_0, aas_reachability_t *VAR_1)
{
 vec3_t VAR_2, VAR_3, VAR_4;
 bot_moveresult_t VAR_5;

 FUNC_0(&VAR_5);

 FUNC_2(VAR_1, VAR_2);
 FUNC_4(VAR_2, VAR_0->origin, VAR_3);

 FUNC_4(VAR_1->end, VAR_0->origin, VAR_4);

 if (FUNC_5(VAR_3[2]) < FUNC_5(VAR_4[2]))
 {
  FUNC_3(VAR_3);
  FUNC_1(VAR_0->client, VAR_3, 300);
 }
 else
 {
  FUNC_3(VAR_4);
  FUNC_1(VAR_0->client, VAR_4, 300);
 }
 return VAR_5;
}

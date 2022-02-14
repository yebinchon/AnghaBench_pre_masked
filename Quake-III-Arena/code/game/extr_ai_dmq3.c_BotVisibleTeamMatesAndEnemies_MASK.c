
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_7__ {int client; int viewangles; int eye; int entitynum; int origin; } ;
typedef TYPE_1__ bot_state_t ;
struct TYPE_8__ {int origin; int valid; } ;
typedef TYPE_2__ aas_entityinfo_t ;


 int FUNC_0 (int,TYPE_2__*) ;
 float FUNC_1 (int ,int ,int ,int,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (float) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int VAR_1 ;

void FUNC_7(bot_state_t *VAR_2, int *VAR_3, int *VAR_4, float VAR_5) {
 int VAR_6;
 float VAR_7;
 aas_entityinfo_t VAR_8;
 vec3_t VAR_9;

 if (VAR_3)
  *VAR_3 = 0;
 if (VAR_4)
  *VAR_4 = 0;
 for (VAR_6 = 0; VAR_6 < VAR_1 && VAR_6 < VAR_0; VAR_6++) {
  if (VAR_6 == VAR_2->client)
   continue;

  FUNC_0(VAR_6, &VAR_8);

  if (!VAR_8.valid)
   continue;

  if (!FUNC_3(&VAR_8))
   continue;

  FUNC_6(VAR_8.origin, VAR_2->origin, VAR_9);
  if (FUNC_5(VAR_9) > FUNC_4(VAR_5))
   continue;

  VAR_7 = FUNC_1(VAR_2->entitynum, VAR_2->eye, VAR_2->viewangles, 360, VAR_6);
  if (VAR_7 <= 0)
   continue;

  if (FUNC_2(VAR_2, VAR_6)) {
   if (VAR_3)
    (*VAR_3)++;
  }
  else {
   if (VAR_4)
    (*VAR_4)++;
  }
 }
}

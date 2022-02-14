
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
typedef int mapname ;
typedef int info ;
struct TYPE_7__ {scalar_t__* origin; int client; scalar_t__ entitynum; int* ideal_viewangles; int tfl; int viewangles; int character; int eye; int flags; } ;
typedef TYPE_1__ bot_state_t ;
struct TYPE_8__ {scalar_t__ number; scalar_t__* origin; int valid; } ;
typedef TYPE_2__ aas_entityinfo_t ;


 void* FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int,TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (int ,int,int*) ;
 int FUNC_5 (char*,char*) ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_6 (char*,char*) ;
 int VAR_4 ;
 int FUNC_7 (scalar_t__*,int ,scalar_t__*) ;
 size_t VAR_5 ;
 int FUNC_8 () ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (char*,int ,int) ;
 float FUNC_10 (int ,int ,int ,int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (char*,int) ;
 int FUNC_13 (scalar_t__*,int*) ;

void FUNC_14(bot_state_t *VAR_9) {
 char VAR_10[1024];
 char VAR_11[128];
 int VAR_12, VAR_13;
 float VAR_14;
 aas_entityinfo_t VAR_15;
 vec3_t VAR_16;

 FUNC_12(VAR_10, sizeof(VAR_10));

 FUNC_9(VAR_11, FUNC_5( VAR_10, "mapname" ), sizeof(VAR_11)-1);
 VAR_11[sizeof(VAR_11)-1] = '\0';

 if (!FUNC_6(VAR_11, "q3tourney6")) {
  vec3_t VAR_17 = {700, 204, 672}, VAR_18 = {964, 468, 680};
  vec3_t VAR_19 = {304, 352, 920};

  VAR_9->tfl &= ~VAR_4;

  if (VAR_9->origin[0] > VAR_17[0] && VAR_9->origin[0] < VAR_18[0]) {
   if (VAR_9->origin[1] > VAR_17[1] && VAR_9->origin[1] < VAR_18[1]) {
    if (VAR_9->origin[2] < VAR_17[2]) {
     return;
    }
   }
  }
  VAR_13 = VAR_7;

  for (VAR_12 = 0; VAR_12 < VAR_6 && VAR_12 < VAR_2; VAR_12++) {

   if (VAR_12 == VAR_9->client) continue;

   FUNC_1(VAR_12, &VAR_15);

   if (!VAR_15.valid) continue;

   if (FUNC_3(&VAR_15) || VAR_15.number == VAR_9->entitynum) continue;

   if (VAR_15.origin[0] > VAR_17[0] && VAR_15.origin[0] < VAR_18[0]) {
    if (VAR_15.origin[1] > VAR_17[1] && VAR_15.origin[1] < VAR_18[1]) {
     if (VAR_15.origin[2] < VAR_17[2]) {

      if (FUNC_2(VAR_9, VAR_12)) {
       VAR_13 = VAR_7;
       break;
      }
      else {
       VAR_13 = VAR_8;
      }
     }
    }
   }
  }
  if (VAR_13) {
   VAR_9->flags |= VAR_0;
   FUNC_7(VAR_19, VAR_9->eye, VAR_16);
   FUNC_13(VAR_16, VAR_9->ideal_viewangles);
   VAR_14 = FUNC_10(VAR_9->character, VAR_1, 0, 1);
   VAR_9->ideal_viewangles[VAR_3] += 8 * FUNC_8() * (1 - VAR_14);
   VAR_9->ideal_viewangles[VAR_3] = FUNC_0(VAR_9->ideal_viewangles[VAR_3]);
   VAR_9->ideal_viewangles[VAR_5] += 8 * FUNC_8() * (1 - VAR_14);
   VAR_9->ideal_viewangles[VAR_5] = FUNC_0(VAR_9->ideal_viewangles[VAR_5]);

   if (FUNC_4(VAR_9->viewangles, 20, VAR_9->ideal_viewangles)) {
    FUNC_11(VAR_9->client);
   }
  }
 }
 else if (!FUNC_6(VAR_11, "mpq3tourney6")) {

  VAR_9->tfl &= ~VAR_4;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* ideal_viewangles; scalar_t__ enemy; int* viewangles; float* viewanglespeed; int client; int character; } ;
typedef TYPE_1__ bot_state_t ;
struct TYPE_5__ {scalar_t__ integer; } ;


 float FUNC_0 (int,int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int,int,float) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 float FUNC_3 (float) ;
 TYPE_2__ VAR_3 ;
 float FUNC_4 (int ,int ,int,int) ;
 int FUNC_5 (int ,int*) ;

void FUNC_6(bot_state_t *VAR_4, float VAR_5) {
 float VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 int VAR_11;

 if (VAR_4->ideal_viewangles[VAR_2] > 180) VAR_4->ideal_viewangles[VAR_2] -= 360;

 if (VAR_4->enemy >= 0) {
  VAR_7 = FUNC_4(VAR_4->character, VAR_0, 0.01f, 1);
  VAR_8 = FUNC_4(VAR_4->character, VAR_1, 1, 1800);
 }
 else {
  VAR_7 = 0.05f;
  VAR_8 = 360;
 }
 if (VAR_8 < 240) VAR_8 = 240;
 VAR_8 *= VAR_5;
 for (VAR_11 = 0; VAR_11 < 2; VAR_11++) {

  if (VAR_3.integer) {

   VAR_6 = FUNC_3(FUNC_0(VAR_4->viewangles[VAR_11], VAR_4->ideal_viewangles[VAR_11]));
   VAR_9 = VAR_6 * VAR_7;
   if (VAR_9 > VAR_8) VAR_9 = VAR_8;
   VAR_4->viewangles[VAR_11] = FUNC_2(VAR_4->viewangles[VAR_11],
           VAR_4->ideal_viewangles[VAR_11], VAR_9);
  }
  else {

   VAR_4->viewangles[VAR_11] = FUNC_1(VAR_4->viewangles[VAR_11]);
   VAR_4->ideal_viewangles[VAR_11] = FUNC_1(VAR_4->ideal_viewangles[VAR_11]);
   VAR_6 = FUNC_0(VAR_4->viewangles[VAR_11], VAR_4->ideal_viewangles[VAR_11]);
   VAR_10 = VAR_6 * VAR_7;
   VAR_4->viewanglespeed[VAR_11] += (VAR_4->viewanglespeed[VAR_11] - VAR_10);
   if (VAR_4->viewanglespeed[VAR_11] > 180) VAR_4->viewanglespeed[VAR_11] = VAR_8;
   if (VAR_4->viewanglespeed[VAR_11] < -180) VAR_4->viewanglespeed[VAR_11] = -VAR_8;
   VAR_9 = VAR_4->viewanglespeed[VAR_11];
   if (VAR_9 > VAR_8) VAR_9 = VAR_8;
   if (VAR_9 < -VAR_8) VAR_9 = -VAR_8;
   VAR_4->viewangles[VAR_11] += VAR_9;
   VAR_4->viewangles[VAR_11] = FUNC_1(VAR_4->viewangles[VAR_11]);

   VAR_4->viewanglespeed[VAR_11] *= 0.45 * (1 - VAR_7);
  }


 }

 if (VAR_4->viewangles[VAR_2] > 180) VAR_4->viewangles[VAR_2] -= 360;

 FUNC_5(VAR_4->client, VAR_4->viewangles);
}

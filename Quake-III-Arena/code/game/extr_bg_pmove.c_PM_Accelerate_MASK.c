
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef float* vec3_t ;
struct TYPE_6__ {TYPE_1__* ps; } ;
struct TYPE_5__ {float frametime; } ;
struct TYPE_4__ {float* velocity; } ;


 float FUNC_0 (float*,float*) ;
 int FUNC_1 (float*,float,float*,float*) ;
 float FUNC_2 (float*) ;
 int FUNC_3 (float*,float,float*) ;
 int FUNC_4 (float*,float*,float*) ;
 TYPE_3__* VAR_0 ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void FUNC_5( vec3_t VAR_2, float VAR_3, float VAR_4 ) {


 int VAR_5;
 float VAR_6, VAR_7, VAR_8;

 VAR_8 = FUNC_0 (VAR_0->ps->velocity, VAR_2);
 VAR_6 = VAR_3 - VAR_8;
 if (VAR_6 <= 0) {
  return;
 }
 VAR_7 = VAR_4*VAR_1.frametime*VAR_3;
 if (VAR_7 > VAR_6) {
  VAR_7 = VAR_6;
 }

 for (VAR_5=0 ; VAR_5<3 ; VAR_5++) {
  VAR_0->ps->velocity[VAR_5] += VAR_7*VAR_2[VAR_5];
 }
}

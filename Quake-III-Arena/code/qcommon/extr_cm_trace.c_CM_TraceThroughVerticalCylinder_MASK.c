
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef float* vec3_t ;
struct TYPE_5__ {int normal; int dist; } ;
struct TYPE_6__ {float fraction; int contents; TYPE_1__ plane; void* allsolid; void* startsolid; } ;
struct TYPE_7__ {TYPE_2__ trace; int modelOrigin; } ;
typedef TYPE_3__ traceWork_t ;


 float FUNC_0 (float*,float*,float*,float*) ;
 int VAR_0 ;
 int FUNC_1 (int ,float*) ;
 float VAR_1 ;
 float VAR_2 ;
 float FUNC_2 (float) ;
 float FUNC_3 (float) ;
 int FUNC_4 (int ,float*,float*) ;
 int FUNC_5 (float*,int ) ;
 float FUNC_6 (float*) ;
 float FUNC_7 (float*) ;
 int FUNC_8 (float*,float,float*,float*) ;
 float FUNC_9 (float*) ;
 int FUNC_10 (float*,float,float*) ;
 int FUNC_11 (float*,float,float,int ) ;
 int FUNC_12 (float*,float*,float*) ;
 void* VAR_3 ;

void FUNC_13( traceWork_t *VAR_4, vec3_t VAR_5, float VAR_6, float VAR_7, vec3_t VAR_8, vec3_t VAR_9) {
 float VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 float VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
 vec3_t VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;


 FUNC_11(VAR_22, VAR_8[0], VAR_8[1], 0);
 FUNC_11(VAR_23, VAR_9[0], VAR_9[1], 0);
 FUNC_11(VAR_24, VAR_5[0], VAR_5[1], 0);

 if (VAR_8[2] <= VAR_5[2] + VAR_7 &&
    VAR_8[2] >= VAR_5[2] - VAR_7) {

  FUNC_12(VAR_22, VAR_24, VAR_21);
  VAR_13 = FUNC_7(VAR_21);
  if (VAR_13 < FUNC_2(VAR_6)) {
   VAR_4->trace.fraction = 0;
   VAR_4->trace.startsolid = VAR_3;
   FUNC_12(VAR_23, VAR_24, VAR_21);
   VAR_13 = FUNC_7(VAR_21);
   if (VAR_13 < FUNC_2(VAR_6)) {
    VAR_4->trace.allsolid = VAR_3;
   }
   return;
  }
 }

 FUNC_12(VAR_23, VAR_22, VAR_21);
 VAR_10 = FUNC_9(VAR_21);

 VAR_13 = FUNC_0(VAR_24, VAR_22, VAR_23, VAR_21);
 FUNC_12(VAR_23, VAR_24, VAR_20);
 VAR_14 = FUNC_7(VAR_20);

 if (VAR_13 >= FUNC_2(VAR_6) && VAR_14 > FUNC_2(VAR_6+VAR_2)) {
  return;
 }
 FUNC_12(VAR_8, VAR_5, VAR_20);

 VAR_15 = 1.0f;
 VAR_16 = 2.0f * (VAR_20[0] * VAR_21[0] + VAR_20[1] * VAR_21[1]);
 VAR_17 = VAR_20[0] * VAR_20[0] + VAR_20[1] * VAR_20[1] - (VAR_6+VAR_1) * (VAR_6+VAR_1);

 VAR_18 = VAR_16 * VAR_16 - 4.0f * VAR_17;
 if (VAR_18 > 0) {
  VAR_19 = FUNC_3(VAR_18);

  VAR_12 = (- VAR_16 - VAR_19) * 0.5f;

  if (VAR_12 < 0) {
   VAR_12 = 0;
  }
  else {
   VAR_12 /= VAR_10;
  }
  if ( VAR_12 < VAR_4->trace.fraction ) {
   FUNC_12(VAR_9, VAR_8, VAR_21);
   FUNC_8(VAR_8, VAR_12, VAR_21, VAR_25);

   if (VAR_25[2] <= VAR_5[2] + VAR_7 &&
      VAR_25[2] >= VAR_5[2] - VAR_7) {

    VAR_4->trace.fraction = VAR_12;
    FUNC_12(VAR_25, VAR_5, VAR_21);
    VAR_21[2] = 0;






    VAR_11 = 1 / (VAR_6+VAR_1);
    FUNC_10(VAR_21, VAR_11, VAR_21);
    FUNC_5(VAR_21, VAR_4->trace.plane.normal);
    FUNC_4( VAR_4->modelOrigin, VAR_25, VAR_25);
    VAR_4->trace.plane.dist = FUNC_1(VAR_4->trace.plane.normal, VAR_25);
    VAR_4->trace.contents = VAR_0;
   }
  }
 }
 else if (VAR_18 == 0) {


 }

}

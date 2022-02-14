
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
 int FUNC_11 (float*,float*,float*) ;
 void* VAR_3 ;

void FUNC_12( traceWork_t *VAR_4, vec3_t VAR_5, float VAR_6, vec3_t VAR_7, vec3_t VAR_8 ) {
 float VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 float VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
 vec3_t VAR_19, VAR_20, VAR_21;


 FUNC_11(VAR_7, VAR_5, VAR_20);
 VAR_9 = FUNC_7(VAR_20);
 if (VAR_9 < FUNC_2(VAR_6)) {
  VAR_4->trace.fraction = 0;
  VAR_4->trace.startsolid = VAR_3;

  FUNC_11(VAR_8, VAR_5, VAR_20);
  VAR_9 = FUNC_7(VAR_20);
  if (VAR_9 < FUNC_2(VAR_6)) {
   VAR_4->trace.allsolid = VAR_3;
  }
  return;
 }

 FUNC_11(VAR_8, VAR_7, VAR_20);
 VAR_11 = FUNC_9(VAR_20);

 VAR_9 = FUNC_0(VAR_5, VAR_7, VAR_8, VAR_20);
 FUNC_11(VAR_8, VAR_5, VAR_19);
 VAR_10 = FUNC_7(VAR_19);

 if (VAR_9 >= FUNC_2(VAR_6) && VAR_10 > FUNC_2(VAR_6+VAR_2)) {
  return;
 }






 FUNC_11(VAR_7, VAR_5, VAR_19);

 VAR_14 = 1.0f;
 VAR_15 = 2.0f * (VAR_20[0] * VAR_19[0] + VAR_20[1] * VAR_19[1] + VAR_20[2] * VAR_19[2]);
 VAR_16 = VAR_19[0] * VAR_19[0] + VAR_19[1] * VAR_19[1] + VAR_19[2] * VAR_19[2] - (VAR_6+VAR_1) * (VAR_6+VAR_1);

 VAR_17 = VAR_15 * VAR_15 - 4.0f * VAR_16;
 if (VAR_17 > 0) {
  VAR_18 = FUNC_3(VAR_17);

  VAR_13 = (- VAR_15 - VAR_18) * 0.5f;

  if (VAR_13 < 0) {
   VAR_13 = 0;
  }
  else {
   VAR_13 /= VAR_11;
  }
  if ( VAR_13 < VAR_4->trace.fraction ) {
   VAR_4->trace.fraction = VAR_13;
   FUNC_11(VAR_8, VAR_7, VAR_20);
   FUNC_8(VAR_7, VAR_13, VAR_20, VAR_21);
   FUNC_11(VAR_21, VAR_5, VAR_20);






   VAR_12 = 1 / (VAR_6+VAR_1);
   FUNC_10(VAR_20, VAR_12, VAR_20);
   FUNC_5(VAR_20, VAR_4->trace.plane.normal);
   FUNC_4( VAR_4->modelOrigin, VAR_21, VAR_21);
   VAR_4->trace.plane.dist = FUNC_1(VAR_4->trace.plane.normal, VAR_21);
   VAR_4->trace.contents = VAR_0;
  }
 }
 else if (VAR_17 == 0) {


 }

}

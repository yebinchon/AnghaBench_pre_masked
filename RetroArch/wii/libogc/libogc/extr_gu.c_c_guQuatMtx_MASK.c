
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {float x; float y; float z; float w; } ;
typedef TYPE_1__ guQuaternion ;
typedef float f32 ;
typedef int Mtx ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 float const FUNC_1 (int ,int,int) ;
 float FUNC_2 (float const) ;

void FUNC_3(guQuaternion *VAR_0,Mtx VAR_1)
{
 const f32 VAR_2 = FUNC_1(VAR_1,0,0) + FUNC_1(VAR_1,1,1) + FUNC_1(VAR_1,2,2) + 1;

 if(VAR_2>0.0f) {
  const f32 VAR_3 = FUNC_2(VAR_2)*2.0f;

  VAR_0->x = (FUNC_1(VAR_1,2,1) - FUNC_1(VAR_1,1,2))/VAR_3;
  VAR_0->y = (FUNC_1(VAR_1,0,2) - FUNC_1(VAR_1,2,0))/VAR_3;
  VAR_0->z = (FUNC_1(VAR_1,1,0) - FUNC_1(VAR_1,0,1))/VAR_3;
  VAR_0->w = 0.25f*VAR_3;
 } else {
  if(FUNC_1(VAR_1,0,0)>FUNC_1(VAR_1,1,1) && FUNC_1(VAR_1,0,0)>FUNC_1(VAR_1,2,2)) {
   const f32 VAR_4 = FUNC_2(1.0f + FUNC_1(VAR_1,0,0) + FUNC_1(VAR_1,1,1) + FUNC_1(VAR_1,2,2))*2.0f;

   VAR_0->x = 0.25f*VAR_4;
   VAR_0->y = (FUNC_1(VAR_1,0,1) + FUNC_1(VAR_1,1,0))/VAR_4;
   VAR_0->z = (FUNC_1(VAR_1,2,0) + FUNC_1(VAR_1,0,2))/VAR_4;
   VAR_0->w = (FUNC_1(VAR_1,2,1) - FUNC_1(VAR_1,1,2))/VAR_4;
  } else if(FUNC_1(VAR_1,1,1)>FUNC_1(VAR_1,2,2)) {
   const f32 VAR_5 = FUNC_2(1.0f + FUNC_1(VAR_1,0,0) + FUNC_1(VAR_1,1,1) + FUNC_1(VAR_1,2,2))*2.0f;

   VAR_0->x = (FUNC_1(VAR_1,0,1) + FUNC_1(VAR_1,1,0))/VAR_5;
   VAR_0->y = 0.25f*VAR_5;
   VAR_0->z = (FUNC_1(VAR_1,1,2) + FUNC_1(VAR_1,2,1))/VAR_5;
   VAR_0->w = (FUNC_1(VAR_1,0,2) - FUNC_1(VAR_1,2,0))/VAR_5;
  } else {
   const f32 VAR_6 = FUNC_2(1.0f + FUNC_1(VAR_1,0,0) + FUNC_1(VAR_1,1,1) + FUNC_1(VAR_1,2,2))*2.0f;

   VAR_0->x = (FUNC_1(VAR_1,0,2) + FUNC_1(VAR_1,2,0))/VAR_6;
   VAR_0->y = (FUNC_1(VAR_1,1,2) + FUNC_1(VAR_1,2,1))/VAR_6;
   VAR_0->z = 0.25f*VAR_6;
   VAR_0->w = (FUNC_1(VAR_1,1,0) - FUNC_1(VAR_1,0,1))/VAR_6;
  }
 }
 FUNC_0(VAR_0,VAR_0);
}

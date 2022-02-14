
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {float x; float y; float z; float w; } ;
typedef TYPE_1__ guQuaternion ;
typedef float f32 ;


 float FUNC_0 (float) ;

void FUNC_1(guQuaternion *VAR_0,guQuaternion *VAR_1)
{
 f32 VAR_2,VAR_3;

 VAR_2 = (VAR_0->x*VAR_0->x) + (VAR_0->y*VAR_0->y) + (VAR_0->z*VAR_0->z) + (VAR_0->w*VAR_0->w);
 if(VAR_2==0.0f) VAR_1->x = VAR_1->y = VAR_1->z = VAR_1->w = 0.0f;
 else {
  VAR_3 = 1.0f/FUNC_0(VAR_2);
  VAR_1->x = VAR_0->x*VAR_3;
  VAR_1->y = VAR_0->y*VAR_3;
  VAR_1->z = VAR_0->z*VAR_3;
  VAR_1->w = VAR_0->w*VAR_3;
 }
}

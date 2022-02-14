
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct orient_t {float roll; int a_roll; float pitch; int a_pitch; } ;
struct accel_t {float st_roll; int st_alpha; float st_pitch; } ;




 int FUNC_0 (float) ;
 int FUNC_1 (float) ;

void FUNC_2(struct accel_t* VAR_0, struct orient_t* VAR_1, int VAR_2) {
 switch (VAR_2) {
  case 128:
  {

   if (FUNC_1(VAR_0->st_roll) || FUNC_0(VAR_0->st_roll))
    VAR_0->st_roll = 0.0f;





   if (((VAR_0->st_roll < 0) && (VAR_1->roll > 0)) || ((VAR_0->st_roll > 0) && (VAR_1->roll < 0))) {
    VAR_0->st_roll = VAR_1->roll;
   } else {
    VAR_1->roll = VAR_0->st_roll + (VAR_0->st_alpha * (VAR_1->a_roll - VAR_0->st_roll));
    VAR_0->st_roll = VAR_1->roll;
   }

   return;
  }

  case 129:
  {
   if (FUNC_1(VAR_0->st_pitch) || FUNC_0(VAR_0->st_pitch))
    VAR_0->st_pitch = 0.0f;

   if (((VAR_0->st_pitch < 0) && (VAR_1->pitch > 0)) || ((VAR_0->st_pitch > 0) && (VAR_1->pitch < 0))) {
    VAR_0->st_pitch = VAR_1->pitch;
   } else {
    VAR_1->pitch = VAR_0->st_pitch + (VAR_0->st_alpha * (VAR_1->a_pitch - VAR_0->st_pitch));
    VAR_0->st_pitch = VAR_1->pitch;
   }

   return;
  }
 }
}

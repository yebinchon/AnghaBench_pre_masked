
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float x; float y; float z; } ;
struct TYPE_4__ {TYPE_1__ accelerometer_state; } ;
typedef TYPE_2__ android_input_t ;






__attribute__((used)) static float FUNC_0(void *VAR_0,
      unsigned VAR_1,unsigned VAR_2)
{
   android_input_t *VAR_3 = (android_input_t*)VAR_0;

   switch (VAR_2)
   {
      case 130:
         return VAR_3->accelerometer_state.x;
      case 129:
         return VAR_3->accelerometer_state.y;
      case 128:
         return VAR_3->accelerometer_state.z;
   }

   return 0;
}

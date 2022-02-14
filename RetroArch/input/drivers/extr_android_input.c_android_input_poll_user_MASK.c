
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct android_app {int sensor_state_mask; int sensorEventQueue; scalar_t__ accelerometerSensor; } ;
struct TYPE_7__ {int z; int y; int x; } ;
struct TYPE_9__ {TYPE_1__ accelerometer_state; } ;
typedef TYPE_3__ android_input_t ;
struct TYPE_8__ {int z; int y; int x; } ;
struct TYPE_10__ {TYPE_2__ acceleration; } ;
typedef TYPE_4__ ASensorEvent ;


 scalar_t__ FUNC_0 (int ,TYPE_4__*,int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_2(android_input_t *VAR_2)
{
   struct android_app *VAR_3 = (struct android_app*)VAR_1;

   if ((VAR_3->sensor_state_mask & (FUNC_1(1) <<
               VAR_0))
         && VAR_3->accelerometerSensor)
   {
      ASensorEvent VAR_4;
      while (FUNC_0(VAR_3->sensorEventQueue, &VAR_4, 1) > 0)
      {
         VAR_2->accelerometer_state.x = VAR_4.acceleration.x;
         VAR_2->accelerometer_state.y = VAR_4.acceleration.y;
         VAR_2->accelerometer_state.z = VAR_4.acceleration.z;
      }
   }
}

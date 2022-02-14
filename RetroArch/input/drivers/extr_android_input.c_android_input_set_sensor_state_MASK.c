
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct android_app {int sensor_state_mask; int accelerometerSensor; int sensorEventQueue; } ;
typedef enum retro_sensor_action { ____Placeholder_retro_sensor_action } retro_sensor_action ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,long) ;
 int FUNC_3 (int ,int const) ;
 int FUNC_4 (int ,int const) ;


 int FUNC_5 (struct android_app*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_6(void *VAR_1, unsigned VAR_2,
      enum retro_sensor_action VAR_3, unsigned VAR_4)
{
   struct android_app *VAR_5 = (struct android_app*)VAR_0;

   if (VAR_4 == 0)
      VAR_4 = 60;

   switch (VAR_3)
   {
      case 128:
         if (!VAR_5->accelerometerSensor)
            FUNC_5(VAR_5);

         if (VAR_5->accelerometerSensor)
            FUNC_1(VAR_5->sensorEventQueue,
                  VAR_5->accelerometerSensor);


         if (VAR_5->accelerometerSensor)
            FUNC_2(VAR_5->sensorEventQueue,
                  VAR_5->accelerometerSensor, (1000L / VAR_4)
                  * 1000);

         FUNC_3(VAR_5->sensor_state_mask, 129);
         FUNC_4(VAR_5->sensor_state_mask, 128);
         return 1;

      case 129:
         if (VAR_5->accelerometerSensor)
            FUNC_0(VAR_5->sensorEventQueue,
                  VAR_5->accelerometerSensor);

         FUNC_3(VAR_5->sensor_state_mask, 128);
         FUNC_4(VAR_5->sensor_state_mask, 129);
         return 1;
      default:
         return 0;
   }

   return 0;
}

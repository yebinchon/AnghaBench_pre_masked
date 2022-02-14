
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct android_app {int looper; int sensorManager; int sensorEventQueue; int accelerometerSensor; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *,int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(struct android_app *VAR_2)
{
   VAR_2->sensorManager = FUNC_2();
   VAR_2->accelerometerSensor =
      FUNC_1(VAR_2->sensorManager,
         VAR_0);
   VAR_2->sensorEventQueue =
      FUNC_0(VAR_2->sensorManager,
         VAR_2->looper, VAR_1, ((void*)0), ((void*)0));
}

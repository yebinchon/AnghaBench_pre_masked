
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct android_app {int reinitRequested; int stateSaved; int activityState; int sensor_state_mask; int unfocused; int destroyRequested; int mutex; int cond; int accelerometer_event_rate; int * accelerometerSensor; int * window; TYPE_1__* activity; int config; int * pendingWindow; int looper; int inputQueue; int pendingInputQueue; int msgread; } ;
typedef int jint ;
typedef int int8_t ;
typedef int cmd ;
struct TYPE_6__ {int doVibrate; TYPE_2__* activity; } ;
struct TYPE_5__ {int clazz; } ;
struct TYPE_4__ {int assetManager; } ;
typedef int JNIEnv ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ,int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int ,int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int) ;
 TYPE_3__* VAR_6 ;
 int FUNC_6 (int ,int,int ) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (int ,int*) ;
 int FUNC_9 (int ,int*,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 () ;
 int FUNC_14 () ;

__attribute__((used)) static void FUNC_15(void)
{
   int8_t VAR_7;
   struct android_app *VAR_8 = (struct android_app*)VAR_6;

   if (FUNC_9(VAR_8->msgread, &VAR_7, sizeof(VAR_7)) != sizeof(VAR_7))
      VAR_7 = -1;

   switch (VAR_7)
   {
      case 134:
         FUNC_11(VAR_8->mutex);

         VAR_8->reinitRequested = 0;

         FUNC_10(VAR_8->cond);
         FUNC_12(VAR_8->mutex);
         break;

      case 137:
         FUNC_11(VAR_8->mutex);

         if (VAR_8->inputQueue)
            FUNC_2(VAR_8->inputQueue);

         VAR_8->inputQueue = VAR_8->pendingInputQueue;

         if (VAR_8->inputQueue)
         {
            FUNC_4("Attaching input queue to looper");
            FUNC_1(VAR_8->inputQueue,
                  VAR_8->looper, VAR_0, ((void*)0),
                  ((void*)0));
         }

         FUNC_10(VAR_8->cond);
         FUNC_12(VAR_8->mutex);

         break;

      case 138:
         FUNC_11(VAR_8->mutex);
         VAR_8->window = VAR_8->pendingWindow;
         VAR_8->reinitRequested = 1;
         FUNC_10(VAR_8->cond);
         FUNC_12(VAR_8->mutex);

         break;

      case 132:
         FUNC_11(VAR_8->mutex);
         VAR_8->stateSaved = 1;
         FUNC_10(VAR_8->cond);
         FUNC_12(VAR_8->mutex);
         break;

      case 133:
      case 131:
      case 135:
      case 130:
         FUNC_11(VAR_8->mutex);
         VAR_8->activityState = VAR_7;
         FUNC_10(VAR_8->cond);
         FUNC_12(VAR_8->mutex);
         break;

      case 141:
         FUNC_0(VAR_8->config,
               VAR_8->activity->assetManager);
         break;
      case 129:
         FUNC_11(VAR_8->mutex);




         VAR_8->window = ((void*)0);
         FUNC_10(VAR_8->cond);
         FUNC_12(VAR_8->mutex);
         break;

      case 139:
         {
            bool VAR_9 = 0;

            FUNC_8(VAR_2, &VAR_9);
            FUNC_8(VAR_1, &VAR_9);
            FUNC_14();

            if ((VAR_8->sensor_state_mask
                     & (FUNC_5(1) << VAR_5))
                  && VAR_8->accelerometerSensor == ((void*)0))
               FUNC_6(0,
                     VAR_5,
                     VAR_8->accelerometer_event_rate);
         }
         FUNC_11(VAR_8->mutex);
         VAR_8->unfocused = 0;
         FUNC_10(VAR_8->cond);
         FUNC_12(VAR_8->mutex);
         break;
      case 136:
         {
            bool VAR_10 = 1;

            FUNC_8(VAR_2, &VAR_10);
            FUNC_8(VAR_1, &VAR_10);
            FUNC_13();


            if ((VAR_8->sensor_state_mask
                     & (FUNC_5(1) << VAR_5))
                  && VAR_8->accelerometerSensor != ((void*)0)
                  )
               FUNC_6(0,
                     VAR_4,
                     VAR_8->accelerometer_event_rate);
         }
         FUNC_11(VAR_8->mutex);
         VAR_8->unfocused = 1;
         FUNC_10(VAR_8->cond);
         FUNC_12(VAR_8->mutex);
         break;

      case 140:
         FUNC_4("APP_CMD_DESTROY\n");
         VAR_8->destroyRequested = 1;
         break;
      case 128:
      {
         JNIEnv *VAR_11 = (JNIEnv*)FUNC_7();

         if (VAR_11 && VAR_6 && VAR_6->doVibrate)
         {
            FUNC_3(VAR_11, VAR_6->activity->clazz,
                  VAR_6->doVibrate, (jint)-1, (jint)VAR_3, (jint)255, (jint)1);
         }
         break;
      }
   }
}

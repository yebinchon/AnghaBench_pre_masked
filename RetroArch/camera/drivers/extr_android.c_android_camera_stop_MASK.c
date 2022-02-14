
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct android_app {TYPE_1__* activity; } ;
struct TYPE_4__ {scalar_t__ tex; int onCameraStop; } ;
typedef TYPE_2__ androidcamera_t ;
struct TYPE_3__ {int clazz; } ;
typedef int JNIEnv ;


 int FUNC_0 (int *,int ,int ) ;
 scalar_t__ VAR_0 ;
 int * FUNC_1 () ;
 int FUNC_2 (uintptr_t*) ;

__attribute__((used)) static void FUNC_3(void *VAR_1)
{
   struct android_app *VAR_2 = (struct android_app*)VAR_0;
   androidcamera_t *VAR_3 = (androidcamera_t*)VAR_1;
   JNIEnv *VAR_4 = FUNC_1();

   if (!VAR_4)
      return;

   FUNC_0(VAR_4, VAR_2->activity->clazz,
         VAR_3->onCameraStop);

   if (VAR_3->tex)
      FUNC_2((uintptr_t*)&VAR_3->tex);
}

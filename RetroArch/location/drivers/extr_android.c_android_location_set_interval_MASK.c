
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct android_app {TYPE_1__* activity; } ;
struct TYPE_4__ {int onLocationSetInterval; } ;
typedef TYPE_2__ androidlocation_t ;
struct TYPE_3__ {int clazz; } ;
typedef int JNIEnv ;


 int FUNC_0 (int *,int ,int ,int,int) ;
 scalar_t__ VAR_0 ;
 int * FUNC_1 () ;

__attribute__((used)) static void FUNC_2(void *VAR_1, unsigned VAR_2,
      unsigned VAR_3)
{
   struct android_app *VAR_4 = (struct android_app*)VAR_0;
   androidlocation_t *VAR_5 = (androidlocation_t*)VAR_1;
   JNIEnv *VAR_6 = FUNC_1();
   if (!VAR_6)
      return;

   FUNC_0(VAR_6, VAR_4->activity->clazz,
         VAR_5->onLocationSetInterval, (int)VAR_2,
         (int)VAR_3);
}

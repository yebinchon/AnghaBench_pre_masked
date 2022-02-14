
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct android_app {TYPE_1__* activity; } ;
typedef double jdouble ;
typedef int jboolean ;
struct TYPE_4__ {int onLocationGetHorizontalAccuracy; int onLocationGetLongitude; int onLocationGetLatitude; int onLocationHasChanged; } ;
typedef TYPE_2__ androidlocation_t ;
struct TYPE_3__ {int clazz; } ;
typedef int JNIEnv ;


 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (int *,double,int ,int ) ;
 scalar_t__ VAR_0 ;
 int * FUNC_2 () ;

__attribute__((used)) static bool FUNC_3(void *VAR_1, double *VAR_2,
      double *VAR_3, double *VAR_4,
      double *VAR_5)
{
   struct android_app *VAR_6 = (struct android_app*)VAR_0;
   androidlocation_t *VAR_7 = (androidlocation_t*)VAR_1;
   JNIEnv *VAR_8 = FUNC_2();
   if (!VAR_8)
      goto fail;

   jdouble VAR_9, VAR_10, VAR_11;
   jboolean VAR_12;

   FUNC_0(VAR_8, VAR_12, VAR_6->activity->clazz,
         VAR_7->onLocationHasChanged);

   if (!VAR_12)
      goto fail;

   FUNC_1(VAR_8, VAR_9, VAR_6->activity->clazz,
         VAR_7->onLocationGetLatitude);
   FUNC_1(VAR_8, VAR_10, VAR_6->activity->clazz,
         VAR_7->onLocationGetLongitude);
   FUNC_1(VAR_8, VAR_11, VAR_6->activity->clazz,
         VAR_7->onLocationGetHorizontalAccuracy);

   if (VAR_9 != 0.0)
      *VAR_2 = VAR_9;
   if (VAR_10 != 0.0)
      *VAR_3 = VAR_10;
   if (VAR_11 != 0.0)
      *VAR_4 = VAR_11;



   *VAR_5 = 0.0;

   return 1;

fail:
   *VAR_2 = 0.0;
   *VAR_3 = 0.0;
   *VAR_4 = 0.0;
   *VAR_5 = 0.0;
   return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct android_app {int mutex; int unfocused; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(void *VAR_1)
{
   bool VAR_2 = 0;
   struct android_app *VAR_3 = (struct android_app*)VAR_0;
   if (!VAR_3)
      return 1;

   FUNC_0(VAR_3->mutex);
   VAR_2 = !VAR_3->unfocused;
   FUNC_1(VAR_3->mutex);

   return VAR_2;
}

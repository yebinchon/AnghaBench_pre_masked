
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct android_app {scalar_t__ destroyRequested; scalar_t__ reinitRequested; } ;


 scalar_t__ FUNC_0 (int,int *,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct android_app*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_4 (int ,int *) ;

bool FUNC_5(void *VAR_6)
{
   struct android_app *VAR_7 = (struct android_app*)VAR_5;

   if (FUNC_0(-1, ((void*)0), ((void*)0), ((void*)0)) == VAR_2)
      FUNC_2();


   if (VAR_7->destroyRequested != 0)
   {
      FUNC_4(VAR_4, ((void*)0));
      return 0;
   }

   if (VAR_7->reinitRequested != 0)
   {
      if (FUNC_4(VAR_3, ((void*)0)))
         FUNC_3(VAR_1, ((void*)0));
      FUNC_1(VAR_7, VAR_0);
   }

   return 1;
}

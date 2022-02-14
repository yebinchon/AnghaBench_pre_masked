
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ state_size; } ;
typedef TYPE_1__ netplay_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;

bool FUNC_4(netplay_t *VAR_0)
{
   int VAR_1;

   if (VAR_0->state_size)
      return 1;


   for (VAR_1 = 0; VAR_1 < 60; VAR_1++)
   {
      if (FUNC_3(VAR_0))
         return 1;




      FUNC_2();



   }

   return 0;
}

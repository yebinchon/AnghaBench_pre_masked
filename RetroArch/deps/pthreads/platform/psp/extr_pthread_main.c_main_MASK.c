
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Buttons; } ;
typedef TYPE_1__ SceCtrlData ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*,int) ;

int FUNC_5(void)
{
   SceCtrlData VAR_1;

   FUNC_2();
   FUNC_0();

   FUNC_3();

   while (1)
   {
      FUNC_4(&VAR_1, 1);
      if (VAR_1.Buttons & VAR_0)
      {
         FUNC_1("Exiting...\n");
         return 0;
      }

   }
   return 0;
}

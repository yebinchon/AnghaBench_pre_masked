
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int (* poll ) () ;} ;
struct TYPE_3__ {int connected; int xstate; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 scalar_t__ FUNC_0 (unsigned int,int *) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (unsigned int) ;

__attribute__((used)) static void FUNC_6(void)
{
   unsigned VAR_3;

   for (VAR_3 = 0; VAR_3 < 4; ++VAR_3)
   {
      bool VAR_4 = FUNC_0(VAR_3, &(VAR_2[VAR_3].xstate)) != VAR_0;
      if (VAR_4 != VAR_2[VAR_3].connected)
      {
         if (VAR_4)
         {

            FUNC_3();
            FUNC_4(((void*)0));
            return;
         }

         VAR_2[VAR_3].connected = VAR_4;
         if (!VAR_2[VAR_3].connected)
            FUNC_1(VAR_3, FUNC_5(VAR_3));
      }

   }




}

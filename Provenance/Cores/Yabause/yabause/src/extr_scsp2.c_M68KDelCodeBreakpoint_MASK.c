
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {int Exec; } ;
struct TYPE_3__ {scalar_t__ addr; } ;


 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_0(u32 VAR_4)
{
   int VAR_5;

   if (VAR_3 > 0)
   {
      for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
      {
         if (VAR_1[VAR_5].addr == VAR_4)
         {


            VAR_1[VAR_5].addr = VAR_1[VAR_3-1].addr;
            VAR_1[VAR_3-1].addr = 0xFFFFFFFF;
            VAR_3--;

            if (VAR_3 == 0)
            {

               VAR_2 = VAR_0->Exec;
            }

            return 0;
         }
      }
   }

   return -1;
}

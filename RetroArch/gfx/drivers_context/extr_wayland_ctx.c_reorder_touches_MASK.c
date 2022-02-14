
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int active; int id; unsigned int x; unsigned int y; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_0(void)
{
   int VAR_3, VAR_4;
   if (VAR_2 == 0)
      return;

   for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
   {
      if (!VAR_1[VAR_3].active)
      {
         for (VAR_4=VAR_3+1; VAR_4<VAR_0; VAR_4++)
         {
            if (VAR_1[VAR_4].active)
            {
               VAR_1[VAR_3].active =
                  VAR_1[VAR_4].active;
               VAR_1[VAR_3].id =
                  VAR_1[VAR_4].id;
               VAR_1[VAR_3].x = VAR_1[VAR_4].x;
               VAR_1[VAR_3].y = VAR_1[VAR_4].y;
               VAR_1[VAR_4].active = 0;
               VAR_1[VAR_4].id = -1;
               VAR_1[VAR_4].x = (unsigned) 0;
               VAR_1[VAR_4].y = (unsigned) 0;
               break;
            }

            if (VAR_4 == VAR_0)
               return;
         }
      }
   }
}

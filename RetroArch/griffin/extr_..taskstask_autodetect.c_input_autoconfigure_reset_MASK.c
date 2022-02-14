
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int joyaxis; int joykey; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 TYPE_1__** VAR_4 ;
 int VAR_5 ;
 scalar_t__* VAR_6 ;
 scalar_t__* VAR_7 ;

void FUNC_0(void)
{
   unsigned VAR_8, VAR_9;

   for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++)
   {
      for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++)
      {
         VAR_4[VAR_8][VAR_9].joykey = VAR_2;
         VAR_4[VAR_8][VAR_9].joyaxis = VAR_0;
      }
      VAR_7[VAR_8] = 0;
      VAR_6[VAR_8] = 0;
   }

   VAR_5 = 0;
}

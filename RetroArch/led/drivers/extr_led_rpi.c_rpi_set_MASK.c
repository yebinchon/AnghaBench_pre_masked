
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* map; scalar_t__* setup; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int,int) ;
 int FUNC_1 (char*,int,...) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(int VAR_2, int VAR_3)
{
   int VAR_4 = 0;

   if((VAR_2 < 0) || (VAR_2 >= VAR_0))
   {
      FUNC_1("[LED]: invalid led %d\n", VAR_2);
      return;
   }

   VAR_4 = VAR_1->map[VAR_2];
   if(VAR_4 <= 0)
      return;

   if(VAR_1->setup[VAR_2] == 0)
   {
      FUNC_0("[LED]: rpi setup led %d gpio %d\n",
            VAR_2, VAR_4, VAR_3);
      VAR_1->setup[VAR_2] = FUNC_3(VAR_4);
      if(VAR_1->setup[VAR_2] <= 0)
      {
         FUNC_1("[LED]: failed to setup led %d gpio %d\n",
               VAR_2, VAR_4);
      }
   }
   if(VAR_1->setup[VAR_2] > 0)
   {
      FUNC_0("[LED]: rpi LED driver set led %d gpio %d = %d\n",
            VAR_2, VAR_4, VAR_3);
      FUNC_2(VAR_4, VAR_3);
   }
}

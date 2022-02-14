
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (char*,int) ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void FUNC_3(int VAR_4, int VAR_5)
{
   int VAR_6 = 0;
   if ((VAR_4 < 0) || (VAR_4 >= VAR_0))
   {
      FUNC_1("[LED]: invalid led %d\n", VAR_4);
      return;
   }

   VAR_6 = VAR_3->map[VAR_4];

   if (VAR_6 < 0)
      return;

   FUNC_2(VAR_6,
         VAR_5 ? VAR_2
         : VAR_1);

   FUNC_0("[LED]: set visibility %d %d\n", VAR_6, VAR_5);
}

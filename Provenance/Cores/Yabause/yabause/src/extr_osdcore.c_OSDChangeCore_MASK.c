
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hidden; } ;


 int * VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 TYPE_1__* VAR_3 ;

int FUNC_2(int VAR_4)
{
   int VAR_5, VAR_6, VAR_7;

   VAR_5 = (VAR_0 != ((void*)0));
   VAR_6 = VAR_3[VAR_2].hidden;
   VAR_7 = VAR_3[VAR_1].hidden;

   FUNC_0();
   FUNC_1(VAR_4);

   if (VAR_5)
   {
      VAR_3[VAR_2].hidden = VAR_6;
      VAR_3[VAR_1].hidden = VAR_7;
   }

   return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int id; scalar_t__ (* Init ) () ;} ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 TYPE_1__** VAR_2 ;
 scalar_t__ FUNC_0 () ;

int FUNC_1(int VAR_3) {
   int VAR_4;


   if (VAR_3 == VAR_0)
      VAR_3 = 0;


   for (VAR_4 = 0; VAR_2[VAR_4] != ((void*)0); VAR_4++)
   {
      if (VAR_2[VAR_4]->id == VAR_3)
      {

         VAR_1 = VAR_2[VAR_4];
         break;
      }
   }

   if (VAR_1 == ((void*)0))
      return -1;

   if (VAR_1->Init() != 0)
      return -1;

   return 0;
}

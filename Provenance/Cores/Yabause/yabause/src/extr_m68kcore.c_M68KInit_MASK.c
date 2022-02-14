
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int id; } ;


 TYPE_1__* VAR_0 ;
 TYPE_1__** VAR_1 ;
 TYPE_1__ VAR_2 ;

int FUNC_0(int VAR_3) {
   int VAR_4;

   VAR_0 = &VAR_2;


   for (VAR_4 = 0; VAR_1[VAR_4] != ((void*)0); VAR_4++)
   {
      if (VAR_1[VAR_4]->id == VAR_3)
      {

         VAR_0 = VAR_1[VAR_4];
         break;
      }
   }

   return 0;
}

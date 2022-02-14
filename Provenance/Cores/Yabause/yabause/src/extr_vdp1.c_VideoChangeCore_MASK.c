
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int id; scalar_t__ (* Init ) () ;int (* Vdp1Reset ) () ;} ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 TYPE_1__** VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;

int FUNC_3(int VAR_4)
{
   int VAR_5;


   FUNC_0();


   if (VAR_4 == VAR_0)
      VAR_4 = 0;


   for (VAR_5 = 0; VAR_2[VAR_5] != ((void*)0); VAR_5++)
   {
      if (VAR_2[VAR_5]->id == VAR_4)
      {

         VAR_1 = VAR_2[VAR_5];
         break;
      }
   }

   if (VAR_1 == ((void*)0))
      return -1;

   if (VAR_1->Init() != 0)
      return -1;


   if (VAR_3)
   {
      VAR_1->Vdp1Reset();
   }

   return 0;
}

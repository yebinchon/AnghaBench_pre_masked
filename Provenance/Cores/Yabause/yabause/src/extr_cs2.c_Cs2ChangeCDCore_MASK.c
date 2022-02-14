
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int isdiskchanged; int status; TYPE_1__* cdi; } ;
struct TYPE_4__ {int id; scalar_t__ (* Init ) (char const*) ;scalar_t__ Name; int (* DeInit ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__** VAR_2 ;
 TYPE_2__* VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_0 () ;
 int VAR_5 ;
 int FUNC_1 (int ,void*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (char const*) ;

int FUNC_4(int VAR_6, const char *VAR_7)
{
   int VAR_8;


   if (VAR_3->cdi != ((void*)0))
      VAR_3->cdi->DeInit();


   if (VAR_6 == VAR_1)
      VAR_6 = 0;


   for (VAR_8 = 0; VAR_2[VAR_8] != ((void*)0); VAR_8++)
   {
      if (VAR_2[VAR_8]->id == VAR_6)
      {

         VAR_3->cdi = VAR_2[VAR_8];
         break;
      }
   }

   if (VAR_3->cdi == ((void*)0))
   {
      VAR_3->cdi = &VAR_4;
      return -1;
   }

   if (VAR_3->cdi->Init(VAR_7) != 0)
   {

      FUNC_1(VAR_5, (void *)VAR_3->cdi->Name);



      VAR_3->cdi = &VAR_4;
   }

   VAR_3->isdiskchanged = 1;
   VAR_3->status = VAR_0;
   FUNC_0();

   return 0;
}

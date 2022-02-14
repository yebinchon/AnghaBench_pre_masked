
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int id; int (* Init ) () ;int (* SetVolume ) (int ) ;int (* UnMuteAudio ) () ;int (* MuteAudio ) () ;scalar_t__ Name; int (* DeInit ) () ;} ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 TYPE_1__** VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,void*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;

int FUNC_6(int VAR_7)
{
   int VAR_8;


   if (VAR_1)
      VAR_1->DeInit();


   if (VAR_7 == VAR_0)
      VAR_1 = VAR_2[0];
   else
   {

      for (VAR_8 = 0; VAR_2[VAR_8] != ((void*)0); VAR_8++)
      {
         if (VAR_2[VAR_8]->id == VAR_7)
         {

            VAR_1 = VAR_2[VAR_8];
            break;
         }
      }
   }

   if (VAR_1 == ((void*)0))
   {
      VAR_1 = &VAR_3;
      return -1;
   }

   if (VAR_1->Init() == -1)
   {




      FUNC_0(VAR_4, (void *)VAR_1->Name);

      VAR_1 = &VAR_3;
   }

   if (VAR_1)
   {
      if (VAR_5) VAR_1->MuteAudio();
      else VAR_1->UnMuteAudio();
      VAR_1->SetVolume(VAR_6);
   }

   return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int id; scalar_t__ (* Init ) () ;} ;
struct TYPE_9__ {int BCR1; } ;
struct TYPE_10__ {int isslave; TYPE_1__ onchip; } ;
typedef TYPE_2__ SH2_struct ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 TYPE_6__* VAR_2 ;
 TYPE_6__** VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 TYPE_2__* VAR_4 ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 () ;

int FUNC_4(int VAR_5)
{
   int VAR_6;


   if ((VAR_0 = (SH2_struct *)FUNC_1(1, sizeof(SH2_struct))) == ((void*)0))
      return -1;

   if (FUNC_0(VAR_0) != 0)
      return -1;

   VAR_0->onchip.BCR1 = 0x0000;
   VAR_0->isslave = 0;


   if ((VAR_4 = (SH2_struct *)FUNC_1(1, sizeof(SH2_struct))) == ((void*)0))
      return -1;

   if (FUNC_0(VAR_4) != 0)
      return -1;

   VAR_4->onchip.BCR1 = 0x8000;
   VAR_4->isslave = 1;


   if (VAR_5 == VAR_1)
      VAR_5 = 0;


   for (VAR_6 = 0; VAR_3[VAR_6] != ((void*)0); VAR_6++)
   {
      if (VAR_3[VAR_6]->id == VAR_5)
      {

         VAR_2 = VAR_3[VAR_6];
         break;
      }
   }

   if ((VAR_2 == ((void*)0)) || (VAR_2->Init() != 0)) {
      FUNC_2(VAR_0);
      FUNC_2(VAR_4);
      VAR_0 = VAR_4 = ((void*)0);
      return -1;
   }

   return 0;
}

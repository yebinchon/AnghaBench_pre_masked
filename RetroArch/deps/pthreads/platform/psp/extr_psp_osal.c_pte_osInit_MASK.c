
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ pte_osResult ;
struct TYPE_3__ {int cancelSem; } ;
typedef TYPE_1__ pspThreadData ;
typedef int cancelSemName ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,TYPE_1__*) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int ,int ,int,int ) ;
 int FUNC_6 (char*,int,char*) ;
 int VAR_4 ;

pte_osResult FUNC_7(void)
{
   pte_osResult VAR_5;
   pspThreadData *VAR_6;
   char VAR_7[64];


   VAR_5 = FUNC_2(VAR_0);

   if (VAR_5 == VAR_2)
   {

      VAR_5 = FUNC_1(&VAR_4);

      if (VAR_5 == VAR_2)
      {




         VAR_3 = FUNC_4();







         VAR_6 = (pspThreadData *) FUNC_0(sizeof(pspThreadData));

         if (VAR_6 == ((void*)0))
         {
            VAR_5 = VAR_1;
         }
         else
         {


            FUNC_3(VAR_3, VAR_4, VAR_6);


            FUNC_6(VAR_7, sizeof(VAR_7), "pthread_cancelSemGlobal");

            VAR_6->cancelSem = FUNC_5(VAR_7,
                  0,
                  0,
                  255,
                  0);
            VAR_5 = VAR_2;
         }
      }
   }

   return VAR_5;
}

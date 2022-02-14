
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int pte_osThreadHandle ;
typedef int pte_osResult ;
struct TYPE_8__ {int cancelSem; } ;
typedef TYPE_1__ pspThreadData ;
typedef int info ;
struct TYPE_10__ {scalar_t__ currentCount; } ;
struct TYPE_9__ {int size; scalar_t__ status; } ;
typedef scalar_t__ SceUID ;
typedef TYPE_2__ SceKernelThreadRunStatus ;
typedef TYPE_3__ SceKernelSemaInfo ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,TYPE_3__*) ;
 int FUNC_5 (int ,TYPE_2__*) ;

pte_osResult FUNC_6(pte_osThreadHandle VAR_6)
{
   pte_osResult VAR_7;
   pspThreadData *VAR_8 = FUNC_0(FUNC_3());

   while (1)
   {
      SceKernelThreadRunStatus VAR_9;


      FUNC_1(&VAR_9,0,sizeof(VAR_9));
      VAR_9.size = sizeof(VAR_9);
      FUNC_5(VAR_6, &VAR_9);

      if (VAR_9.status == VAR_1)
      {

         VAR_7 = VAR_4;
         break;
      }
      else
      {
         SceKernelSemaInfo VAR_10;

         if (VAR_8 != ((void*)0))
         {
            SceUID VAR_11;

            VAR_11 = FUNC_4(VAR_8->cancelSem, &VAR_10);

            if (VAR_11 == VAR_5)
            {
               if (VAR_10.currentCount > 0)
               {
                  VAR_7 = VAR_3;
                  break;
               }



               else
                  FUNC_2(VAR_0);
            }
            else
            {
               VAR_7 = VAR_2;
               break;
            }
         }
      }
   }


   return VAR_7;
}

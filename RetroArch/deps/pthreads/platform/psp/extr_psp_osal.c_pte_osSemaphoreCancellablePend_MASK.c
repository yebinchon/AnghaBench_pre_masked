
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int pte_osSemaphoreHandle ;
typedef int pte_osResult ;
struct TYPE_5__ {int cancelSem; } ;
typedef TYPE_1__ pspThreadData ;
typedef unsigned int clock_t ;
struct TYPE_6__ {scalar_t__ currentCount; } ;
typedef scalar_t__ SceUInt ;
typedef int SceUID ;
typedef TYPE_2__ SceKernelSemaInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (int ,int,scalar_t__*) ;

pte_osResult FUNC_6(pte_osSemaphoreHandle VAR_6, unsigned int *VAR_7)
{
   pspThreadData *VAR_8;

   VAR_8 = FUNC_1(FUNC_3());

   clock_t VAR_9;
   pte_osResult VAR_10 = VAR_3;
   unsigned int VAR_11;
   unsigned char VAR_12;

   VAR_9 = FUNC_0();


   if (VAR_7 == ((void*)0))
   {
      VAR_11 = 0;
      VAR_12 = 0;
   }
   else
   {
      VAR_11 = *VAR_7 * 1000;
      VAR_12 = 1;
   }

   while (1)
   {
      SceUInt VAR_13;
      int VAR_14;


      VAR_13 = 0;
      VAR_14 = FUNC_5(VAR_6, 1, &VAR_13);

      if (VAR_14 == VAR_5)
      {

         VAR_10 = VAR_3;
         break;
      }
      else if ((VAR_12) && ((FUNC_0() - VAR_9) > VAR_11))
      {

         VAR_10 = VAR_4;
         break;
      }
      else
      {
         SceKernelSemaInfo VAR_15;

         if (VAR_8 != ((void*)0))
         {
            SceUID VAR_16;

            VAR_16 = FUNC_4(VAR_8->cancelSem, &VAR_15);

            if (VAR_16 == VAR_5)
            {
               if (VAR_15.currentCount > 0)
               {
                  VAR_10 = VAR_2;
                  break;
               }



               else
                  FUNC_2(VAR_0);
            }
            else
            {
               VAR_10 = VAR_1;
               break;
            }
         }
      }
   }

   return VAR_10;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int pte_osThreadHandle ;
typedef int pte_osResult ;
struct TYPE_5__ {int cancelSem; } ;
typedef TYPE_1__ pspThreadData ;
struct TYPE_6__ {scalar_t__ currentCount; } ;
typedef scalar_t__ SceUID ;
typedef TYPE_2__ SceKernelSemaInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,TYPE_2__*) ;

pte_osResult FUNC_2(pte_osThreadHandle VAR_4)
{
   SceKernelSemaInfo VAR_5;
   SceUID VAR_6;
   pte_osResult VAR_7;
   pspThreadData *VAR_8 = FUNC_0(VAR_4);

   if (VAR_8 != ((void*)0))
   {
      VAR_6 = FUNC_1(VAR_8->cancelSem, &VAR_5);

      if (VAR_6 == VAR_3)
      {
         if (VAR_5.currentCount > 0)
            VAR_7 = VAR_1;
         else
            VAR_7 = VAR_2;
      }

      else
         VAR_7 = VAR_0;
   }

   else
      VAR_7 = VAR_0;

   return VAR_7;
}

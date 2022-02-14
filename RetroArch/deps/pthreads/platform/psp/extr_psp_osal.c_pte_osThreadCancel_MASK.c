
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pte_osThreadHandle ;
typedef int pte_osResult ;
struct TYPE_3__ {int cancelSem; } ;
typedef TYPE_1__ pspThreadData ;
typedef scalar_t__ SceUID ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int) ;

pte_osResult FUNC_2(pte_osThreadHandle VAR_3)
{
   pspThreadData *VAR_4 = FUNC_0(VAR_3);
   SceUID VAR_5 = FUNC_1(VAR_4->cancelSem, 1);

   if (VAR_5 == VAR_2)
      return VAR_1;

   return VAR_0;
}

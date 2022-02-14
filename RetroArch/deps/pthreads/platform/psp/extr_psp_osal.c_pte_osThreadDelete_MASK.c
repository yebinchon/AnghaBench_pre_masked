
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int pte_osThreadHandle ;
typedef int pte_osResult ;
struct TYPE_4__ {int cancelSem; } ;
typedef TYPE_1__ pspThreadData ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

pte_osResult FUNC_6(pte_osThreadHandle VAR_1)
{
   void *VAR_2 = FUNC_2(VAR_1);
   pspThreadData *VAR_3 = FUNC_1(VAR_1);

   FUNC_4(VAR_3->cancelSem);

   FUNC_0(VAR_3);

   FUNC_3(VAR_2);

   FUNC_5(VAR_1);

   return VAR_0;
}

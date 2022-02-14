
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pte_osSemaphoreHandle ;
typedef int pte_osResult ;
typedef scalar_t__ SceUInt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ,int,unsigned int*) ;

pte_osResult FUNC_1(pte_osSemaphoreHandle VAR_5, unsigned int *VAR_6)
{
   unsigned int VAR_7;
   unsigned int *VAR_8;
   SceUInt VAR_9;
   pte_osResult VAR_10;

   if (VAR_6 == ((void*)0))
      VAR_8 = ((void*)0);
   else
   {
      VAR_7 = *VAR_6 * 1000;
      VAR_8 = &VAR_7;
   }

   VAR_9 = FUNC_0(VAR_5, 1, VAR_8);

   if (VAR_9 == VAR_3)
      return VAR_1;

   if (VAR_9 == VAR_4)
      return VAR_2;

   return VAR_0;
}

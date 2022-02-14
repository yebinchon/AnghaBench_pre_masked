
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pte_osResult ;
typedef int pte_osMutexHandle ;
typedef unsigned int SceUInt ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,unsigned int*) ;

pte_osResult FUNC_1(pte_osMutexHandle VAR_2, unsigned int VAR_3)
{
   SceUInt VAR_4 = VAR_3*1000;
   int VAR_5 = FUNC_0(VAR_2, 1, &VAR_4);


   if (VAR_5 < 0)
      return VAR_1;

   return VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pte_osResult ;
typedef int pte_osMutexHandle ;
typedef int mutexName ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int,int,int ) ;
 int FUNC_1 (char*,int,char*,int) ;

pte_osResult FUNC_2(pte_osMutexHandle *VAR_2)
{
   static int VAR_3 = 0;
   char VAR_4[32];
   pte_osMutexHandle VAR_5;

   if (VAR_3++ > VAR_0)
      VAR_3 = 0;

   FUNC_1(VAR_4,sizeof(VAR_4),"mutex%d",VAR_3);

   VAR_5 = FUNC_0(VAR_4,
         0,
         1,
         1,
         0);

   *VAR_2 = VAR_5;

   return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int semName ;
typedef int pte_osSemaphoreHandle ;
typedef int pte_osResult ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int,int ,int ) ;
 int FUNC_1 (char*,int,char*,int) ;

pte_osResult FUNC_2(int VAR_3, pte_osSemaphoreHandle *VAR_4)
{
   pte_osSemaphoreHandle VAR_5;
   static int VAR_6 = 0;
   char VAR_7[32];

   if (VAR_6++ > VAR_0)
      VAR_6 = 0;

   FUNC_1(VAR_7,sizeof(VAR_7),"pthread_sem%d",VAR_6);

   VAR_5 = FUNC_0(VAR_7,
         0,
         VAR_3,
         VAR_2,
         0);

   *VAR_4 = VAR_5;

   return VAR_1;
}

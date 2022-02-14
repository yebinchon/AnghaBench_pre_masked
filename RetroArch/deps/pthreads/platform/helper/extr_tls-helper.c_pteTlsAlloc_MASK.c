
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pte_osResult ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

pte_osResult FUNC_2(unsigned int *VAR_5)
{
   int VAR_6;
   pte_osResult VAR_7 = VAR_0;

   FUNC_0(VAR_2);

   for (VAR_6=0;VAR_6<VAR_4;VAR_6++)
   {
      if (VAR_3[VAR_6] == 0)
      {
         VAR_3[VAR_6] = 1;

         *VAR_5 = VAR_6+1;
         VAR_7 = VAR_1;
         break;
      }
   }

   FUNC_1(VAR_2);

   return VAR_7;
}

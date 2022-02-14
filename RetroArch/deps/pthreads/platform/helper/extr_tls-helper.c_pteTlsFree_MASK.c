
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pte_osResult ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__* VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

pte_osResult FUNC_2(unsigned int VAR_4)
{
   pte_osResult VAR_5;

   if (VAR_3 != ((void*)0))
   {
      FUNC_0(VAR_2);

      VAR_3[VAR_4-1] = 0;

      FUNC_1(VAR_2);

      VAR_5 = VAR_1;
   }
   else
      VAR_5 = VAR_0;

   return VAR_5;
}

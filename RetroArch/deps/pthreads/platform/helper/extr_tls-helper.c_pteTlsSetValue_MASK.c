
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pte_osResult ;


 int VAR_0 ;
 int VAR_1 ;

pte_osResult FUNC_0(void *VAR_2, unsigned int VAR_3, void * VAR_4)
{
   pte_osResult VAR_5;
   void ** VAR_6 = (void **) VAR_2;

   if (VAR_6 != ((void*)0))
   {
      VAR_6[VAR_3-1] = VAR_4;
      VAR_5 = VAR_1;
   }
   else
      VAR_5 = VAR_0;

   return VAR_5;

}

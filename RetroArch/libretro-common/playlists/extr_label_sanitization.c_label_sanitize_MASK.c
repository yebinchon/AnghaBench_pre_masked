
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;

void FUNC_3(char *VAR_1, bool (*VAR_2)(char*), bool (*VAR_3)(char*))
{
   bool VAR_4 = 1;
   int VAR_5 = 0;
   int VAR_6 = 0;
   char VAR_7[VAR_0];

   for (; VAR_6 < VAR_0 && VAR_1[VAR_6] != '\0'; VAR_6++)
   {
      if (VAR_4)
      {

         if ((*VAR_2)(&VAR_1[VAR_6]))
            VAR_4 = 0;

         if (VAR_4)
            VAR_7[VAR_5++] = VAR_1[VAR_6];
      }
      else if ((*VAR_3)(&VAR_1[VAR_6]))
         VAR_4 = 1;
   }

   VAR_7[VAR_5] = '\0';

   FUNC_0(VAR_1, VAR_7, VAR_0);
}

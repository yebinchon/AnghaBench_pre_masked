
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RFILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (char*,size_t) ;

char* FUNC_4(RFILE *VAR_1)
{
   char *VAR_2 = ((void*)0);
   size_t VAR_3 = 8;
   size_t VAR_4 = 0;
   int VAR_5 = 0;
   char *VAR_6 = (char*)FUNC_2(9);

   if (!VAR_1 || !VAR_6)
   {
      if (VAR_6)
         FUNC_1(VAR_6);
      return ((void*)0);
   }

   VAR_5 = FUNC_0(VAR_1);

   while (VAR_5 != VAR_0 && VAR_5 != '\n')
   {
      if (VAR_4 == VAR_3)
      {
         VAR_3 *= 2;
         VAR_2 = (char*)FUNC_3(VAR_6, VAR_3 + 1);

         if (!VAR_2)
         {
            FUNC_1(VAR_6);
            return ((void*)0);
         }

         VAR_6 = VAR_2;
      }

      VAR_6[VAR_4++] = VAR_5;
      VAR_5 = FUNC_0(VAR_1);
   }

   VAR_6[VAR_4] = '\0';
   return VAR_6;
}

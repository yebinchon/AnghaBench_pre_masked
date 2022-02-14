
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RFILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

char* FUNC_1(RFILE *VAR_1, char *VAR_2, size_t VAR_3)
{
   int VAR_4 = 0;
   char *VAR_5 = VAR_2;
   if (!VAR_1)
      return ((void*)0);



   for (VAR_3--; VAR_3 > 0; VAR_3--)
   {
      if ((VAR_4 = FUNC_0(VAR_1)) == VAR_0)
         break;
      *VAR_5++ = VAR_4;
      if (VAR_4 == '\n')
         break;
   }
   *VAR_5 = 0;

   if (VAR_5 == VAR_2 && VAR_4 == VAR_0)
      return ((void*)0);
   return (VAR_2);
}

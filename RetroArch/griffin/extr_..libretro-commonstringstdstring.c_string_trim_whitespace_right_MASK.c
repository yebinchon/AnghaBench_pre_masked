
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char) ;
 size_t FUNC_1 (char* const) ;

char *FUNC_2(char *const VAR_0)
{
   if(VAR_0 && *VAR_0)
   {
      size_t VAR_1 = FUNC_1(VAR_0);
      char *VAR_2 = VAR_0 + VAR_1 - 1;

      while(VAR_2 != VAR_0 && FUNC_0((unsigned char)*VAR_2))
      {
         --VAR_2;
         --VAR_1;
      }

      VAR_2[FUNC_0((unsigned char)*VAR_2) ? 0 : 1] = '\0';
   }

   return VAR_0;
}

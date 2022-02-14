
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char) ;
 int FUNC_1 (char* const,char*,size_t) ;
 size_t FUNC_2 (char* const) ;

char *FUNC_3(char *const VAR_0)
{
   if(VAR_0 && *VAR_0)
   {
      size_t VAR_1 = FUNC_2(VAR_0);
      char *VAR_2 = VAR_0;

      while(*VAR_2 && FUNC_0((unsigned char)*VAR_2))
      {
         ++VAR_2;
         --VAR_1;
      }

      if(VAR_0 != VAR_2)
         FUNC_1(VAR_0, VAR_2, VAR_1 + 1);
   }

   return VAR_0;
}

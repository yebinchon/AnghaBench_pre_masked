
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*) ;

size_t FUNC_1(char *VAR_0, const char *VAR_1, size_t VAR_2, size_t VAR_3)
{
   if (VAR_3 < VAR_2)
   {
      const char *VAR_4 = VAR_1;
      char *VAR_5 = VAR_0 + VAR_2 -1;

      VAR_0 += VAR_3;

      for (; *VAR_4!='\0' && VAR_0 != VAR_5; VAR_0++, VAR_4++)
         *VAR_0 = *VAR_4;
      *VAR_0 = '\0';
   }
   VAR_3 += FUNC_0(VAR_1);

   return VAR_3;
}

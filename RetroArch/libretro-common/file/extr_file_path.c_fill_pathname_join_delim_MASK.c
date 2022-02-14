
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char*,char const*,size_t) ;
 size_t FUNC_1 (char*,char const*,size_t) ;
 size_t FUNC_2 (char const*) ;

size_t FUNC_3(char *VAR_0, const char *VAR_1,
      const char *VAR_2, const char VAR_3, size_t VAR_4)
{
   size_t VAR_5;

   if (VAR_0 == VAR_1)
      VAR_5 = FUNC_2(VAR_1);
   else
      VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_4);

   VAR_0[VAR_5] = VAR_3;
   VAR_0[VAR_5+1] = '\0';

   if (VAR_2)
      VAR_5 = FUNC_0(VAR_0, VAR_2, VAR_4);
   return VAR_5;
}

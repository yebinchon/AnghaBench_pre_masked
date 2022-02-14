
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char const*,size_t) ;
 size_t FUNC_1 (char const*) ;

char *FUNC_2(const char *VAR_0, const char *VAR_1)
{
   size_t VAR_2, VAR_3;
   size_t VAR_4 = FUNC_1(VAR_0);
   size_t VAR_5 = FUNC_1(VAR_1);

   if (VAR_5 > VAR_4)
      return ((void*)0);

   VAR_3 = VAR_4 - VAR_5;
   for (VAR_2 = 0; VAR_2 <= VAR_3; VAR_2++)
      if (!FUNC_0(VAR_0 + VAR_2, VAR_1, VAR_5))
         return (char*)VAR_0 + VAR_2;

   return ((void*)0);
}

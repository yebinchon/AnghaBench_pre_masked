
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (char const*,int *,int) ;

unsigned FUNC_3(const char *VAR_0)
{
   const char *VAR_1 = ((void*)0);

   if (FUNC_1(VAR_0))
      return 0;

   for (VAR_1 = VAR_0; *VAR_1 != '\0'; VAR_1++)
   {
      if (!FUNC_0(*VAR_1))
         return 0;
   }

   return (unsigned)FUNC_2(VAR_0, ((void*)0), 10);
}

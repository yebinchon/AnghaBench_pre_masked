
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char) ;

__attribute__((used)) static const char *FUNC_1(const char *VAR_0, const char *VAR_1)
{
   const char *VAR_2 = VAR_0;
   char VAR_3;

   while ((VAR_3 = *VAR_2) != 0)
   {
      if (FUNC_0(VAR_1, VAR_3) != 0)
         break;
      VAR_2++;
   }

   return VAR_2;
}

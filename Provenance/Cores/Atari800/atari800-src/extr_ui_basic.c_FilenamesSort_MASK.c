
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char const*) ;

__attribute__((used)) static void FUNC_1(const char **VAR_0, const char **VAR_1)
{
 while (VAR_0 + 1 < VAR_1) {
  const char **VAR_2 = VAR_0 + 1;
  const char **VAR_3 = VAR_1;
  const char *VAR_4 = *VAR_0;
  const char *VAR_5;
  while (VAR_2 < VAR_3) {
   if (FUNC_0(*VAR_2, VAR_4) <= 0)
    VAR_2++;
   else {
    VAR_3--;
    VAR_5 = *VAR_2;
    *VAR_2 = *VAR_3;
    *VAR_3 = VAR_5;
   }
  }
  VAR_2--;
  VAR_5 = *VAR_2;
  *VAR_2 = *VAR_0;
  *VAR_0 = VAR_5;
  FUNC_1(VAR_0, VAR_2);
  VAR_0 = VAR_3;
 }
}

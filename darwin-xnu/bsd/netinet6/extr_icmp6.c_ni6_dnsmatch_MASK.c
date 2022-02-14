
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char const*,int) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_0, int VAR_1, const char *VAR_2, int VAR_3)
{
 const char *VAR_4, *VAR_5;
 int VAR_6;


 if (VAR_1 == VAR_3 && FUNC_0(VAR_0, VAR_2, VAR_1) == 0)
  return 1;

 VAR_4 = VAR_0;
 VAR_5 = VAR_2;


 if (VAR_1 < 2 || VAR_3 < 2)
  return 0;
 if (VAR_4[VAR_1 - 1] != '\0' || VAR_5[VAR_3 - 1] != '\0')
  return 0;
 VAR_1--;
 VAR_3--;

 while (VAR_0 - VAR_4 < VAR_1 && VAR_2 - VAR_5 < VAR_3) {
  if (VAR_0 - VAR_4 + 1 > VAR_1 || VAR_2 - VAR_5 + 1 > VAR_3)
   return 0;

  if ((signed char)VAR_0[0] < 0 || (signed char)VAR_2[0] < 0)
   return 0;

  if (VAR_0[0] >= 64 || VAR_2[0] >= 64)
   return 0;


  if (VAR_0[0] == 0 && VAR_0 - VAR_4 == VAR_1 - 1)
   return 1;
  if (VAR_2[0] == 0 && VAR_2 - VAR_5 == VAR_3 - 1)
   return 1;
  if (VAR_0[0] == 0 || VAR_2[0] == 0)
   return 0;

  if (VAR_0[0] != VAR_2[0])
   return 0;
  VAR_6 = VAR_0[0];
  if (VAR_0 - VAR_4 + 1 + VAR_6 > VAR_1 || VAR_2 - VAR_5 + 1 + VAR_6 > VAR_3)
   return 0;
  if (FUNC_0(VAR_0 + 1, VAR_2 + 1, VAR_6) != 0)
   return 0;

  VAR_0 += 1 + VAR_6;
  VAR_2 += 1 + VAR_6;
 }

 if (VAR_0 - VAR_4 == VAR_1 && VAR_2 - VAR_5 == VAR_3)
  return 1;
 else
  return 0;
}

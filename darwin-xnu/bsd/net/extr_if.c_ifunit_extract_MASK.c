
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char*,size_t) ;
 size_t FUNC_1 (char const*) ;

int
FUNC_2(const char *VAR_0, char *VAR_1, size_t VAR_2, int *VAR_3)
{
 const char *VAR_4;
 size_t VAR_5, VAR_6;
 char VAR_7;
 int VAR_8;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == 0 || VAR_3 == ((void*)0))
  return (-1);

 VAR_5 = FUNC_1(VAR_0);
 if (VAR_5 < 2 || VAR_5 > VAR_2)
  return (-1);
 VAR_4 = VAR_0 + VAR_5 - 1;
 VAR_7 = *VAR_4;
 if (VAR_7 < '0' || VAR_7 > '9')
  return (-1);
 VAR_8 = 0;
 VAR_6 = 1;
 do {
  if (VAR_4 == VAR_0)
   return (-1);
  VAR_8 += (VAR_7 - '0') * VAR_6;
  if (VAR_8 > 1000000)
   return (-1);
  VAR_6 *= 10;
  VAR_7 = *--VAR_4;
 } while (VAR_7 >= '0' && VAR_7 <= '9');
 VAR_5 = VAR_4 - VAR_0 + 1;
 FUNC_0(VAR_0, VAR_1, VAR_5);
 VAR_1[VAR_5] = '\0';
 *VAR_3 = VAR_8;

 return (0);
}

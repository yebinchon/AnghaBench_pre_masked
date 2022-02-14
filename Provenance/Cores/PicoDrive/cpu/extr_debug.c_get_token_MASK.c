
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static const char *FUNC_3(char *VAR_0, int VAR_1, const char *VAR_2)
{
  const char *VAR_3, *VAR_4, *VAR_5;
  int VAR_6;

  VAR_3 = VAR_2;
  while (FUNC_0(*VAR_3))
    VAR_3++;
  if (*VAR_3 == 0)
    return ((void*)0);
  if (*VAR_3 == ';') {
    FUNC_2(VAR_0, ";");
    return VAR_3 + 1;
  }

  VAR_4 = VAR_3;
  while (*VAR_3 != 0 && *VAR_3 != ';' && !FUNC_0(*VAR_3))
    VAR_3++;
  VAR_5 = VAR_3;
  while (FUNC_0(*VAR_5))
    VAR_5++;

  VAR_6 = VAR_3 - VAR_4;
  if (VAR_6 > VAR_1 - 1)
    VAR_6 = VAR_1 - 1;
  FUNC_1(VAR_0, VAR_4, VAR_6);
  VAR_0[VAR_6] = 0;
  return VAR_5;
}

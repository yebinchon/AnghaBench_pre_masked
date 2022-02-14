
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,char) ;

__attribute__((used)) static char *
FUNC_1 (char *VAR_0, size_t VAR_1, const char *VAR_2)
{
  if (VAR_2)
    {
      if (VAR_2 < VAR_0 + VAR_1)
        VAR_2 = FUNC_0 (VAR_2, '\0') + 1;

      return VAR_2 >= VAR_0 + VAR_1 ? ((void*)0) : (char *) VAR_2;
    }
  else
    if (VAR_1 > 0)
      return VAR_0;
    else
      return 0;
}

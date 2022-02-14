
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char const*) ;

__attribute__((used)) static size_t
FUNC_1 (const char *VAR_0, size_t VAR_1)
{
  size_t VAR_2 = 0;
  while (VAR_1 > 0)
    {
      size_t VAR_3 = FUNC_0 (VAR_0);
      VAR_0 += VAR_3 + 1;
      VAR_1 -= VAR_3 + 1;
      VAR_2++;
    }
  return VAR_2;
}

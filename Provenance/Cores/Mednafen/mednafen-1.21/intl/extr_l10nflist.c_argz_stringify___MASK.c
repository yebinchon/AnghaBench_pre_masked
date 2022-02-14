
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char*) ;

__attribute__((used)) static void
FUNC_1 (char *VAR_0, size_t VAR_1, int VAR_2)
{
  while (VAR_1 > 0)
    {
      size_t VAR_3 = FUNC_0 (VAR_0);
      VAR_0 += VAR_3;
      VAR_1 -= VAR_3 + 1;
      if (VAR_1 > 0)
 *VAR_0++ = VAR_2;
    }
}

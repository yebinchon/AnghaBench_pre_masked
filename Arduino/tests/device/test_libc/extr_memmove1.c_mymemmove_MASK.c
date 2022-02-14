
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void
FUNC_0 (unsigned char *VAR_0, unsigned char *VAR_1, size_t VAR_2)
{
  if ((VAR_1 <= VAR_0 && VAR_1 + VAR_2 <= VAR_0)
      || VAR_1 >= VAR_0)
    while (VAR_2-- > 0)
      *VAR_0++ = *VAR_1++;
  else
    {
      VAR_0 += VAR_2;
      VAR_1 += VAR_2;
      while (VAR_2-- > 0)
 *--VAR_0 = *--VAR_1;
    }
}

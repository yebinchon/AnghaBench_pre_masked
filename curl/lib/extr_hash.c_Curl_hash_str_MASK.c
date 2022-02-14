
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
size_t FUNC_0(void *VAR_0, size_t VAR_1, size_t VAR_2)
{
  const char *VAR_3 = (const char *) VAR_0;
  const char *VAR_4 = VAR_3 + VAR_1;
  size_t VAR_5 = 5381;

  while(VAR_3 < VAR_4) {
    VAR_5 += VAR_5 << 5;
    VAR_5 ^= *VAR_3++;
  }

  return (VAR_5 % VAR_2);
}

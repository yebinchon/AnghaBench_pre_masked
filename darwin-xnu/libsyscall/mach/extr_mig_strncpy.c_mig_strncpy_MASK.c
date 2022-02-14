
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int
FUNC_0(
    char *VAR_0,
    const char *VAR_1,
    int VAR_2)
{
    int VAR_3;

    if (VAR_2 <= 0) {
  return 0;
 }

    for (VAR_3 = 1; VAR_3 < VAR_2; VAR_3++) {
  if (!(*VAR_0++ = *VAR_1++)) {
   return VAR_3;
  }
 }

    *VAR_0 = '\0';
    return VAR_3;
}

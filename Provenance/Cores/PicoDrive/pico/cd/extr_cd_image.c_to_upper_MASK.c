
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(char *VAR_0, const char *VAR_1)
{
  for (; *VAR_1 != 0; VAR_0++, VAR_1++) {
    if ('a' <= *VAR_1 && *VAR_1 <= 'z')
      *VAR_0 = *VAR_1 - 'a' + 'A';
    else
      *VAR_0 = *VAR_1;
  }
}

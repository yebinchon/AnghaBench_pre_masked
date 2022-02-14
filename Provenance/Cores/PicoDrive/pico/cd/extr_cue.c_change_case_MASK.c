
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(char *VAR_0, int VAR_1)
{
 for (; *VAR_0 != 0; VAR_0++) {
  if (VAR_1 && 'a' <= *VAR_0 && *VAR_0 <= 'z')
   *VAR_0 += 'A' - 'a';
  else if (!VAR_1 && 'A' <= *VAR_0 && *VAR_0 <= 'Z')
   *VAR_0 += 'a' - 'A';
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void
FUNC_0(char *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < 32; VAR_1++) {

  if (VAR_0[VAR_1] >= 0x7f || VAR_0[VAR_1] < 0x20)
   VAR_0[VAR_1] = ' ';

  if (VAR_0[VAR_1] == '?' ||
      VAR_0[VAR_1] == '*')
   VAR_0[VAR_1] = ' ';
 }
}

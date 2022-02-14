
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0(unsigned char *VAR_0, unsigned *VAR_1)
{
 if (!*VAR_1) return;
 if (*VAR_1 == 1 && VAR_0[0] == '.') return;
 if (*VAR_1 == 2 && VAR_0[0] == '.' && VAR_0[1] == '.') return;
 while (*VAR_1 && (VAR_0[*VAR_1 - 1] == '.' || VAR_0[*VAR_1 - 1] == ' '))
  (*VAR_1)--;
}

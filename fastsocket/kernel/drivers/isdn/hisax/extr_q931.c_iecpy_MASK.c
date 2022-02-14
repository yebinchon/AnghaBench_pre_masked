
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;



void
FUNC_0(u_char * VAR_0, u_char * VAR_1, int VAR_2)
{
 u_char *VAR_3;
 int VAR_4;

 VAR_3 = VAR_1 + VAR_2 + 2;
 VAR_4 = VAR_1[1] - VAR_2;
 while (VAR_4--)
  *VAR_0++ = *VAR_3++;
 *VAR_0++ = '\0';
}

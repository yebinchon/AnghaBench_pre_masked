
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0(int *VAR_0, int VAR_1, int VAR_2)
{
 for (; VAR_2 >= 8; VAR_2 -= 8, VAR_0 += 8)
  VAR_0[0] = VAR_0[1] = VAR_0[2] = VAR_0[3] =
  VAR_0[4] = VAR_0[5] = VAR_0[6] = VAR_0[7] = VAR_1;

 while (VAR_2--)
  *VAR_0++ = VAR_1;
}

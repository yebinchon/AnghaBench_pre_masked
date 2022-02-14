
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0(int *VAR_0, short *VAR_1, int VAR_2)
{
 VAR_2 >>= 1;
 while (VAR_2--)
 {
  *VAR_0++ += *VAR_1++ >> 1;
  *VAR_0++ += *VAR_1++ >> 1;
  VAR_1 += 1*2;
 }
}

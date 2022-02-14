
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0(unsigned short *VAR_0, void *VAR_1, int VAR_2)
{
 unsigned char *VAR_3 = VAR_1;

 for (; VAR_2; VAR_2--, VAR_3 += 2)
  *VAR_0++ = (VAR_3[0] << 8) | VAR_3[1];
}

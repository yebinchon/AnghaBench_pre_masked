
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0(void *VAR_0, void *VAR_1)
{
 unsigned short *VAR_2 = VAR_1;
 unsigned int *VAR_3 = VAR_0;
 int VAR_4;

 VAR_3 += 0x40;
 for (VAR_4 = 0x40; VAR_4; VAR_4--, VAR_2++, VAR_3++)
 {
  *VAR_3 = ((*VAR_2<<20)&0xe00000) | ((*VAR_2<<8)&0xe000) | ((*VAR_2>>4)&0xe0);
  *VAR_3 >>= 1;
  *VAR_3 |= *VAR_3 >> 3;
  VAR_3[0x40*2] = *VAR_3;
 }

 VAR_2 -= 0x40;
 for (VAR_4 = 0x40; VAR_4; VAR_4--, VAR_2++, VAR_3++)
 {
  *VAR_3 = ((*VAR_2<<20)&0xe00000) | ((*VAR_2<<8)&0xe000) | ((*VAR_2>>4)&0xe0);
  continue;
  *VAR_3 += 0x00404040;
  if (*VAR_3 & 0x01000000) *VAR_3 |= 0x00e00000;
  if (*VAR_3 & 0x00010000) *VAR_3 |= 0x0000e000;
  if (*VAR_3 & 0x00000100) *VAR_3 |= 0x000000e0;
  *VAR_3 &= 0x00e0e0e0;
  *VAR_3 |= *VAR_3 >> 3;
 }
}

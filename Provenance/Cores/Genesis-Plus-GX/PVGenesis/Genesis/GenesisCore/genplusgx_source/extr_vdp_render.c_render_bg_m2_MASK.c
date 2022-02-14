
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int uint16 ;


 scalar_t__ VAR_0 ;
 int** VAR_1 ;
 int* VAR_2 ;
 scalar_t__ VAR_3 ;
 int* VAR_4 ;

void FUNC_0(int VAR_5, int VAR_6)
{
  uint8 VAR_7, VAR_8;
  uint16 VAR_9;
  uint8 *VAR_10, *VAR_11;

  uint8 *VAR_12 = &VAR_1[0][0x20];
  uint8 *VAR_13 = &VAR_4[((VAR_2[2] << 10) & 0x3C00) + ((VAR_5 & 0xF8) << 2)];

  uint16 VAR_14 = ~0x3FC0 ^ (VAR_2[3] << 6);
  uint16 VAR_15 = ~0x3800 ^ (VAR_2[4] << 11);


  if (VAR_3 > VAR_0)
  {
    VAR_14 |= 0x1FC0;
    VAR_15 |= 0x1800;
  }

  VAR_10 = &VAR_4[((0x2000 + ((VAR_5 & 0xC0) << 5)) & VAR_14) + (VAR_5 & 7)];
  VAR_11 = &VAR_4[((0x2000 + ((VAR_5 & 0xC0) << 5)) & VAR_15) + (VAR_5 & 7)];


  VAR_6 = 32;

  do
  {
    VAR_9 = *VAR_13++ << 3 ;
    VAR_7 = VAR_10[VAR_9 & VAR_14];
    VAR_8 = VAR_11[VAR_9];

    *VAR_12++ = 0x10 | ((VAR_7 >> (((VAR_8 >> 7) & 1) << 2)) & 0x0F);
    *VAR_12++ = 0x10 | ((VAR_7 >> (((VAR_8 >> 6) & 1) << 2)) & 0x0F);
    *VAR_12++ = 0x10 | ((VAR_7 >> (((VAR_8 >> 5) & 1) << 2)) & 0x0F);
    *VAR_12++ = 0x10 | ((VAR_7 >> (((VAR_8 >> 4) & 1) << 2)) & 0x0F);
    *VAR_12++ = 0x10 | ((VAR_7 >> (((VAR_8 >> 3) & 1) << 2)) & 0x0F);
    *VAR_12++ = 0x10 | ((VAR_7 >> (((VAR_8 >> 2) & 1) << 2)) & 0x0F);
    *VAR_12++ = 0x10 | ((VAR_7 >> (((VAR_8 >> 1) & 1) << 2)) & 0x0F);
    *VAR_12++ = 0x10 | ((VAR_7 >> (((VAR_8 >> 0) & 1) << 2)) & 0x0F);
  }
  while (--VAR_6);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int uint16 ;


 scalar_t__ VAR_0 ;
 int** VAR_1 ;
 int FUNC_0 (int*,int,int) ;
 int* VAR_2 ;
 scalar_t__ VAR_3 ;
 int* VAR_4 ;

void FUNC_1(int VAR_5, int VAR_6)
{
  uint8 VAR_7;
  uint8 *VAR_8;

  uint8 VAR_9 = VAR_2[7];

  uint8 *VAR_10 = &VAR_1[0][0x20];
  uint8 *VAR_11 = &VAR_4[((VAR_2[2] << 10) & 0x3C00) + ((VAR_5 >> 3) * 40)];

  uint16 VAR_12 = ~0x3800 ^ (VAR_2[4] << 11);


  if (VAR_3 > VAR_0)
  {
    VAR_12 |= 0x1800;
  }

  VAR_8 = &VAR_4[((0x2000 + ((VAR_5 & 0xC0) << 5)) & VAR_12) + (VAR_5 & 7)];


  FUNC_0 (VAR_10, 0x40, 8);
  VAR_10 += 8;


  VAR_6 = 40;

  do
  {
    VAR_7 = VAR_8[*VAR_11++ << 3];

    *VAR_10++ = 0x10 | ((VAR_9 >> (((VAR_7 >> 7) & 1) << 2)) & 0x0F);
    *VAR_10++ = 0x10 | ((VAR_9 >> (((VAR_7 >> 6) & 1) << 2)) & 0x0F);
    *VAR_10++ = 0x10 | ((VAR_9 >> (((VAR_7 >> 5) & 1) << 2)) & 0x0F);
    *VAR_10++ = 0x10 | ((VAR_9 >> (((VAR_7 >> 4) & 1) << 2)) & 0x0F);
    *VAR_10++ = 0x10 | ((VAR_9 >> (((VAR_7 >> 3) & 1) << 2)) & 0x0F);
    *VAR_10++ = 0x10 | ((VAR_9 >> (((VAR_7 >> 2) & 1) << 2)) & 0x0F);
  }
  while (--VAR_6);


  FUNC_0(VAR_10, 0x40, 8);
}

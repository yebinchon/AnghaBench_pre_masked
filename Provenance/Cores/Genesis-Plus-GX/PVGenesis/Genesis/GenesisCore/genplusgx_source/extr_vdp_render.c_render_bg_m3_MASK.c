
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int uint16 ;


 int** VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;

void FUNC_0(int VAR_3, int VAR_4)
{
  uint8 VAR_5;
  uint16 VAR_6;

  uint8 *VAR_7 = &VAR_0[0][0x20];
  uint8 *VAR_8 = &VAR_2[((VAR_1[2] << 10) & 0x3C00) + ((VAR_3 & 0xF8) << 2)];
  uint8 *VAR_9 = &VAR_2[((VAR_1[4] << 11) & 0x3800) + ((VAR_3 >> 2) & 7)];


  VAR_4 = 32;

  do
  {
    VAR_6 = *VAR_8++;
    VAR_5 = VAR_9[VAR_6 << 3];

    *VAR_7++ = 0x10 | ((VAR_5 >> 4) & 0x0F);
    *VAR_7++ = 0x10 | ((VAR_5 >> 4) & 0x0F);
    *VAR_7++ = 0x10 | ((VAR_5 >> 4) & 0x0F);
    *VAR_7++ = 0x10 | ((VAR_5 >> 4) & 0x0F);
    *VAR_7++ = 0x10 | ((VAR_5 >> 0) & 0x0F);
    *VAR_7++ = 0x10 | ((VAR_5 >> 0) & 0x0F);
    *VAR_7++ = 0x10 | ((VAR_5 >> 0) & 0x0F);
    *VAR_7++ = 0x10 | ((VAR_5 >> 0) & 0x0F);
  }
  while (--VAR_4);
}

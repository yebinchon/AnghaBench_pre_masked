
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;


 int** VAR_0 ;
 int FUNC_0 (int*,int,int) ;
 int* VAR_1 ;
 int* VAR_2 ;

void FUNC_1(int VAR_3, int VAR_4)
{
  uint8 VAR_5;
  uint8 VAR_6 = VAR_1[7];

  uint8 *VAR_7 = &VAR_0[0][0x20];
  uint8 *VAR_8 = &VAR_2[((VAR_1[2] << 10) & 0x3C00) + ((VAR_3 >> 3) * 40)];
  uint8 *VAR_9 = &VAR_2[((VAR_1[4] << 11) & 0x3800) + (VAR_3 & 7)];


  FUNC_0 (VAR_7, 0x40, 8);
  VAR_7 += 8;


  VAR_4 = 40;

  do
  {
    VAR_5 = VAR_9[*VAR_8++];

    *VAR_7++ = 0x10 | ((VAR_6 >> (((VAR_5 >> 7) & 1) << 2)) & 0x0F);
    *VAR_7++ = 0x10 | ((VAR_6 >> (((VAR_5 >> 6) & 1) << 2)) & 0x0F);
    *VAR_7++ = 0x10 | ((VAR_6 >> (((VAR_5 >> 5) & 1) << 2)) & 0x0F);
    *VAR_7++ = 0x10 | ((VAR_6 >> (((VAR_5 >> 4) & 1) << 2)) & 0x0F);
    *VAR_7++ = 0x10 | ((VAR_6 >> (((VAR_5 >> 3) & 1) << 2)) & 0x0F);
    *VAR_7++ = 0x10 | ((VAR_6 >> (((VAR_5 >> 2) & 1) << 2)) & 0x0F);
  }
  while (--VAR_4);


  FUNC_0(VAR_7, 0x40, 8);
}

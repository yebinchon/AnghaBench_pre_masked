
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;


 int** VAR_0 ;
 int FUNC_0 (int*,int,int) ;
 int* VAR_1 ;

void FUNC_1(int VAR_2, int VAR_3)
{
  uint8 VAR_4 = VAR_1[7];

  uint8 *VAR_5 = &VAR_0[0][0x20];


  FUNC_0 (VAR_5, 0x40, 8);
  VAR_5 += 8;


  VAR_3 = 40;

  do
  {
    *VAR_5++ = 0x10 | ((VAR_4 >> 4) & 0x0F);
    *VAR_5++ = 0x10 | ((VAR_4 >> 4) & 0x0F);
    *VAR_5++ = 0x10 | ((VAR_4 >> 4) & 0x0F);
    *VAR_5++ = 0x10 | ((VAR_4 >> 4) & 0x0F);
    *VAR_5++ = 0x10 | ((VAR_4 >> 0) & 0x0F);
    *VAR_5++ = 0x10 | ((VAR_4 >> 0) & 0x0F);
  }
  while (--VAR_3);


  FUNC_0(VAR_5, 0x40, 8);
}

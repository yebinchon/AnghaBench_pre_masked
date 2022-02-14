
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucs4_t ;
typedef int conv_t ;


 int VAR_0 ;
 unsigned char* VAR_1 ;
 unsigned char* VAR_2 ;
 unsigned char* VAR_3 ;
 unsigned char* VAR_4 ;

__attribute__((used)) static int
FUNC_0 (conv_t VAR_5, unsigned char *VAR_6, ucs4_t VAR_7, int VAR_8)
{
  unsigned char VAR_9 = 0;
  if (VAR_7 < 0x0080) {
    *VAR_6 = VAR_7;
    return 1;
  }
  else if (VAR_7 >= 0x00a0 && VAR_7 < 0x0100)
    VAR_9 = VAR_1[VAR_7-0x00a0];
  else if (VAR_7 >= 0x0108 && VAR_7 < 0x0180)
    VAR_9 = VAR_2[VAR_7-0x0108];
  else if (VAR_7 >= 0x02d8 && VAR_7 < 0x02e0)
    VAR_9 = VAR_3[VAR_7-0x02d8];
  else if (VAR_7 == 0x2113)
    VAR_9 = 0xf2;
  else if (VAR_7 >= 0x2500 && VAR_7 < 0x25a8)
    VAR_9 = VAR_4[VAR_7-0x2500];
  if (VAR_9 != 0) {
    *VAR_6 = VAR_9;
    return 1;
  }
  return VAR_0;
}

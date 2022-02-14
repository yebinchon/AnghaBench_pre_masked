
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
 unsigned char* VAR_5 ;
 unsigned char* VAR_6 ;
 unsigned char* VAR_7 ;

__attribute__((used)) static int
FUNC_0 (conv_t VAR_8, unsigned char *VAR_9, ucs4_t VAR_10, int VAR_11)
{
  unsigned char VAR_12 = 0;
  if (VAR_10 < 0x0080) {
    *VAR_9 = VAR_10;
    return 1;
  }
  else if (VAR_10 >= 0x00a0 && VAR_10 < 0x0100)
    VAR_12 = VAR_1[VAR_10-0x00a0];
  else if (VAR_10 >= 0x0130 && VAR_10 < 0x0198)
    VAR_12 = VAR_2[VAR_10-0x0130];
  else if (VAR_10 >= 0x02c0 && VAR_10 < 0x02e0)
    VAR_12 = VAR_3[VAR_10-0x02c0];
  else if (VAR_10 == 0x03c0)
    VAR_12 = 0xb9;
  else if (VAR_10 >= 0x2010 && VAR_10 < 0x2048)
    VAR_12 = VAR_4[VAR_10-0x2010];
  else if (VAR_10 >= 0x2120 && VAR_10 < 0x2128)
    VAR_12 = VAR_5[VAR_10-0x2120];
  else if (VAR_10 >= 0x2200 && VAR_10 < 0x2268)
    VAR_12 = VAR_6[VAR_10-0x2200];
  else if (VAR_10 == 0x25ca)
    VAR_12 = 0xd7;
  else if (VAR_10 >= 0xfb00 && VAR_10 < 0xfb08)
    VAR_12 = VAR_7[VAR_10-0xfb00];
  if (VAR_12 != 0) {
    *VAR_9 = VAR_12;
    return 1;
  }
  return VAR_0;
}

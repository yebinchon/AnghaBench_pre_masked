
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

__attribute__((used)) static int
FUNC_0 (conv_t VAR_6, unsigned char *VAR_7, ucs4_t VAR_8, int VAR_9)
{
  unsigned char VAR_10 = 0;
  if (VAR_8 < 0x0080) {
    *VAR_7 = VAR_8;
    return 1;
  }
  else if (VAR_8 >= 0x0088 && VAR_8 < 0x00f8)
    VAR_10 = VAR_1[VAR_8-0x0088];
  else if (VAR_8 >= 0x0608 && VAR_8 < 0x0670)
    VAR_10 = VAR_2[VAR_8-0x0608];
  else if (VAR_8 >= 0x2500 && VAR_8 < 0x2520)
    VAR_10 = VAR_3[VAR_8-0x2500];
  else if (VAR_8 == 0x25a0)
    VAR_10 = 0x89;
  else if (VAR_8 >= 0xf8f0 && VAR_8 < 0xf900)
    VAR_10 = VAR_4[VAR_8-0xf8f0];
  else if (VAR_8 >= 0xfe70 && VAR_8 < 0xff00)
    VAR_10 = VAR_5[VAR_8-0xfe70];
  if (VAR_10 != 0) {
    *VAR_7 = VAR_10;
    return 1;
  }
  return VAR_0;
}


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

__attribute__((used)) static int
FUNC_0 (conv_t VAR_4, unsigned char *VAR_5, ucs4_t VAR_6, int VAR_7)
{
  unsigned char VAR_8 = 0;
  if (VAR_6 < 0x0080) {
    *VAR_5 = VAR_6;
    return 1;
  }
  else if (VAR_6 >= 0x00a0 && VAR_6 < 0x00c0)
    VAR_8 = VAR_1[VAR_6-0x00a0];
  else if (VAR_6 >= 0x0400 && VAR_6 < 0x04f0)
    VAR_8 = VAR_2[VAR_6-0x0400];
  else if (VAR_6 >= 0x2010 && VAR_6 < 0x2028)
    VAR_8 = VAR_3[VAR_6-0x2010];
  else if (VAR_6 == 0x2116)
    VAR_8 = 0xb9;
  if (VAR_8 != 0) {
    *VAR_5 = VAR_8;
    return 1;
  }
  return VAR_0;
}

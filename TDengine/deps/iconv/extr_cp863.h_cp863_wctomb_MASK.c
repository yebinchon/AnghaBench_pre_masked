
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
  else if (VAR_8 >= 0x00a0 && VAR_8 < 0x0100)
    VAR_10 = VAR_1[VAR_8-0x00a0];
  else if (VAR_8 == 0x0192)
    VAR_10 = 0x9f;
  else if (VAR_8 >= 0x0390 && VAR_8 < 0x03c8)
    VAR_10 = VAR_2[VAR_8-0x0390];
  else if (VAR_8 == 0x2017)
    VAR_10 = 0x8d;
  else if (VAR_8 == 0x207f)
    VAR_10 = 0xfc;
  else if (VAR_8 >= 0x2218 && VAR_8 < 0x2268)
    VAR_10 = VAR_3[VAR_8-0x2218];
  else if (VAR_8 >= 0x2310 && VAR_8 < 0x2328)
    VAR_10 = VAR_4[VAR_8-0x2310];
  else if (VAR_8 >= 0x2500 && VAR_8 < 0x25a8)
    VAR_10 = VAR_5[VAR_8-0x2500];
  if (VAR_10 != 0) {
    *VAR_7 = VAR_10;
    return 1;
  }
  return VAR_0;
}

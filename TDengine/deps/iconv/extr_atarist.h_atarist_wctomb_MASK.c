
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

__attribute__((used)) static int
FUNC_0 (conv_t VAR_7, unsigned char *VAR_8, ucs4_t VAR_9, int VAR_10)
{
  unsigned char VAR_11 = 0;
  if (VAR_9 < 0x0080) {
    *VAR_8 = VAR_9;
    return 1;
  }
  else if (VAR_9 >= 0x00a0 && VAR_9 < 0x0100)
    VAR_11 = VAR_1[VAR_9-0x00a0];
  else if (VAR_9 >= 0x0130 && VAR_9 < 0x0198)
    VAR_11 = VAR_2[VAR_9-0x0130];
  else if (VAR_9 >= 0x0390 && VAR_9 < 0x03c8)
    VAR_11 = VAR_3[VAR_9-0x0390];
  else if (VAR_9 >= 0x05d0 && VAR_9 < 0x05f0)
    VAR_11 = VAR_4[VAR_9-0x05d0];
  else if (VAR_9 == 0x2020)
    VAR_11 = 0xbb;
  else if (VAR_9 == 0x207f)
    VAR_11 = 0xfc;
  else if (VAR_9 == 0x2122)
    VAR_11 = 0xbf;
  else if (VAR_9 >= 0x2208 && VAR_9 < 0x2268)
    VAR_11 = VAR_5[VAR_9-0x2208];
  else if (VAR_9 >= 0x2310 && VAR_9 < 0x2328)
    VAR_11 = VAR_6[VAR_9-0x2310];
  if (VAR_11 != 0) {
    *VAR_8 = VAR_11;
    return 1;
  }
  return VAR_0;
}

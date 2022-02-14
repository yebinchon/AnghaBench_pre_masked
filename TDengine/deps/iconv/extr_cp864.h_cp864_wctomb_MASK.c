
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
  if (VAR_9 < 0x0020) {
    *VAR_8 = VAR_9;
    return 1;
  }
  else if (VAR_9 >= 0x0020 && VAR_9 < 0x0028)
    VAR_11 = VAR_1[VAR_9-0x0020];
  else if (VAR_9 >= 0x0028 && VAR_9 < 0x0080)
    VAR_11 = VAR_9;
  else if (VAR_9 >= 0x00a0 && VAR_9 < 0x00f8)
    VAR_11 = VAR_2[VAR_9-0x00a0];
  else if (VAR_9 == 0x03b2)
    VAR_11 = 0x90;
  else if (VAR_9 == 0x03c6)
    VAR_11 = 0x92;
  else if (VAR_9 >= 0x0608 && VAR_9 < 0x0670)
    VAR_11 = VAR_3[VAR_9-0x0608];
  else if (VAR_9 >= 0x2218 && VAR_9 < 0x2250)
    VAR_11 = VAR_4[VAR_9-0x2218];
  else if (VAR_9 >= 0x2500 && VAR_9 < 0x2540)
    VAR_11 = VAR_5[VAR_9-0x2500];
  else if (VAR_9 == 0x2592)
    VAR_11 = 0x84;
  else if (VAR_9 == 0x25a0)
    VAR_11 = 0xfe;
  else if (VAR_9 >= 0xfe78 && VAR_9 < 0xff00)
    VAR_11 = VAR_6[VAR_9-0xfe78];
  if (VAR_11 != 0) {
    *VAR_8 = VAR_11;
    return 1;
  }
  return VAR_0;
}

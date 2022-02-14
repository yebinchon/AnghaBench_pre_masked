
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucs4_t ;
typedef int conv_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0 (conv_t VAR_2, unsigned char *VAR_3, ucs4_t VAR_4, int VAR_5)
{
  if (VAR_4 < 0x80) {
    *VAR_3 = VAR_4;
    return 1;
  } else if (VAR_4 < 0x10000) {
    if (VAR_5 >= 6) {
      unsigned int VAR_6;
      VAR_3[0] = '\\';
      VAR_3[1] = 'u';
      VAR_6 = (VAR_4 >> 12) & 0x0f; VAR_3[2] = (VAR_6 < 10 ? '0'+VAR_6 : 'a'-10+VAR_6);
      VAR_6 = (VAR_4 >> 8) & 0x0f; VAR_3[3] = (VAR_6 < 10 ? '0'+VAR_6 : 'a'-10+VAR_6);
      VAR_6 = (VAR_4 >> 4) & 0x0f; VAR_3[4] = (VAR_6 < 10 ? '0'+VAR_6 : 'a'-10+VAR_6);
      VAR_6 = VAR_4 & 0x0f; VAR_3[5] = (VAR_6 < 10 ? '0'+VAR_6 : 'a'-10+VAR_6);
      return 6;
    } else
      return VAR_1;
  } else if (VAR_4 < 0x110000) {
    if (VAR_5 >= 12) {
      ucs4_t VAR_7 = 0xd800 + ((VAR_4 - 0x10000) >> 10);
      ucs4_t VAR_8 = 0xdc00 + ((VAR_4 - 0x10000) & 0x3ff);
      unsigned int VAR_9;
      VAR_3[0] = '\\';
      VAR_3[1] = 'u';
      VAR_9 = (VAR_7 >> 12) & 0x0f; VAR_3[2] = (VAR_9 < 10 ? '0'+VAR_9 : 'a'-10+VAR_9);
      VAR_9 = (VAR_7 >> 8) & 0x0f; VAR_3[3] = (VAR_9 < 10 ? '0'+VAR_9 : 'a'-10+VAR_9);
      VAR_9 = (VAR_7 >> 4) & 0x0f; VAR_3[4] = (VAR_9 < 10 ? '0'+VAR_9 : 'a'-10+VAR_9);
      VAR_9 = VAR_7 & 0x0f; VAR_3[5] = (VAR_9 < 10 ? '0'+VAR_9 : 'a'-10+VAR_9);
      VAR_3[6] = '\\';
      VAR_3[7] = 'u';
      VAR_9 = (VAR_8 >> 12) & 0x0f; VAR_3[8] = (VAR_9 < 10 ? '0'+VAR_9 : 'a'-10+VAR_9);
      VAR_9 = (VAR_8 >> 8) & 0x0f; VAR_3[9] = (VAR_9 < 10 ? '0'+VAR_9 : 'a'-10+VAR_9);
      VAR_9 = (VAR_8 >> 4) & 0x0f; VAR_3[10] = (VAR_9 < 10 ? '0'+VAR_9 : 'a'-10+VAR_9);
      VAR_9 = VAR_8 & 0x0f; VAR_3[11] = (VAR_9 < 10 ? '0'+VAR_9 : 'a'-10+VAR_9);
      return 12;
    } else
      return VAR_1;
  }
  return VAR_0;
}

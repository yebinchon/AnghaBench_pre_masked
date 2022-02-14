
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucs4_t ;
typedef int conv_t ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0 (conv_t VAR_1, unsigned char *VAR_2, ucs4_t VAR_3, int VAR_4)
{
  if (VAR_3 < 0xa0) {
    *VAR_2 = VAR_3;
    return 1;
  } else {
    int VAR_5;
    unsigned char VAR_6;
    if (VAR_3 < 0x10000) {
      VAR_5 = 6;
      VAR_6 = 'u';
    } else {
      VAR_5 = 10;
      VAR_6 = 'U';
    }
    if (VAR_4 >= VAR_5) {
      int VAR_7;
      VAR_2[0] = '\\';
      VAR_2[1] = VAR_6;
      VAR_2 += 2;
      for (VAR_7 = VAR_5-3; VAR_7 >= 0; VAR_7--) {
        unsigned int VAR_8 = (VAR_3 >> (4*VAR_7)) & 0x0f;
        *VAR_2++ = (VAR_8 < 10 ? '0'+VAR_8 : 'a'-10+VAR_8);
      }
      return VAR_5;
    } else
      return VAR_0;
  }
}

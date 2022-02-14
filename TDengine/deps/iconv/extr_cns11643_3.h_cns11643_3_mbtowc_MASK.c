
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucs4_t ;
typedef int conv_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 unsigned short* VAR_1 ;
 unsigned short* VAR_2 ;
 unsigned short* VAR_3 ;

__attribute__((used)) static int
FUNC_1 (conv_t VAR_4, ucs4_t *VAR_5, const unsigned char *VAR_6, int VAR_7)
{
  unsigned char VAR_8 = VAR_6[0];
  if ((VAR_8 >= 0x21 && VAR_8 <= 0x62) || (VAR_8 >= 0x64 && VAR_8 <= 0x67)) {
    if (VAR_7 >= 2) {
      unsigned char VAR_9 = VAR_6[1];
      if (VAR_9 >= 0x21 && VAR_9 < 0x7f) {
        unsigned int VAR_10 = 94 * (VAR_8 - 0x21) + (VAR_9 - 0x21);
        ucs4_t VAR_11 = 0xfffd;
        unsigned short VAR_12;
        if (VAR_10 < 6298) {
          if (VAR_10 < 6148)
            VAR_12 = VAR_1[VAR_10],
            VAR_11 = VAR_3[VAR_12>>8] | (VAR_12 & 0xff);
        } else {
          if (VAR_10 < 6590)
            VAR_12 = VAR_2[VAR_10-6298],
            VAR_11 = VAR_3[VAR_12>>8] | (VAR_12 & 0xff);
        }
        if (VAR_11 != 0xfffd) {
          *VAR_5 = VAR_11;
          return 2;
        }
      }
      return VAR_0;
    }
    return FUNC_0(0);
  }
  return VAR_0;
}

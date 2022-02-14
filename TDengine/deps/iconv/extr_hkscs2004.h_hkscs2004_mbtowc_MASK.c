
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
  if ((VAR_8 == 0x87) || (VAR_8 >= 0x8c && VAR_8 <= 0x8d)) {
    if (VAR_7 >= 2) {
      unsigned char VAR_9 = VAR_6[1];
      if ((VAR_9 >= 0x40 && VAR_9 < 0x7f) || (VAR_9 >= 0xa1 && VAR_9 < 0xff)) {
        unsigned int VAR_10 = 157 * (VAR_8 - 0x80) + (VAR_9 - (VAR_9 >= 0xa1 ? 0x62 : 0x40));
        ucs4_t VAR_11 = 0xfffd;
        unsigned short VAR_12;
        if (VAR_10 < 1884) {
          if (VAR_10 < 1157)
            VAR_12 = VAR_1[VAR_10-1099],
            VAR_11 = VAR_3[VAR_12>>8] | (VAR_12 & 0xff);
        } else {
          if (VAR_10 < 2073)
            VAR_12 = VAR_2[VAR_10-1884],
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

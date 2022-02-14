
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
 unsigned short* VAR_4 ;
 unsigned short* VAR_5 ;

__attribute__((used)) static int
FUNC_1 (conv_t VAR_6, ucs4_t *VAR_7, const unsigned char *VAR_8, int VAR_9)
{
  unsigned char VAR_10 = VAR_8[0];
  if ((VAR_10 >= 0x88 && VAR_10 <= 0x8b) || (VAR_10 >= 0x8d && VAR_10 <= 0xa0) || (VAR_10 >= 0xc6 && VAR_10 <= 0xc8) || (VAR_10 >= 0xf9 && VAR_10 <= 0xfe)) {
    if (VAR_9 >= 2) {
      unsigned char VAR_11 = VAR_8[1];
      if ((VAR_11 >= 0x40 && VAR_11 < 0x7f) || (VAR_11 >= 0xa1 && VAR_11 < 0xff)) {
        unsigned int VAR_12 = 157 * (VAR_10 - 0x80) + (VAR_11 - (VAR_11 >= 0xa1 ? 0x62 : 0x40));
        ucs4_t VAR_13 = 0xfffd;
        unsigned short VAR_14;
        if (VAR_12 < 2041) {
          if (VAR_12 < 1883)
            VAR_14 = VAR_1[VAR_12-1256],
            VAR_13 = VAR_5[VAR_14>>6] | (VAR_14 & 0x3f);
        } else if (VAR_12 < 10990) {
          if (VAR_12 < 5181)
            VAR_14 = VAR_2[VAR_12-2041],
            VAR_13 = VAR_5[VAR_14>>6] | (VAR_14 & 0x3f);
        } else if (VAR_12 < 18997) {
          if (VAR_12 < 11461)
            VAR_14 = VAR_3[VAR_12-10990],
            VAR_13 = VAR_5[VAR_14>>6] | (VAR_14 & 0x3f);
        } else {
          if (VAR_12 < 19939)
            VAR_14 = VAR_4[VAR_12-18997],
            VAR_13 = VAR_5[VAR_14>>6] | (VAR_14 & 0x3f);
        }
        if (VAR_13 != 0xfffd) {
          *VAR_7 = VAR_13;
          return 2;
        }
      }
      return VAR_0;
    }
    return FUNC_0(0);
  }
  return VAR_0;
}

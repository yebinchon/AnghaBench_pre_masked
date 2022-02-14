
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucs4_t ;
typedef int conv_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int*,unsigned char const*,int) ;
 unsigned short* VAR_1 ;
 unsigned short* VAR_2 ;
 int* VAR_3 ;
 int FUNC_2 (int ,int*,unsigned char const*,int) ;

__attribute__((used)) static int
FUNC_3 (conv_t VAR_4, ucs4_t *VAR_5, const unsigned char *VAR_6, int VAR_7)
{
  unsigned char VAR_8 = *VAR_6;

  if (VAR_8 < 0x80)
    return FUNC_1(VAR_4,VAR_5,VAR_6,VAR_7);

  if (VAR_8 >= 0x81 && VAR_8 < 0xff) {
    if (VAR_7 < 2)
      return FUNC_0(0);
    {
      unsigned char VAR_9 = VAR_6[1];
      if ((VAR_9 >= 0x40 && VAR_9 < 0x7f) || (VAR_9 >= 0xa1 && VAR_9 < 0xff)) {
        if (VAR_8 >= 0xa1) {
          if (VAR_8 < 0xa3) {
            unsigned int VAR_10 = 157 * (VAR_8 - 0xa1) + (VAR_9 - (VAR_9 >= 0xa1 ? 0x62 : 0x40));
            unsigned short VAR_11 = VAR_1[VAR_10];
            if (VAR_11 != 0xfffd) {
              *VAR_5 = (ucs4_t) VAR_11;
              return 2;
            }
          }
          if (!((VAR_8 == 0xc6 && VAR_9 >= 0xa1) || VAR_8 == 0xc7)) {
            if (!(VAR_8 == 0xc2 && VAR_9 == 0x55)) {
              int VAR_12 = FUNC_2(VAR_4,VAR_5,VAR_6,2);
              if (VAR_12 != VAR_0)
                return VAR_12;
              if (VAR_8 == 0xa3) {
                if (VAR_9 >= 0xc0 && VAR_9 <= 0xe1) {
                  *VAR_5 = (VAR_9 == 0xe1 ? 0x20ac : VAR_9 == 0xe0 ? 0x2421 : 0x2340 + VAR_9);
                  return 2;
                }
              } else if (VAR_8 == 0xf9) {
                if (VAR_9 >= 0xd6) {
                  *VAR_5 = VAR_3[VAR_9-0xd6];
                  return 2;
                }
              } else if (VAR_8 >= 0xfa) {
                *VAR_5 = 0xe000 + 157 * (VAR_8 - 0xfa) + (VAR_9 - (VAR_9 >= 0xa1 ? 0x62 : 0x40));
                return 2;
              }
            } else {

              *VAR_5 = 0x5f5e;
              return 2;
            }
          } else {

            unsigned int VAR_13 = 157 * (VAR_8 - 0xc6) + (VAR_9 - (VAR_9 >= 0xa1 ? 0x62 : 0x40));
            if (VAR_13 < 133) {

              unsigned short VAR_14 = VAR_2[VAR_13-63];
              if (VAR_14 != 0xfffd) {
                *VAR_5 = (ucs4_t) VAR_14;
                return 2;
              }
            } else if (VAR_13 < 216) {

              *VAR_5 = 0x3041 - 133 + VAR_13;
              return 2;
            } else if (VAR_13 < 302) {

              *VAR_5 = 0x30a1 - 216 + VAR_13;
              return 2;
            }
          }
        } else {

          *VAR_5 = (VAR_8 >= 0x8e ? 0xdb18 : 0xeeb8) + 157 * (VAR_8 - 0x81)
                 + (VAR_9 - (VAR_9 >= 0xa1 ? 0x62 : 0x40));
          return 2;
        }
      }
    }
  }
  return VAR_0;
}

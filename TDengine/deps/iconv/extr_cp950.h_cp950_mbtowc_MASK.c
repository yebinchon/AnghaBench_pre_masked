
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucs4_t ;
typedef int conv_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int*,unsigned char const*,int) ;
 int FUNC_2 (int ,int*,unsigned char const*,int) ;
 unsigned short* VAR_1 ;
 int FUNC_3 (int ,int*,unsigned char const*,int) ;

__attribute__((used)) static int
FUNC_4 (conv_t VAR_2, ucs4_t *VAR_3, const unsigned char *VAR_4, int VAR_5)
{
  unsigned char VAR_6 = *VAR_4;

  if (VAR_6 < 0x80)
    return FUNC_1(VAR_2,VAR_3,VAR_4,VAR_5);

  if (VAR_6 >= 0x81 && VAR_6 < 0xff) {
    if (VAR_5 < 2)
      return FUNC_0(0);
    {
      unsigned char VAR_7 = VAR_4[1];
      if ((VAR_7 >= 0x40 && VAR_7 < 0x7f) || (VAR_7 >= 0xa1 && VAR_7 < 0xff)) {
        if (VAR_6 >= 0xa1) {
          if (VAR_6 < 0xa3) {
            unsigned int VAR_8 = 157 * (VAR_6 - 0xa1) + (VAR_7 - (VAR_7 >= 0xa1 ? 0x62 : 0x40));
            unsigned short VAR_9 = VAR_1[VAR_8];
            if (VAR_9 != 0xfffd) {
              *VAR_3 = (ucs4_t) VAR_9;
              return 2;
            }
          }
          if (!((VAR_6 == 0xc6 && VAR_7 >= 0xa1) || VAR_6 == 0xc7)) {
            int VAR_10 = FUNC_2(VAR_2,VAR_3,VAR_4,2);
            if (VAR_10 != VAR_0)
              return VAR_10;
          }
          if (VAR_6 == 0xa3 && VAR_7 == 0xe1) {
            *VAR_3 = 0x20ac;
            return 2;
          }
          if (VAR_6 >= 0xfa) {

            *VAR_3 = 0xe000 + 157 * (VAR_6 - 0xfa) + (VAR_7 - (VAR_7 >= 0xa1 ? 0x62 : 0x40));
            return 2;
          }
        } else {


          *VAR_3 = (VAR_6 >= 0x8e ? 0xdb18 : 0xeeb8) + 157 * (VAR_6 - 0x81)
                 + (VAR_7 - (VAR_7 >= 0xa1 ? 0x62 : 0x40));
          return 2;
        }
      }
    }
    if (VAR_6 == 0xf9) {
      int VAR_11 = FUNC_3(VAR_2,VAR_3,VAR_4,2);
      if (VAR_11 != VAR_0)
        return VAR_11;
    }
  }
  return VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ucs4_t ;
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
  if ((VAR_8 >= 0x21 && VAR_8 <= 0x27) || (VAR_8 == 0x42) || (VAR_8 >= 0x44 && VAR_8 <= 0x7d)) {
    if (VAR_7 >= 2) {
      unsigned char VAR_9 = VAR_6[1];
      if (VAR_9 >= 0x21 && VAR_9 < 0x7f) {
        unsigned int VAR_10 = 94 * (VAR_8 - 0x21) + (VAR_9 - 0x21);
        unsigned short VAR_11 = 0xfffd;
        if (VAR_10 < 3102) {
          if (VAR_10 < 500)
            VAR_11 = VAR_1[VAR_10];
          else if (VAR_10 == 571)
            VAR_11 = 0x4ea0;
          else if (VAR_10 == 578)
            VAR_11 = 0x51ab;
          else if (VAR_10 == 583)
            VAR_11 = 0x52f9;
        } else if (VAR_10 < 3290) {
          if (VAR_10 < 3136)
            VAR_11 = VAR_2[VAR_10-3102];
        } else {
          if (VAR_10 < 8691)
            VAR_11 = VAR_3[VAR_10-3290];
        }
        if (VAR_11 != 0xfffd) {
          *VAR_5 = (ucs4_t) VAR_11;
          return 2;
        }
      }
      return VAR_0;
    }
    return FUNC_0(0);
  }
  return VAR_0;
}

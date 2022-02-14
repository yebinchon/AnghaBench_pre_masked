
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

__attribute__((used)) static int
FUNC_1 (conv_t VAR_3, ucs4_t *VAR_4, const unsigned char *VAR_5, int VAR_6)
{
  unsigned char VAR_7 = VAR_5[0];
  if ((VAR_7 >= 0x21 && VAR_7 <= 0x29) || (VAR_7 >= 0x30 && VAR_7 <= 0x77)) {
    if (VAR_6 >= 2) {
      unsigned char VAR_8 = VAR_5[1];
      if (VAR_8 >= 0x21 && VAR_8 < 0x7f) {
        unsigned int VAR_9 = 94 * (VAR_7 - 0x21) + (VAR_8 - 0x21);
        unsigned short VAR_10 = 0xfffd;
        if (VAR_9 < 1410) {
          if (VAR_9 < 831)
            VAR_10 = VAR_1[VAR_9];
        } else {
          if (VAR_9 < 8178)
            VAR_10 = VAR_2[VAR_9-1410];
        }
        if (VAR_10 != 0xfffd) {
          *VAR_4 = (ucs4_t) VAR_10;
          return 2;
        }
      }
      return VAR_0;
    }
    return FUNC_0(0);
  }
  return VAR_0;
}

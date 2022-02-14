
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
  if ((VAR_8 == 0x87) || (VAR_8 >= 0xed && VAR_8 <= 0xee) || (VAR_8 >= 0xfa && VAR_8 <= 0xfc)) {
    if (VAR_7 >= 2) {
      unsigned char VAR_9 = VAR_6[1];
      if ((VAR_9 >= 0x40 && VAR_9 < 0x7f) || (VAR_9 >= 0x80 && VAR_9 < 0xfd)) {
        unsigned int VAR_10 = 188 * (VAR_8 - (VAR_8 >= 0xe0 ? 0xc1 : 0x81)) + (VAR_9 - (VAR_9 >= 0x80 ? 0x41 : 0x40));
        unsigned short VAR_11 = 0xfffd;
        if (VAR_10 < 8272) {
          if (VAR_10 < 1220)
            VAR_11 = VAR_1[VAR_10-1128];
        } else if (VAR_10 < 10716) {
          if (VAR_10 < 8648)
            VAR_11 = VAR_2[VAR_10-8272];
        } else {
          if (VAR_10 < 11104)
            VAR_11 = VAR_3[VAR_10-10716];
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


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ucs4_t ;
typedef int conv_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 unsigned short* VAR_1 ;

__attribute__((used)) static int
FUNC_1 (conv_t VAR_2, ucs4_t *VAR_3, const unsigned char *VAR_4, int VAR_5)
{
  unsigned char VAR_6 = VAR_4[0];
  if ((VAR_6 >= 0x81 && VAR_6 <= 0xa0)) {
    if (VAR_5 >= 2) {
      unsigned char VAR_7 = VAR_4[1];
      if ((VAR_7 >= 0x40 && VAR_7 < 0x7f) || (VAR_7 >= 0x80 && VAR_7 < 0xff)) {
        unsigned int VAR_8 = 190 * (VAR_6 - 0x81) + (VAR_7 - (VAR_7 >= 0x80 ? 0x41 : 0x40));
        unsigned short VAR_9 = 0xfffd;
        {
          if (VAR_8 < 6080)
            VAR_9 = VAR_1[VAR_8];
        }
        if (VAR_9 != 0xfffd) {
          *VAR_3 = (ucs4_t) VAR_9;
          return 2;
        }
      }
      return VAR_0;
    }
    return FUNC_0(0);
  }
  return VAR_0;
}

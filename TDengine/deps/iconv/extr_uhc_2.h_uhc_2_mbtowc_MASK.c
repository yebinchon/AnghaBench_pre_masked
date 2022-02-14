
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ucs4_t ;
typedef int conv_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__* VAR_1 ;
 scalar_t__* VAR_2 ;

__attribute__((used)) static int
FUNC_1 (conv_t VAR_3, ucs4_t *VAR_4, const unsigned char *VAR_5, int VAR_6)
{
  unsigned char VAR_7 = VAR_5[0];
  if ((VAR_7 >= 0xa1 && VAR_7 <= 0xc6)) {
    if (VAR_6 >= 2) {
      unsigned char VAR_8 = VAR_5[1];
      if ((VAR_8 >= 0x41 && VAR_8 < 0x5b) || (VAR_8 >= 0x61 && VAR_8 < 0x7b) || (VAR_8 >= 0x81 && VAR_8 < 0xa1)) {
        unsigned int VAR_9 = VAR_7 - 0xa1;
        unsigned int VAR_10 = VAR_8 - (VAR_8 >= 0x81 ? 0x4d : VAR_8 >= 0x61 ? 0x47 : 0x41);
        unsigned int VAR_11 = 84 * VAR_9 + VAR_10;
        if (VAR_11 < 3126) {
          *VAR_4 = (ucs4_t) (VAR_1[2*VAR_9+(VAR_10>=42?1:0)] + VAR_2[VAR_11]);
          return 2;
        }
      }
      return VAR_0;
    }
    return FUNC_0(0);
  }
  return VAR_0;
}

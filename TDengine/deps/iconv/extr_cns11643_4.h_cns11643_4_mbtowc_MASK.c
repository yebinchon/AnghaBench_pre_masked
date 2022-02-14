
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

__attribute__((used)) static int
FUNC_1 (conv_t VAR_5, ucs4_t *VAR_6, const unsigned char *VAR_7, int VAR_8)
{
  unsigned char VAR_9 = VAR_7[0];
  if ((VAR_9 >= 0x21 && VAR_9 <= 0x6e)) {
    if (VAR_8 >= 2) {
      unsigned char VAR_10 = VAR_7[1];
      if (VAR_10 >= 0x21 && VAR_10 < 0x7f) {
        unsigned int VAR_11 = 94 * (VAR_9 - 0x21) + (VAR_10 - 0x21);
        ucs4_t VAR_12 = 0xfffd;
        unsigned short VAR_13;
        {
          if (VAR_11 < 2914)
            VAR_13 = VAR_1[VAR_11],
            VAR_12 = VAR_2[VAR_13>>8] | (VAR_13 & 0xff);
          else if (VAR_11 < 7298)
            VAR_13 = VAR_3[VAR_11-2914],
            VAR_12 = VAR_4[VAR_13>>8] | (VAR_13 & 0xff);
        }
        if (VAR_12 != 0xfffd) {
          *VAR_6 = VAR_12;
          return 2;
        }
      }
      return VAR_0;
    }
    return FUNC_0(0);
  }
  return VAR_0;
}

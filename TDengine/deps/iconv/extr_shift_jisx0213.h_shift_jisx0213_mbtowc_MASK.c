
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ucs4_t ;
typedef TYPE_1__* conv_t ;
struct TYPE_3__ {int istate; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,unsigned char) ;
 int** VAR_1 ;

__attribute__((used)) static int
FUNC_2 (conv_t VAR_2, ucs4_t *VAR_3, const unsigned char *VAR_4, int VAR_5)
{
  ucs4_t VAR_6 = VAR_2->istate;
  if (VAR_6) {

    VAR_2->istate = 0;
    *VAR_3 = VAR_6;
    return 0;
  } else {
    unsigned char VAR_7 = *VAR_4;
    if (VAR_7 < 0x80) {

      if (VAR_7 == 0x5c)
        *VAR_3 = (ucs4_t) 0x00a5;
      else if (VAR_7 == 0x7e)
        *VAR_3 = (ucs4_t) 0x203e;
      else
        *VAR_3 = (ucs4_t) VAR_7;
      return 1;
    } else if (VAR_7 >= 0xa1 && VAR_7 <= 0xdf) {
      *VAR_3 = VAR_7 + 0xfec0;
      return 1;
    } else {
      if ((VAR_7 >= 0x81 && VAR_7 <= 0x9f) || (VAR_7 >= 0xe0 && VAR_7 <= 0xfc)) {

        if (VAR_5 >= 2) {
          unsigned char VAR_8 = VAR_4[1];
          if ((VAR_8 >= 0x40 && VAR_8 <= 0x7e) || (VAR_8 >= 0x80 && VAR_8 <= 0xfc)) {
            unsigned int VAR_9;
            ucs4_t VAR_10;

            if (VAR_7 < 0xe0)
              VAR_7 -= 0x81;
            else
              VAR_7 -= 0xc1;
            if (VAR_8 < 0x80)
              VAR_8 -= 0x40;
            else
              VAR_8 -= 0x41;

            VAR_9 = 2 * VAR_7;
            if (VAR_8 >= 0x5e)
              VAR_8 -= 0x5e, VAR_9++;
            VAR_8 += 0x21;
            if (VAR_9 >= 0x5e) {

              if (VAR_9 >= 0x67)
                VAR_9 += 230;
              else if (VAR_9 >= 0x63 || VAR_9 == 0x5f)
                VAR_9 += 168;
              else
                VAR_9 += 162;
            }
            VAR_10 = FUNC_1(0x121+VAR_9,VAR_8);
            if (VAR_10) {
              if (VAR_10 < 0x80) {

                ucs4_t VAR_11 = VAR_1[VAR_10 - 1][0];
                ucs4_t VAR_12 = VAR_1[VAR_10 - 1][1];


                *VAR_3 = VAR_11;
                VAR_2->istate = VAR_12;
              } else
                *VAR_3 = VAR_10;
              return 2;
            }
          }
        } else
          return FUNC_0(0);
      }
      return VAR_0;
    }
  }
}

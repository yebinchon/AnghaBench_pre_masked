
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ucs4_t ;
typedef TYPE_1__* conv_t ;
struct TYPE_7__ {unsigned int idx; unsigned int len; } ;
struct TYPE_6__ {unsigned short base; unsigned short composed; } ;
struct TYPE_5__ {unsigned short istate; } ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 unsigned short* VAR_0 ;
 unsigned short* VAR_1 ;
 unsigned short* VAR_2 ;
 TYPE_3__* VAR_3 ;
 TYPE_2__* VAR_4 ;

__attribute__((used)) static int
FUNC_2 (conv_t VAR_5, ucs4_t *VAR_6, const unsigned char *VAR_7, int VAR_8)
{
  unsigned char VAR_9 = *VAR_7;
  unsigned short VAR_10;
  unsigned short VAR_11;
  if (VAR_9 < 0x18)
    VAR_10 = VAR_0[VAR_9];
  else if (VAR_9 < 0x80)
    VAR_10 = VAR_9;
  else
    VAR_10 = VAR_1[VAR_9-0x80];
  VAR_11 = VAR_5->istate;
  if (VAR_11) {
    if (VAR_10 >= 0x0300 && VAR_10 < 0x0340) {

      unsigned int VAR_12;
      unsigned int VAR_13, VAR_14;
      switch (VAR_10) {
        case 0x0300: VAR_12 = 0; break;
        case 0x0301: VAR_12 = 1; break;
        case 0x0303: VAR_12 = 2; break;
        case 0x0309: VAR_12 = 3; break;
        case 0x0323: VAR_12 = 4; break;
        default: FUNC_1();
      }
      VAR_13 = VAR_3[VAR_12].idx;
      VAR_14 = VAR_13 + VAR_3[VAR_12].len-1;
      if (VAR_11 >= VAR_4[VAR_13].base
          && VAR_11 <= VAR_4[VAR_14].base) {
        unsigned int VAR_15;
        for (;;) {
          VAR_15 = (VAR_13+VAR_14)>>1;
          if (VAR_11 == VAR_4[VAR_15].base)
            break;
          if (VAR_11 < VAR_4[VAR_15].base) {
            if (VAR_13 == VAR_15)
              goto not_combining;
            VAR_14 = VAR_15;
          } else {
            if (VAR_13 != VAR_15)
              VAR_13 = VAR_15;
            else {
              VAR_15 = VAR_14;
              if (VAR_11 == VAR_4[VAR_15].base)
                break;
              goto not_combining;
            }
          }
        }
        VAR_11 = VAR_4[VAR_15].composed;

        VAR_5->istate = 0;
        *VAR_6 = (ucs4_t) VAR_11;
        return 1;
      }
    }
  not_combining:

    VAR_5->istate = 0;
    *VAR_6 = (ucs4_t) VAR_11;
    return 0;
  }
  if (VAR_10 >= 0x0041 && VAR_10 <= 0x01b0
      && ((VAR_2[(VAR_10 - 0x0040) >> 5] >> (VAR_10 & 0x1f)) & 1)) {

    VAR_5->istate = VAR_10;
    return FUNC_0(1);
  } else {

    *VAR_6 = (ucs4_t) VAR_10;
    return 1;
  }
}

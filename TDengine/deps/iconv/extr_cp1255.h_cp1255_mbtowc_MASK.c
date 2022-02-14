
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ucs4_t ;
typedef TYPE_1__* conv_t ;
struct TYPE_7__ {unsigned int idx; unsigned int len; } ;
struct TYPE_6__ {unsigned short base; unsigned short composed; } ;
struct TYPE_5__ {unsigned short istate; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 unsigned short* VAR_1 ;
 TYPE_4__* VAR_2 ;
 TYPE_3__* VAR_3 ;

__attribute__((used)) static int
FUNC_1 (conv_t VAR_4, ucs4_t *VAR_5, const unsigned char *VAR_6, int VAR_7)
{
  unsigned char VAR_8 = *VAR_6;
  unsigned short VAR_9;
  unsigned short VAR_10;
  if (VAR_8 < 0x80) {
    VAR_9 = VAR_8;
  } else {
    VAR_9 = VAR_1[VAR_8-0x80];
    if (VAR_9 == 0xfffd)
      return VAR_0;
  }
  VAR_10 = VAR_4->istate;
  if (VAR_10) {
    if (VAR_9 >= 0x05b0 && VAR_9 < 0x05c5) {

      unsigned int VAR_11;
      unsigned int VAR_12, VAR_13;
      switch (VAR_9) {
        case 0x05b4: VAR_11 = 0; break;
        case 0x05b7: VAR_11 = 1; break;
        case 0x05b8: VAR_11 = 2; break;
        case 0x05b9: VAR_11 = 3; break;
        case 0x05bc: VAR_11 = 4; break;
        case 0x05bf: VAR_11 = 5; break;
        case 0x05c1: VAR_11 = 6; break;
        case 0x05c2: VAR_11 = 7; break;
        default: goto not_combining;
      }
      VAR_12 = VAR_2[VAR_11].idx;
      VAR_13 = VAR_12 + VAR_2[VAR_11].len-1;
      if (VAR_10 >= VAR_3[VAR_12].base
          && VAR_10 <= VAR_3[VAR_13].base) {
        unsigned int VAR_14;
        for (;;) {
          VAR_14 = (VAR_12+VAR_13)>>1;
          if (VAR_10 == VAR_3[VAR_14].base)
            break;
          if (VAR_10 < VAR_3[VAR_14].base) {
            if (VAR_12 == VAR_14)
              goto not_combining;
            VAR_13 = VAR_14;
          } else {
            if (VAR_12 != VAR_14)
              VAR_12 = VAR_14;
            else {
              VAR_14 = VAR_13;
              if (VAR_10 == VAR_3[VAR_14].base)
                break;
              goto not_combining;
            }
          }
        }
        VAR_10 = VAR_3[VAR_14].composed;
        if (VAR_10 == 0xfb2a || VAR_10 == 0xfb2b || VAR_10 == 0xfb49) {

          VAR_4->istate = VAR_10;
          return FUNC_0(1);
        } else {

          VAR_4->istate = 0;
          *VAR_5 = (ucs4_t) VAR_10;
          return 1;
        }
      }
    }
  not_combining:

    VAR_4->istate = 0;
    *VAR_5 = (ucs4_t) VAR_10;
    return 0;
  }
  if ((VAR_9 >= 0x05d0 && VAR_9 <= 0x05ea && ((0x07db5f7f >> (VAR_9 - 0x05d0)) & 1))
      || VAR_9 == 0x05f2) {

    VAR_4->istate = VAR_9;
    return FUNC_0(1);
  } else {

    *VAR_5 = (ucs4_t) VAR_9;
    return 1;
  }
}

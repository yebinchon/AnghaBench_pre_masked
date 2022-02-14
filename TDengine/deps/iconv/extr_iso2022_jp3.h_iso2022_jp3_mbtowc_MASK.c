
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int ucs4_t ;
typedef int state_t ;
typedef TYPE_1__* conv_t ;
struct TYPE_6__ {int istate; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;






 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,int*,unsigned char const*,int) ;
 int FUNC_4 (TYPE_1__*,int*,unsigned char const*,int) ;
 int FUNC_5 (TYPE_1__*,int*,unsigned char const*,int) ;
 int FUNC_6 (int,unsigned char const) ;
 int** VAR_2 ;

__attribute__((used)) static int
FUNC_7 (conv_t VAR_3, ucs4_t *VAR_4, const unsigned char *VAR_5, int VAR_6)
{
  ucs4_t VAR_7 = VAR_3->istate >> 3;
  if (VAR_7) {

    VAR_3->istate &= 7;
    *VAR_4 = VAR_7;
    return 0;
  } else {
    state_t VAR_8 = VAR_3->istate;
    int VAR_9 = 0;
    unsigned char VAR_10;
    for (;;) {
      VAR_10 = *VAR_5;
      if (VAR_10 == VAR_0) {
        if (VAR_6 < VAR_9+3)
          goto none;
        if (VAR_5[1] == '(') {
          if (VAR_5[2] == 'B') {
            VAR_8 = 133;
            VAR_5 += 3; VAR_9 += 3;
            if (VAR_6 < VAR_9+1)
              goto none;
            continue;
          }
          if (VAR_5[2] == 'J') {
            VAR_8 = 131;
            VAR_5 += 3; VAR_9 += 3;
            if (VAR_6 < VAR_9+1)
              goto none;
            continue;
          }
          if (VAR_5[2] == 'I') {
            VAR_8 = 132;
            VAR_5 += 3; VAR_9 += 3;
            if (VAR_6 < VAR_9+1)
              goto none;
            continue;
          }
          goto ilseq;
        }
        if (VAR_5[1] == '$') {
          if (VAR_5[2] == '@' || VAR_5[2] == 'B') {

            VAR_8 = 130;
            VAR_5 += 3; VAR_9 += 3;
            if (VAR_6 < VAR_9+1)
              goto none;
            continue;
          }
          if (VAR_5[2] == '(') {
            if (VAR_6 < VAR_9+4)
              goto none;
            if (VAR_5[3] == 'O' || VAR_5[3] == 'Q') {
              VAR_8 = 129;
              VAR_5 += 4; VAR_9 += 4;
              if (VAR_6 < VAR_9+1)
                goto none;
              continue;
            }
            if (VAR_5[3] == 'P') {
              VAR_8 = 128;
              VAR_5 += 4; VAR_9 += 4;
              if (VAR_6 < VAR_9+1)
                goto none;
              continue;
            }
          }
          goto ilseq;
        }
        goto ilseq;
      }
      break;
    }
    switch (VAR_8) {
      case 133:
        if (VAR_10 < 0x80) {
          int VAR_11 = FUNC_3(VAR_3,VAR_4,VAR_5,1);
          if (VAR_11 == VAR_1)
            goto ilseq;
          if (VAR_11 != 1) FUNC_2();
          VAR_3->istate = VAR_8;
          return VAR_9+1;
        } else
          goto ilseq;
      case 131:
        if (VAR_10 < 0x80) {
          int VAR_12 = FUNC_4(VAR_3,VAR_4,VAR_5,1);
          if (VAR_12 == VAR_1)
            goto ilseq;
          if (VAR_12 != 1) FUNC_2();
          VAR_3->istate = VAR_8;
          return VAR_9+1;
        } else
          goto ilseq;
      case 132:
        if (VAR_10 < 0x80) {
          unsigned char VAR_13 = VAR_10+0x80;
          int VAR_14 = FUNC_4(VAR_3,VAR_4,&VAR_13,1);
          if (VAR_14 == VAR_1)
            goto ilseq;
          if (VAR_14 != 1) FUNC_2();
          VAR_3->istate = VAR_8;
          return VAR_9+1;
        } else
          goto ilseq;
      case 130:
        if (VAR_6 < VAR_9+2)
          goto none;
        if (VAR_5[0] < 0x80 && VAR_5[1] < 0x80) {
          int VAR_15 = FUNC_5(VAR_3,VAR_4,VAR_5,2);
          if (VAR_15 == VAR_1)
            goto ilseq;
          if (VAR_15 != 2) FUNC_2();
          VAR_3->istate = VAR_8;
          return VAR_9+2;
        } else
          goto ilseq;
      case 129:
      case 128:
        if (VAR_6 < VAR_9+2)
          goto none;
        if (VAR_5[0] < 0x80 && VAR_5[1] < 0x80) {
          ucs4_t VAR_16 = FUNC_6(((VAR_8-129 +1)<<8)+VAR_5[0],VAR_5[1]);
          if (VAR_16) {
            if (VAR_16 < 0x80) {

              ucs4_t VAR_17 = VAR_2[VAR_16 - 1][0];
              ucs4_t VAR_18 = VAR_2[VAR_16 - 1][1];


              *VAR_4 = VAR_17;
              VAR_3->istate = (VAR_18 << 3) | VAR_8;
            } else {
              *VAR_4 = VAR_16;
              VAR_3->istate = VAR_8;
            }
            return VAR_9+2;
          }
        }
        goto ilseq;
      default: FUNC_2();
    }
  none:
    VAR_3->istate = VAR_8;
    return FUNC_1(VAR_9);

  ilseq:
    VAR_3->istate = VAR_8;
    return FUNC_0(VAR_9);
  }
}

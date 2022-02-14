
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
 int FUNC_3 (TYPE_1__*,int *,unsigned char const*,int) ;
 int FUNC_4 (TYPE_1__*,int *,unsigned char const*,int) ;
 int FUNC_5 (TYPE_1__*,int *,unsigned char const*,int) ;

__attribute__((used)) static int
FUNC_6 (conv_t VAR_2, ucs4_t *VAR_3, const unsigned char *VAR_4, int VAR_5)
{
  state_t VAR_6 = VAR_2->istate;
  int VAR_7 = 0;
  unsigned char VAR_8;
  for (;;) {
    VAR_8 = *VAR_4;
    if (VAR_8 == VAR_0) {
      if (VAR_5 < VAR_7+3)
        goto none;
      if (VAR_4[1] == '(') {
        if (VAR_4[2] == 'B') {
          VAR_6 = 130;
          VAR_4 += 3; VAR_7 += 3;
          if (VAR_5 < VAR_7+1)
            goto none;
          continue;
        }
        if (VAR_4[2] == 'J') {
          VAR_6 = 129;
          VAR_4 += 3; VAR_7 += 3;
          if (VAR_5 < VAR_7+1)
            goto none;
          continue;
        }
        goto ilseq;
      }
      if (VAR_4[1] == '$') {
        if (VAR_4[2] == '@' || VAR_4[2] == 'B') {

          VAR_6 = 128;
          VAR_4 += 3; VAR_7 += 3;
          if (VAR_5 < VAR_7+1)
            goto none;
          continue;
        }
        goto ilseq;
      }
      goto ilseq;
    }
    break;
  }
  switch (VAR_6) {
    case 130:
      if (VAR_8 < 0x80) {
        int VAR_9 = FUNC_3(VAR_2,VAR_3,VAR_4,1);
        if (VAR_9 == VAR_1)
          goto ilseq;
        if (VAR_9 != 1) FUNC_2();
        VAR_2->istate = VAR_6;
        return VAR_7+1;
      } else
        goto ilseq;
    case 129:
      if (VAR_8 < 0x80) {
        int VAR_10 = FUNC_4(VAR_2,VAR_3,VAR_4,1);
        if (VAR_10 == VAR_1)
          goto ilseq;
        if (VAR_10 != 1) FUNC_2();
        VAR_2->istate = VAR_6;
        return VAR_7+1;
      } else
        goto ilseq;
    case 128:
      if (VAR_5 < VAR_7+2)
        goto none;
      if (VAR_4[0] < 0x80 && VAR_4[1] < 0x80) {
        int VAR_11 = FUNC_5(VAR_2,VAR_3,VAR_4,2);
        if (VAR_11 == VAR_1)
          goto ilseq;
        if (VAR_11 != 2) FUNC_2();
        VAR_2->istate = VAR_6;
        return VAR_7+2;
      } else
        goto ilseq;
    default: FUNC_2();
  }

none:
  VAR_2->istate = VAR_6;
  return FUNC_1(VAR_7);

ilseq:
  VAR_2->istate = VAR_6;
  return FUNC_0(VAR_7);
}

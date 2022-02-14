
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef int ucs4_t ;
typedef void* state_t ;
typedef TYPE_1__* conv_t ;
struct TYPE_11__ {void* istate; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,int*,unsigned char const*,int) ;
 int FUNC_4 (TYPE_1__*,int*,unsigned char const*,int) ;
 int FUNC_5 (TYPE_1__*,int*,unsigned char*,int) ;
 int FUNC_6 (TYPE_1__*,int*,unsigned char*,int) ;
 int FUNC_7 (TYPE_1__*,int*,unsigned char const*,int) ;
 int FUNC_8 (TYPE_1__*,int*,unsigned char const*,int) ;
 int FUNC_9 (TYPE_1__*,int*,unsigned char const*,int) ;
 int FUNC_10 (TYPE_1__*,int*,unsigned char const*,int) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_11 (conv_t VAR_6, ucs4_t *VAR_7, const unsigned char *VAR_8, int VAR_9)
{
  state_t VAR_10 = VAR_6->istate;
  VAR_3;
  int VAR_11 = 0;
  unsigned char VAR_12;
  for (;;) {
    VAR_12 = *VAR_8;
    if (VAR_12 == VAR_1) {
      if (VAR_9 < VAR_11+3)
        goto none;
      if (VAR_8[1] == '(') {
        if (VAR_8[2] == 'B') {
          VAR_4 = 137;
          VAR_8 += 3; VAR_11 += 3;
          if (VAR_9 < VAR_11+1)
            goto none;
          continue;
        }
        if (VAR_8[2] == 'J') {
          VAR_4 = 131;
          VAR_8 += 3; VAR_11 += 3;
          if (VAR_9 < VAR_11+1)
            goto none;
          continue;
        }
        if (VAR_8[2] == 'I') {
          VAR_4 = 132;
          VAR_8 += 3; VAR_11 += 3;
          if (VAR_9 < VAR_11+1)
            goto none;
          continue;
        }
        goto ilseq;
      }
      if (VAR_8[1] == '$') {
        if (VAR_8[2] == '@' || VAR_8[2] == 'B') {

          VAR_4 = 130;
          VAR_8 += 3; VAR_11 += 3;
          if (VAR_9 < VAR_11+1)
            goto none;
          continue;
        }
        if (VAR_8[2] == 'A') {
          VAR_4 = 133;
          VAR_8 += 3; VAR_11 += 3;
          if (VAR_9 < VAR_11+1)
            goto none;
          continue;
        }
        if (VAR_8[2] == '(') {
          if (VAR_9 < VAR_11+4)
            goto none;
          if (VAR_8[3] == 'D') {
            VAR_4 = 129;
            VAR_8 += 4; VAR_11 += 4;
            if (VAR_9 < VAR_11+1)
              goto none;
            continue;
          }
          if (VAR_8[3] == 'C') {
            VAR_4 = 128;
            VAR_8 += 4; VAR_11 += 4;
            if (VAR_9 < VAR_11+1)
              goto none;
            continue;
          }
          goto ilseq;
        }
        goto ilseq;
      }
      if (VAR_8[1] == '.') {
        if (VAR_9 < VAR_11+3)
          goto none;
        if (VAR_8[2] == 'A') {
          VAR_5 = 136;
          VAR_8 += 3; VAR_11 += 3;
          if (VAR_9 < VAR_11+1)
            goto none;
          continue;
        }
        if (VAR_8[2] == 'F') {
          VAR_5 = 135;
          VAR_8 += 3; VAR_11 += 3;
          if (VAR_9 < VAR_11+1)
            goto none;
          continue;
        }
        goto ilseq;
      }
      if (VAR_8[1] == 'N') {
        switch (VAR_5) {
          case 134:
            goto ilseq;
          case 136:
            if (VAR_8[2] < 0x80) {
              unsigned char VAR_13 = VAR_8[2]+0x80;
              int VAR_14 = FUNC_5(VAR_6,VAR_7,&VAR_13,1);
              if (VAR_14 == VAR_2)
                goto ilseq;
              if (VAR_14 != 1) FUNC_2();
              VAR_0;
              VAR_6->istate = VAR_10;
              return VAR_11+3;
            } else
              goto ilseq;
          case 135:
            if (VAR_8[2] < 0x80) {
              unsigned char VAR_15 = VAR_8[2]+0x80;
              int VAR_16 = FUNC_6(VAR_6,VAR_7,&VAR_15,1);
              if (VAR_16 == VAR_2)
                goto ilseq;
              if (VAR_16 != 1) FUNC_2();
              VAR_0;
              VAR_6->istate = VAR_10;
              return VAR_11+3;
            } else
              goto ilseq;
          default: FUNC_2();
        }
      }
      goto ilseq;
    }
    break;
  }
  switch (VAR_4) {
    case 137:
      if (VAR_12 < 0x80) {
        int VAR_17 = FUNC_3(VAR_6,VAR_7,VAR_8,1);
        if (VAR_17 == VAR_2)
          goto ilseq;
        if (VAR_17 != 1) FUNC_2();
        if (*VAR_7 == 0x000a || *VAR_7 == 0x000d)
          VAR_5 = 134;
        VAR_0;
        VAR_6->istate = VAR_10;
        return VAR_11+1;
      } else
        goto ilseq;
    case 131:
      if (VAR_12 < 0x80) {
        int VAR_18 = FUNC_7(VAR_6,VAR_7,VAR_8,1);
        if (VAR_18 == VAR_2)
          goto ilseq;
        if (VAR_18 != 1) FUNC_2();
        if (*VAR_7 == 0x000a || *VAR_7 == 0x000d)
          VAR_5 = 134;
        VAR_0;
        VAR_6->istate = VAR_10;
        return VAR_11+1;
      } else
        goto ilseq;
    case 132:
      if (VAR_12 < 0x80) {
        unsigned char VAR_19 = VAR_12+0x80;
        int VAR_20 = FUNC_7(VAR_6,VAR_7,&VAR_19,1);
        if (VAR_20 == VAR_2)
          goto ilseq;
        if (VAR_20 != 1) FUNC_2();
        VAR_0;
        VAR_6->istate = VAR_10;
        return VAR_11+1;
      } else
        goto ilseq;
    case 130:
      if (VAR_9 < VAR_11+2)
        goto none;
      if (VAR_8[0] < 0x80 && VAR_8[1] < 0x80) {
        int VAR_21 = FUNC_8(VAR_6,VAR_7,VAR_8,2);
        if (VAR_21 == VAR_2)
          goto ilseq;
        if (VAR_21 != 2) FUNC_2();
        VAR_0;
        VAR_6->istate = VAR_10;
        return VAR_11+2;
      } else
        goto ilseq;
    case 129:
      if (VAR_9 < VAR_11+2)
        goto none;
      if (VAR_8[0] < 0x80 && VAR_8[1] < 0x80) {
        int VAR_22 = FUNC_9(VAR_6,VAR_7,VAR_8,2);
        if (VAR_22 == VAR_2)
          goto ilseq;
        if (VAR_22 != 2) FUNC_2();
        VAR_0;
        VAR_6->istate = VAR_10;
        return VAR_11+2;
      } else
        goto ilseq;
    case 133:
      if (VAR_9 < VAR_11+2)
        goto none;
      if (VAR_8[0] < 0x80 && VAR_8[1] < 0x80) {
        int VAR_23 = FUNC_4(VAR_6,VAR_7,VAR_8,2);
        if (VAR_23 == VAR_2)
          goto ilseq;
        if (VAR_23 != 2) FUNC_2();
        VAR_0;
        VAR_6->istate = VAR_10;
        return VAR_11+2;
      } else
        goto ilseq;
    case 128:
      if (VAR_9 < VAR_11+2)
        goto none;
      if (VAR_8[0] < 0x80 && VAR_8[1] < 0x80) {
        int VAR_24 = FUNC_10(VAR_6,VAR_7,VAR_8,2);
        if (VAR_24 == VAR_2)
          goto ilseq;
        if (VAR_24 != 2) FUNC_2();
        VAR_0;
        VAR_6->istate = VAR_10;
        return VAR_11+2;
      } else
        goto ilseq;
    default: FUNC_2();
  }

none:
  VAR_0;
  VAR_6->istate = VAR_10;
  return FUNC_1(VAR_11);

ilseq:
  VAR_0;
  VAR_6->istate = VAR_10;
  return FUNC_0(VAR_11);
}

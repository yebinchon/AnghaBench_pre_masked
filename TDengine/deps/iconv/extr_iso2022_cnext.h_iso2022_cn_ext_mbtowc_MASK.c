
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


typedef int ucs4_t ;
typedef void* state_t ;
typedef TYPE_1__* conv_t ;
struct TYPE_13__ {void* istate; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 int VAR_5 ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,int*,unsigned char const*,int) ;
 int FUNC_4 (TYPE_1__*,int*,unsigned char const*,int) ;
 int FUNC_5 (TYPE_1__*,int*,unsigned char const*,int) ;
 int FUNC_6 (TYPE_1__*,int*,unsigned char const*,int) ;
 int FUNC_7 (TYPE_1__*,int*,unsigned char const*,int) ;
 int FUNC_8 (TYPE_1__*,int*,unsigned char const*,int) ;
 int FUNC_9 (TYPE_1__*,int*,unsigned char const*,int) ;
 int FUNC_10 (TYPE_1__*,int*,unsigned char const*,int) ;
 int FUNC_11 (TYPE_1__*,int*,unsigned char const*,int) ;
 int FUNC_12 (TYPE_1__*,int*,unsigned char const*,int) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int
FUNC_13 (conv_t VAR_10, ucs4_t *VAR_11, const unsigned char *VAR_12, int VAR_13)
{
  state_t VAR_14 = VAR_10->istate;
  VAR_5;
  int VAR_15 = 0;
  unsigned char VAR_16;
  for (;;) {
    VAR_16 = *VAR_12;
    if (VAR_16 == VAR_1) {
      if (VAR_13 < VAR_15+4)
        goto none;
      if (VAR_12[1] == '$') {
        if (VAR_12[2] == ')') {
          if (VAR_12[3] == 'A') {
            VAR_7 = 140;
            VAR_12 += 4; VAR_15 += 4;
            if (VAR_13 < VAR_15+1)
              goto none;
            continue;
          }
          if (VAR_12[3] == 'G') {
            VAR_7 = 141;
            VAR_12 += 4; VAR_15 += 4;
            if (VAR_13 < VAR_15+1)
              goto none;
            continue;
          }
          if (VAR_12[3] == 'E') {
            VAR_7 = 139;
            VAR_12 += 4; VAR_15 += 4;
            if (VAR_13 < VAR_15+1)
              goto none;
            continue;
          }
        }
        if (VAR_12[2] == '*') {
          if (VAR_12[3] == 'H') {
            VAR_8 = 137;
            VAR_12 += 4; VAR_15 += 4;
            if (VAR_13 < VAR_15+1)
              goto none;
            continue;
          }
        }
        if (VAR_12[2] == '+') {
          if (VAR_12[3] == 'I') {
            VAR_9 = 135;
            VAR_12 += 4; VAR_15 += 4;
            if (VAR_13 < VAR_15+1)
              goto none;
            continue;
          }
          if (VAR_12[3] == 'J') {
            VAR_9 = 134;
            VAR_12 += 4; VAR_15 += 4;
            if (VAR_13 < VAR_15+1)
              goto none;
            continue;
          }
          if (VAR_12[3] == 'K') {
            VAR_9 = 133;
            VAR_12 += 4; VAR_15 += 4;
            if (VAR_13 < VAR_15+1)
              goto none;
            continue;
          }
          if (VAR_12[3] == 'L') {
            VAR_9 = 132;
            VAR_12 += 4; VAR_15 += 4;
            if (VAR_13 < VAR_15+1)
              goto none;
            continue;
          }
          if (VAR_12[3] == 'M') {
            VAR_9 = 131;
            VAR_12 += 4; VAR_15 += 4;
            if (VAR_13 < VAR_15+1)
              goto none;
            continue;
          }
        }
      }
      if (VAR_12[1] == 'N') {
        switch (VAR_8) {
          case 136:
            goto ilseq;
          case 137:
            if (VAR_12[2] < 0x80 && VAR_12[3] < 0x80) {
              int VAR_17 = FUNC_5(VAR_10,VAR_11,VAR_12+2,2);
              if (VAR_17 == VAR_2)
                goto ilseq;
              if (VAR_17 != 2) FUNC_2();
              VAR_0;
              VAR_10->istate = VAR_14;
              return VAR_15+4;
            } else
              goto ilseq;
          default: FUNC_2();
        }
      }
      if (VAR_12[1] == 'O') {
        switch (VAR_9) {
          case 130:
            goto ilseq;
          case 135:
            if (VAR_12[2] < 0x80 && VAR_12[3] < 0x80) {
              int VAR_18 = FUNC_6(VAR_10,VAR_11,VAR_12+2,2);
              if (VAR_18 == VAR_2)
                goto ilseq;
              if (VAR_18 != 2) FUNC_2();
              VAR_0;
              VAR_10->istate = VAR_14;
              return VAR_15+4;
            } else
              goto ilseq;
          case 134:
            if (VAR_12[2] < 0x80 && VAR_12[3] < 0x80) {
              int VAR_19 = FUNC_7(VAR_10,VAR_11,VAR_12+2,2);
              if (VAR_19 == VAR_2)
                goto ilseq;
              if (VAR_19 != 2) FUNC_2();
              VAR_0;
              VAR_10->istate = VAR_14;
              return VAR_15+4;
            } else
              goto ilseq;
          case 133:
            if (VAR_12[2] < 0x80 && VAR_12[3] < 0x80) {
              int VAR_20 = FUNC_8(VAR_10,VAR_11,VAR_12+2,2);
              if (VAR_20 == VAR_2)
                goto ilseq;
              if (VAR_20 != 2) FUNC_2();
              VAR_0;
              VAR_10->istate = VAR_14;
              return VAR_15+4;
            } else
              goto ilseq;
          case 132:
            if (VAR_12[2] < 0x80 && VAR_12[3] < 0x80) {
              int VAR_21 = FUNC_9(VAR_10,VAR_11,VAR_12+2,2);
              if (VAR_21 == VAR_2)
                goto ilseq;
              if (VAR_21 != 2) FUNC_2();
              VAR_0;
              VAR_10->istate = VAR_14;
              return VAR_15+4;
            } else
              goto ilseq;
          case 131:
            if (VAR_12[2] < 0x80 && VAR_12[3] < 0x80) {
              int VAR_22 = FUNC_10(VAR_10,VAR_11,VAR_12+2,2);
              if (VAR_22 == VAR_2)
                goto ilseq;
              if (VAR_22 != 2) FUNC_2();
              VAR_0;
              VAR_10->istate = VAR_14;
              return VAR_15+4;
            } else
              goto ilseq;
          default: FUNC_2();
        }
      }
      goto ilseq;
    }
    if (VAR_16 == VAR_4) {
      if (VAR_7 != 140 && VAR_7 != 141 && VAR_7 != 139)
        goto ilseq;
      VAR_6 = 128;
      VAR_12++; VAR_15++;
      if (VAR_13 < VAR_15+1)
        goto none;
      continue;
    }
    if (VAR_16 == VAR_3) {
      VAR_6 = 129;
      VAR_12++; VAR_15++;
      if (VAR_13 < VAR_15+1)
        goto none;
      continue;
    }
    break;
  }
  switch (VAR_6) {
    case 129:
      if (VAR_16 < 0x80) {
        int VAR_23 = FUNC_3(VAR_10,VAR_11,VAR_12,1);
        if (VAR_23 == VAR_2)
          goto ilseq;
        if (VAR_23 != 1) FUNC_2();
        if (*VAR_11 == 0x000a || *VAR_11 == 0x000d) {
          VAR_7 = 138; VAR_8 = 136; VAR_9 = 136;
        }
        VAR_0;
        VAR_10->istate = VAR_14;
        return VAR_15+1;
      } else
        goto ilseq;
    case 128:
      if (VAR_13 < VAR_15+2)
        goto none;
      if (VAR_12[0] < 0x80 && VAR_12[1] < 0x80) {
        int VAR_24;
        switch (VAR_7) {
          case 138:
            goto ilseq;
          case 140:
            VAR_24 = FUNC_11(VAR_10,VAR_11,VAR_12,2); break;
          case 141:
            VAR_24 = FUNC_4(VAR_10,VAR_11,VAR_12,2); break;
          case 139:
            VAR_24 = FUNC_12(VAR_10,VAR_11,VAR_12,2); break;
          default: FUNC_2();
        }
        if (VAR_24 == VAR_2)
          goto ilseq;
        if (VAR_24 != 2) FUNC_2();
        VAR_0;
        VAR_10->istate = VAR_14;
        return VAR_15+2;
      } else
        goto ilseq;
    default: FUNC_2();
  }

none:
  VAR_0;
  VAR_10->istate = VAR_14;
  return FUNC_1(VAR_15);

ilseq:
  VAR_0;
  VAR_10->istate = VAR_14;
  return FUNC_0(VAR_15);
}

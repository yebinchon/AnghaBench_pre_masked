
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int ucs4_t ;
typedef void* state_t ;
typedef TYPE_1__* conv_t ;
struct TYPE_7__ {void* istate; } ;


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
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_7 (conv_t VAR_9, ucs4_t *VAR_10, const unsigned char *VAR_11, int VAR_12)
{
  state_t VAR_13 = VAR_9->istate;
  VAR_5;
  int VAR_14 = 0;
  unsigned char VAR_15;
  for (;;) {
    VAR_15 = *VAR_11;
    if (VAR_15 == VAR_1) {
      if (VAR_12 < VAR_14+4)
        goto none;
      if (VAR_11[1] == '$') {
        if (VAR_11[2] == ')') {
          if (VAR_11[3] == 'A') {
            VAR_7 = 133;
            VAR_11 += 4; VAR_14 += 4;
            if (VAR_12 < VAR_14+1)
              goto none;
            continue;
          }
          if (VAR_11[3] == 'G') {
            VAR_7 = 134;
            VAR_11 += 4; VAR_14 += 4;
            if (VAR_12 < VAR_14+1)
              goto none;
            continue;
          }
        }
        if (VAR_11[2] == '*') {
          if (VAR_11[3] == 'H') {
            VAR_8 = 131;
            VAR_11 += 4; VAR_14 += 4;
            if (VAR_12 < VAR_14+1)
              goto none;
            continue;
          }
        }
      }
      if (VAR_11[1] == 'N') {
        switch (VAR_8) {
          case 130:
            goto ilseq;
          case 131:
            if (VAR_11[2] < 0x80 && VAR_11[3] < 0x80) {
              int VAR_16 = FUNC_5(VAR_9,VAR_10,VAR_11+2,2);
              if (VAR_16 == VAR_2)
                goto ilseq;
              if (VAR_16 != 2) FUNC_2();
              VAR_0;
              VAR_9->istate = VAR_13;
              return VAR_14+4;
            } else
              goto ilseq;
          default: FUNC_2();
        }
      }
      goto ilseq;
    }
    if (VAR_15 == VAR_4) {
      if (VAR_7 != 133 && VAR_7 != 134)
        goto ilseq;
      VAR_6 = 128;
      VAR_11++; VAR_14++;
      if (VAR_12 < VAR_14+1)
        goto none;
      continue;
    }
    if (VAR_15 == VAR_3) {
      VAR_6 = 129;
      VAR_11++; VAR_14++;
      if (VAR_12 < VAR_14+1)
        goto none;
      continue;
    }
    break;
  }
  switch (VAR_6) {
    case 129:
      if (VAR_15 < 0x80) {
        int VAR_17 = FUNC_3(VAR_9,VAR_10,VAR_11,1);
        if (VAR_17 == VAR_2)
          goto ilseq;
        if (VAR_17 != 1) FUNC_2();
        if (*VAR_10 == 0x000a || *VAR_10 == 0x000d) {
          VAR_7 = 132; VAR_8 = 130;
        }
        VAR_0;
        VAR_9->istate = VAR_13;
        return VAR_14+1;
      } else
        goto ilseq;
    case 128:
      if (VAR_12 < VAR_14+2)
        goto none;
      if (VAR_11[0] < 0x80 && VAR_11[1] < 0x80) {
        int VAR_18;
        switch (VAR_7) {
          case 132:
            goto ilseq;
          case 133:
            VAR_18 = FUNC_6(VAR_9,VAR_10,VAR_11,2); break;
          case 134:
            VAR_18 = FUNC_4(VAR_9,VAR_10,VAR_11,2); break;
          default: FUNC_2();
        }
        if (VAR_18 == VAR_2)
          goto ilseq;
        if (VAR_18 != 2) FUNC_2();
        VAR_0;
        VAR_9->istate = VAR_13;
        return VAR_14+2;
      } else
        goto ilseq;
    default: FUNC_2();
  }

none:
  VAR_0;
  VAR_9->istate = VAR_13;
  return FUNC_1(VAR_14);

ilseq:
  VAR_0;
  VAR_9->istate = VAR_13;
  return FUNC_0(VAR_14);
}

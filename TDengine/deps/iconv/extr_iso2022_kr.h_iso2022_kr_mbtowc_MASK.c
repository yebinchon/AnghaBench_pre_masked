
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ucs4_t ;
typedef void* state_t ;
typedef TYPE_1__* conv_t ;
struct TYPE_5__ {void* istate; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;


 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,int*,unsigned char const*,int) ;
 int FUNC_4 (TYPE_1__*,int*,unsigned char const*,int) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static int
FUNC_5 (conv_t VAR_10, ucs4_t *VAR_11, const unsigned char *VAR_12, int VAR_13)
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
          if (VAR_12[3] == 'C') {
            VAR_9 = VAR_6;
            VAR_12 += 4; VAR_15 += 4;
            if (VAR_13 < VAR_15+1)
              goto none;
            continue;
          }
        }
      }
      goto ilseq;
    }
    if (VAR_16 == VAR_4) {
      if (VAR_9 != VAR_6)
        goto ilseq;
      VAR_8 = 128;
      VAR_12++; VAR_15++;
      if (VAR_13 < VAR_15+1)
        goto none;
      continue;
    }
    if (VAR_16 == VAR_3) {
      VAR_8 = 129;
      VAR_12++; VAR_15++;
      if (VAR_13 < VAR_15+1)
        goto none;
      continue;
    }
    break;
  }
  switch (VAR_8) {
    case 129:
      if (VAR_16 < 0x80) {
        int VAR_17 = FUNC_3(VAR_10,VAR_11,VAR_12,1);
        if (VAR_17 == VAR_2)
          goto ilseq;
        if (VAR_17 != 1) FUNC_2();




        VAR_0;
        VAR_10->istate = VAR_14;
        return VAR_15+1;
      } else
        goto ilseq;
    case 128:
      if (VAR_13 < VAR_15+2)
        goto none;
      if (VAR_9 != VAR_6) FUNC_2();
      if (VAR_12[0] < 0x80 && VAR_12[1] < 0x80) {
        int VAR_18 = FUNC_4(VAR_10,VAR_11,VAR_12,2);
        if (VAR_18 == VAR_2)
          goto ilseq;
        if (VAR_18 != 2) FUNC_2();
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


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ucs4_t ;
typedef void* state_t ;
typedef TYPE_1__* conv_t ;
struct TYPE_4__ {void* istate; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,scalar_t__*,unsigned char const*,int) ;

__attribute__((used)) static int
FUNC_4 (conv_t VAR_1, ucs4_t *VAR_2, const unsigned char *VAR_3, int VAR_4)
{
  state_t VAR_5 = VAR_1->istate;
  unsigned int VAR_6 = 0;
  unsigned char VAR_7;
  for (;;) {
    VAR_7 = *VAR_3;
    if (VAR_7 == '~') {
      if (VAR_4 < VAR_6+2)
        goto none;
      VAR_7 = VAR_3[1];
      if (VAR_5 == 0) {
        if (VAR_7 == '~') {
          *VAR_2 = (ucs4_t) '~';
          VAR_1->istate = VAR_5;
          return VAR_6+2;
        }
        if (VAR_7 == '{') {
          VAR_5 = 1;
          VAR_3 += 2; VAR_6 += 2;
          if (VAR_4 < VAR_6+1)
            goto none;
          continue;
        }
        if (VAR_7 == '\n') {
          VAR_3 += 2; VAR_6 += 2;
          if (VAR_4 < VAR_6+1)
            goto none;
          continue;
        }
      } else {
        if (VAR_7 == '}') {
          VAR_5 = 0;
          VAR_3 += 2; VAR_6 += 2;
          if (VAR_4 < VAR_6+1)
            goto none;
          continue;
        }
      }
      goto ilseq;
    }
    break;
  }
  if (VAR_5 == 0) {
    *VAR_2 = (ucs4_t) VAR_7;
    VAR_1->istate = VAR_5;
    return VAR_6+1;
  } else {
    int VAR_8;
    if (VAR_4 < VAR_6+2)
      goto none;
    VAR_8 = FUNC_3(VAR_1,VAR_2,VAR_3,2);
    if (VAR_8 == VAR_0)
      goto ilseq;
    if (VAR_8 != 2) FUNC_2();
    VAR_1->istate = VAR_5;
    return VAR_6+2;
  }

none:
  VAR_1->istate = VAR_5;
  return FUNC_1(VAR_6);

ilseq:
  VAR_1->istate = VAR_5;
  return FUNC_0(VAR_6);
}

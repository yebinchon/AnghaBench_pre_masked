
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ucs4_t ;
typedef int state_t ;
typedef TYPE_1__* conv_t ;
struct TYPE_3__ {int istate; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (unsigned char) ;

__attribute__((used)) static int
FUNC_4 (conv_t VAR_0, ucs4_t *VAR_1, const unsigned char *VAR_2, int VAR_3)
{
  state_t VAR_4 = VAR_0->istate;
  int VAR_5 = 0;
  if (VAR_4 & 3)
    goto active;
  else
    goto inactive;

inactive:
  {

    if (VAR_3 < VAR_5+1)
      goto none;
    {
      unsigned char VAR_6 = *VAR_2;
      if (FUNC_3(VAR_6)) {
        *VAR_1 = (ucs4_t) VAR_6;
        VAR_0->istate = VAR_4;
        return VAR_5+1;
      }
      if (VAR_6 == '+') {
        if (VAR_3 < VAR_5+2)
          goto none;
        if (VAR_2[1] == '-') {
          *VAR_1 = (ucs4_t) '+';
          VAR_0->istate = VAR_4;
          return VAR_5+2;
        }
        VAR_2++; VAR_5++;
        VAR_4 = 1;
        goto active;
      }
      goto ilseq;
    }
  }

active:
  {

    unsigned int VAR_7 = 0;
    state_t VAR_8 = VAR_4;
    unsigned int VAR_9 = 2;
    unsigned int VAR_10 = 0;
    unsigned int VAR_11 = 0;
    for (;;) {
      unsigned char VAR_12 = *VAR_2;
      unsigned int VAR_13;
      if (VAR_12 >= 'A' && VAR_12 <= 'Z')
        VAR_13 = VAR_12-'A';
      else if (VAR_12 >= 'a' && VAR_12 <= 'z')
        VAR_13 = VAR_12-'a'+26;
      else if (VAR_12 >= '0' && VAR_12 <= '9')
        VAR_13 = VAR_12-'0'+52;
      else if (VAR_12 == '+')
        VAR_13 = 62;
      else if (VAR_12 == '/')
        VAR_13 = 63;
      else {

        if (VAR_8 & -4)
          goto ilseq;
        if (VAR_11)
          goto ilseq;
        if (VAR_12 == '-') {
          VAR_2++; VAR_5++;
        }
        VAR_4 = 0;
        goto inactive;
      }
      VAR_2++; VAR_11++;

      switch (VAR_8 & 3) {
        case 1:
          VAR_8 = (VAR_13 << 2) | 0; break;
        case 0:
          VAR_7 = (VAR_7 << 8) | (VAR_8 & -4) | (VAR_13 >> 4); VAR_10++;
          VAR_8 = ((VAR_13 & 15) << 4) | 2; break;
        case 2:
          VAR_7 = (VAR_7 << 8) | (VAR_8 & -4) | (VAR_13 >> 2); VAR_10++;
          VAR_8 = ((VAR_13 & 3) << 6) | 3; break;
        case 3:
          VAR_7 = (VAR_7 << 8) | (VAR_8 & -4) | VAR_13; VAR_10++;
          VAR_8 = 1; break;
      }
      if (VAR_10 == VAR_9) {


        if (VAR_9 == 2 && (VAR_7 >= 0xd800 && VAR_7 < 0xdc00))
          VAR_9 = 4;
        else
          break;
      }
      if (VAR_3 < VAR_5+VAR_11+1)
        goto none;
    }

    if ((VAR_8 & 3) == 0) FUNC_2();
    if (VAR_9 == 4) {
      ucs4_t VAR_14 = VAR_7 >> 16;
      ucs4_t VAR_15 = VAR_7 & 0xffff;
      if (!(VAR_14 >= 0xd800 && VAR_14 < 0xdc00)) FUNC_2();
      if (!(VAR_15 >= 0xdc00 && VAR_15 < 0xe000)) goto ilseq;
      *VAR_1 = 0x10000 + ((VAR_14 - 0xd800) << 10) + (VAR_15 - 0xdc00);
    } else {
      *VAR_1 = VAR_7;
    }
    VAR_0->istate = VAR_8;
    return VAR_5+VAR_11;
  }

none:
  VAR_0->istate = VAR_4;
  return FUNC_1(VAR_5);

ilseq:
  VAR_0->istate = VAR_4;
  return FUNC_0(VAR_5);
}

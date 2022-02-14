
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

__attribute__((used)) static int
FUNC_2 (conv_t VAR_0, ucs4_t *VAR_1, const unsigned char *VAR_2, int VAR_3)
{
  state_t VAR_4 = VAR_0->istate;
  int VAR_5 = 0;
  for (; VAR_3 >= 2;) {
    ucs4_t VAR_6 = (VAR_4 ? VAR_2[0] + (VAR_2[1] << 8) : (VAR_2[0] << 8) + VAR_2[1]);
    if (VAR_6 == 0xfeff) {
    } else if (VAR_6 == 0xfffe) {
      VAR_4 ^= 1;
    } else if (VAR_6 >= 0xd800 && VAR_6 < 0xdc00) {
      if (VAR_3 >= 4) {
        ucs4_t VAR_7 = (VAR_4 ? VAR_2[2] + (VAR_2[3] << 8) : (VAR_2[2] << 8) + VAR_2[3]);
        if (!(VAR_7 >= 0xdc00 && VAR_7 < 0xe000))
          goto ilseq;
        *VAR_1 = 0x10000 + ((VAR_6 - 0xd800) << 10) + (VAR_7 - 0xdc00);
        VAR_0->istate = VAR_4;
        return VAR_5+4;
      } else
        break;
    } else if (VAR_6 >= 0xdc00 && VAR_6 < 0xe000) {
      goto ilseq;
    } else {
      *VAR_1 = VAR_6;
      VAR_0->istate = VAR_4;
      return VAR_5+2;
    }
    VAR_2 += 2; VAR_3 -= 2; VAR_5 += 2;
  }
  VAR_0->istate = VAR_4;
  return FUNC_1(VAR_5);

ilseq:
  VAR_0->istate = VAR_4;
  return FUNC_0(VAR_5);
}

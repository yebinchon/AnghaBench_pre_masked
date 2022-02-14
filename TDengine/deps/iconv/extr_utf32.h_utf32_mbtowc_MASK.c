
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
  for (; VAR_3 >= 4;) {
    ucs4_t VAR_6 = (VAR_4
                  ? VAR_2[0] + (VAR_2[1] << 8) + (VAR_2[2] << 16) + (VAR_2[3] << 24)
                  : (VAR_2[0] << 24) + (VAR_2[1] << 16) + (VAR_2[2] << 8) + VAR_2[3]);
    VAR_5 += 4;
    if (VAR_6 == 0x0000feff) {
    } else if (VAR_6 == 0xfffe0000u) {
      VAR_4 ^= 1;
    } else {
      if (VAR_6 < 0x110000 && !(VAR_6 >= 0xd800 && VAR_6 < 0xe000)) {
        *VAR_1 = VAR_6;
        VAR_0->istate = VAR_4;
        return VAR_5;
      } else {
        VAR_0->istate = VAR_4;
        return FUNC_0(VAR_5);
      }
    }
    VAR_2 += 4; VAR_3 -= 4;
  }
  VAR_0->istate = VAR_4;
  return FUNC_1(VAR_5);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ucs4_t ;
typedef TYPE_1__* conv_t ;
struct TYPE_3__ {int ostate; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0 (conv_t VAR_2, unsigned char *VAR_3, ucs4_t VAR_4, int VAR_5)
{
  if (VAR_4 != 0xfffe && !(VAR_4 >= 0xd800 && VAR_4 < 0xe000)) {
    int VAR_6 = 0;
    if (!VAR_2->ostate) {
      if (VAR_5 >= 2) {
        VAR_3[0] = 0xFE;
        VAR_3[1] = 0xFF;
        VAR_3 += 2; VAR_5 -= 2; VAR_6 += 2;
      } else
        return VAR_1;
    }
    if (VAR_4 < 0x10000) {
      if (VAR_5 >= 2) {
        VAR_3[0] = (unsigned char) (VAR_4 >> 8);
        VAR_3[1] = (unsigned char) VAR_4;
        VAR_2->ostate = 1;
        return VAR_6+2;
      } else
        return VAR_1;
    }
    else if (VAR_4 < 0x110000) {
      if (VAR_5 >= 4) {
        ucs4_t VAR_7 = 0xd800 + ((VAR_4 - 0x10000) >> 10);
        ucs4_t VAR_8 = 0xdc00 + ((VAR_4 - 0x10000) & 0x3ff);
        VAR_3[0] = (unsigned char) (VAR_7 >> 8);
        VAR_3[1] = (unsigned char) VAR_7;
        VAR_3[2] = (unsigned char) (VAR_8 >> 8);
        VAR_3[3] = (unsigned char) VAR_8;
        VAR_2->ostate = 1;
        return VAR_6+4;
      } else
        return VAR_1;
    }
  }
  return VAR_0;
}

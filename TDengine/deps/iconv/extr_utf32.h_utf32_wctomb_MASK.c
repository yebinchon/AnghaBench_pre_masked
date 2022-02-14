
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
  if (VAR_4 < 0x110000 && !(VAR_4 >= 0xd800 && VAR_4 < 0xe000)) {
    int VAR_6 = 0;
    if (!VAR_2->ostate) {
      if (VAR_5 >= 4) {
        VAR_3[0] = 0x00;
        VAR_3[1] = 0x00;
        VAR_3[2] = 0xFE;
        VAR_3[3] = 0xFF;
        VAR_3 += 4; VAR_5 -= 4; VAR_6 += 4;
      } else
        return VAR_1;
    }
    if (VAR_4 < 0x110000) {
      if (VAR_5 >= 4) {
        VAR_3[0] = 0;
        VAR_3[1] = (unsigned char) (VAR_4 >> 16);
        VAR_3[2] = (unsigned char) (VAR_4 >> 8);
        VAR_3[3] = (unsigned char) VAR_4;
        VAR_2->ostate = 1;
        return VAR_6+4;
      } else
        return VAR_1;
    }
  }
  return VAR_0;
}

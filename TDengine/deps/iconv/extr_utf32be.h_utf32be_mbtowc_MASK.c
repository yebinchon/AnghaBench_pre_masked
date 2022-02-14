
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucs4_t ;
typedef int conv_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1 (conv_t VAR_1, ucs4_t *VAR_2, const unsigned char *VAR_3, int VAR_4)
{
  if (VAR_4 >= 4) {
    ucs4_t VAR_5 = (VAR_3[0] << 24) + (VAR_3[1] << 16) + (VAR_3[2] << 8) + VAR_3[3];
    if (VAR_5 < 0x110000 && !(VAR_5 >= 0xd800 && VAR_5 < 0xe000)) {
      *VAR_2 = VAR_5;
      return 4;
    } else
      return VAR_0;
  }
  return FUNC_0(0);
}

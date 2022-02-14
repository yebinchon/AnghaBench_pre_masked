
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ucs4_t ;
typedef int conv_t ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0 (conv_t VAR_1, ucs4_t *VAR_2, const unsigned char *VAR_3, int VAR_4)
{
  unsigned char VAR_5 = *VAR_3;
  if (VAR_5 < 0xa1) {
    *VAR_2 = (ucs4_t) VAR_5;
    return 1;
  }
  else if (VAR_5 <= 0xfb && !(VAR_5 >= 0xdb && VAR_5 <= 0xde)) {
    *VAR_2 = (ucs4_t) (VAR_5 + 0x0d60);
    return 1;
  }
  return VAR_0;
}

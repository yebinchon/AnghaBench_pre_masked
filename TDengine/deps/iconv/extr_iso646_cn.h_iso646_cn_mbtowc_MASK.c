
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
  if (VAR_5 < 0x80) {
    if (VAR_5 == 0x24)
      *VAR_2 = (ucs4_t) 0x00a5;
    else if (VAR_5 == 0x7e)
      *VAR_2 = (ucs4_t) 0x203e;
    else
      *VAR_2 = (ucs4_t) VAR_5;
    return 1;
  }
  return VAR_0;
}

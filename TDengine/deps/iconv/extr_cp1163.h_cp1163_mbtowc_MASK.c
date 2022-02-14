
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucs4_t ;
typedef int conv_t ;


 scalar_t__* VAR_0 ;

__attribute__((used)) static int
FUNC_0 (conv_t VAR_1, ucs4_t *VAR_2, const unsigned char *VAR_3, int VAR_4)
{
  unsigned char VAR_5 = *VAR_3;
  if (VAR_5 < 0xa0)
    *VAR_2 = (ucs4_t) VAR_5;
  else if (VAR_5 == 0xa4)
    *VAR_2 = 0x20ac;
  else
    *VAR_2 = (ucs4_t) VAR_0[VAR_5-0xa0];
  return 1;
}

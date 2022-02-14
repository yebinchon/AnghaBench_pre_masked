
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ucs4_t ;
typedef int conv_t ;


 scalar_t__* VAR_0 ;
 scalar_t__* VAR_1 ;
 scalar_t__* VAR_2 ;

__attribute__((used)) static int
FUNC_0 (conv_t VAR_3, ucs4_t *VAR_4, const unsigned char *VAR_5, int VAR_6)
{
  unsigned char VAR_7 = *VAR_5;
  if (VAR_7 < 0xa0)
    *VAR_4 = (ucs4_t) VAR_7;
  else if (VAR_7 < 0xb0)
    *VAR_4 = (ucs4_t) VAR_0[VAR_7-0xa0];
  else if (VAR_7 < 0xd0)
    *VAR_4 = (ucs4_t) VAR_7;
  else if (VAR_7 < 0xe0)
    *VAR_4 = (ucs4_t) VAR_1[VAR_7-0xd0];
  else if (VAR_7 < 0xf0)
    *VAR_4 = (ucs4_t) VAR_7;
  else
    *VAR_4 = (ucs4_t) VAR_2[VAR_7-0xf0];
  return 1;
}

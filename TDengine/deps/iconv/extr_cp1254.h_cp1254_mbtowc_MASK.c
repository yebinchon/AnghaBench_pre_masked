
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ucs4_t ;
typedef int conv_t ;


 int VAR_0 ;
 unsigned short* VAR_1 ;
 scalar_t__* VAR_2 ;
 scalar_t__* VAR_3 ;

__attribute__((used)) static int
FUNC_0 (conv_t VAR_4, ucs4_t *VAR_5, const unsigned char *VAR_6, int VAR_7)
{
  unsigned char VAR_8 = *VAR_6;
  if (VAR_8 < 0x80) {
    *VAR_5 = (ucs4_t) VAR_8;
    return 1;
  }
  else if (VAR_8 < 0xa0) {
    unsigned short VAR_9 = VAR_1[VAR_8-0x80];
    if (VAR_9 != 0xfffd) {
      *VAR_5 = (ucs4_t) VAR_9;
      return 1;
    }
  }
  else if (VAR_8 < 0xd0) {
    *VAR_5 = (ucs4_t) VAR_8;
    return 1;
  }
  else if (VAR_8 < 0xe0) {
    *VAR_5 = (ucs4_t) VAR_2[VAR_8-0xd0];
    return 1;
  }
  else if (VAR_8 < 0xf0) {
    *VAR_5 = (ucs4_t) VAR_8;
    return 1;
  }
  else {
    *VAR_5 = (ucs4_t) VAR_3[VAR_8-0xf0];
    return 1;
  }
  return VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ucs4_t ;
typedef int conv_t ;


 int VAR_0 ;
 scalar_t__* VAR_1 ;
 unsigned short* VAR_2 ;

__attribute__((used)) static int
FUNC_0 (conv_t VAR_3, ucs4_t *VAR_4, const unsigned char *VAR_5, int VAR_6)
{
  unsigned char VAR_7 = *VAR_5;
  if (VAR_7 < 0x20) {
    *VAR_4 = (ucs4_t) VAR_7;
    return 1;
  }
  else if (VAR_7 < 0x30) {
    *VAR_4 = (ucs4_t) VAR_1[VAR_7-0x20];
    return 1;
  }
  else if (VAR_7 < 0x80) {
    *VAR_4 = (ucs4_t) VAR_7;
    return 1;
  }
  else {
    unsigned short VAR_8 = VAR_2[VAR_7-0x80];
    if (VAR_8 != 0xfffd) {
      *VAR_4 = (ucs4_t) VAR_8;
      return 1;
    }
  }
  return VAR_0;
}

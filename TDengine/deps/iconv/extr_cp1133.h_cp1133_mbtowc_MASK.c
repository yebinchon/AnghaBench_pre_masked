
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ucs4_t ;
typedef int conv_t ;


 int VAR_0 ;
 unsigned short* VAR_1 ;
 unsigned short* VAR_2 ;

__attribute__((used)) static int
FUNC_0 (conv_t VAR_3, ucs4_t *VAR_4, const unsigned char *VAR_5, int VAR_6)
{
  unsigned char VAR_7 = *VAR_5;
  if (VAR_7 < 0xa0) {
    *VAR_4 = (ucs4_t) VAR_7;
    return 1;
  }
  else if (VAR_7 < 0xe0) {
    unsigned short VAR_8 = VAR_1[VAR_7-0xa0];
    if (VAR_8 != 0xfffd) {
      *VAR_4 = (ucs4_t) VAR_8;
      return 1;
    }
  }
  else if (VAR_7 < 0xf0) {
  }
  else {
    unsigned short VAR_9 = VAR_2[VAR_7-0xf0];
    if (VAR_9 != 0xfffd) {
      *VAR_4 = (ucs4_t) VAR_9;
      return 1;
    }
  }
  return VAR_0;
}

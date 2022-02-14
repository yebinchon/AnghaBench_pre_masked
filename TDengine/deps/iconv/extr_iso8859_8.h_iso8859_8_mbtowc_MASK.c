
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ucs4_t ;
typedef int conv_t ;


 int VAR_0 ;
 unsigned short* VAR_1 ;

__attribute__((used)) static int
FUNC_0 (conv_t VAR_2, ucs4_t *VAR_3, const unsigned char *VAR_4, int VAR_5)
{
  unsigned char VAR_6 = *VAR_4;
  if (VAR_6 >= 0xa0) {
    unsigned short VAR_7 = VAR_1[VAR_6-0xa0];
    if (VAR_7 != 0xfffd) {
      *VAR_3 = (ucs4_t) VAR_7;
      return 1;
    }
  }
  else {
    *VAR_3 = (ucs4_t) VAR_6;
    return 1;
  }
  return VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned short ucs4_t ;
typedef int conv_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1 (conv_t VAR_1, ucs4_t *VAR_2, const unsigned char *VAR_3, int VAR_4)
{
  if (VAR_4 >= 2) {
    unsigned short VAR_5 = *(const unsigned short *)VAR_3;
    if (VAR_5 >= 0xd800 && VAR_5 < 0xe000) {
      return VAR_0;
    } else {
      *VAR_2 = VAR_5;
      return 2;
    }
  }
  return FUNC_0(0);
}

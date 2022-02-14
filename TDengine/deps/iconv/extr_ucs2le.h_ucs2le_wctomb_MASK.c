
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucs4_t ;
typedef int conv_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0 (conv_t VAR_2, unsigned char *VAR_3, ucs4_t VAR_4, int VAR_5)
{
  if (VAR_4 < 0x10000 && !(VAR_4 >= 0xd800 && VAR_4 < 0xe000)) {
    if (VAR_5 >= 2) {
      VAR_3[0] = (unsigned char) VAR_4;
      VAR_3[1] = (unsigned char) (VAR_4 >> 8);
      return 2;
    } else
      return VAR_1;
  }
  return VAR_0;
}

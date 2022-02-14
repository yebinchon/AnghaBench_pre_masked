
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucs4_t ;
typedef int conv_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;

__attribute__((used)) static int
FUNC_1 (conv_t VAR_2, unsigned char *VAR_3, ucs4_t VAR_4, int VAR_5)
{

  if (sizeof(unsigned short) != 2) FUNC_0();

  if (VAR_4 < 0x10000 && !(VAR_4 >= 0xd800 && VAR_4 < 0xe000)) {
    if (VAR_5 >= 2) {
      unsigned short VAR_6 = VAR_4;
      VAR_6 = (VAR_6 >> 8) | (VAR_6 << 8);
      *(unsigned short *)VAR_3 = VAR_6;
      return 2;
    } else
      return VAR_1;
  } else
    return VAR_0;
}

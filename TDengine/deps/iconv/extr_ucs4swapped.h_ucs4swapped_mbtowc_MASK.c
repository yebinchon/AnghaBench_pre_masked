
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int ucs4_t ;
typedef int conv_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;

__attribute__((used)) static int
FUNC_2 (conv_t VAR_0, ucs4_t *VAR_1, const unsigned char *VAR_2, int VAR_3)
{

  if (sizeof(unsigned int) != 4) FUNC_1();

  if (VAR_3 >= 4) {
    unsigned int VAR_4 = *(const unsigned int *)VAR_2;
    VAR_4 = (VAR_4 >> 24) | ((VAR_4 >> 8) & 0xff00) | ((VAR_4 & 0xff00) << 8) | (VAR_4 << 24);
    *VAR_1 = VAR_4;
    return 4;
  }
  return FUNC_0(0);
}

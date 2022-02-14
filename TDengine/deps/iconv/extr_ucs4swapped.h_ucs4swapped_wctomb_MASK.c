
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int ucs4_t ;
typedef int conv_t ;


 int VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static int
FUNC_1 (conv_t VAR_1, unsigned char *VAR_2, ucs4_t VAR_3, int VAR_4)
{

  if (sizeof(unsigned int) != 4) FUNC_0();

  if (VAR_4 >= 4) {
    unsigned int VAR_5 = VAR_3;
    VAR_5 = (VAR_5 >> 24) | ((VAR_5 >> 8) & 0xff00) | ((VAR_5 & 0xff00) << 8) | (VAR_5 << 24);
    *(unsigned int *)VAR_2 = VAR_5;
    return 4;
  } else
    return VAR_0;
}

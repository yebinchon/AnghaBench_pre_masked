
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucs4_t ;
typedef int conv_t ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0 (conv_t VAR_1, unsigned char *VAR_2, ucs4_t VAR_3, int VAR_4)
{
  if (VAR_3 < 0x0080) {
    *VAR_2 = VAR_3;
    return 1;
  }
  else if (VAR_3 >= 0x0e01 && VAR_3 <= 0x0e5b && !(VAR_3 >= 0x0e3b && VAR_3 <= 0x0e3e)) {
    *VAR_2 = VAR_3-0x0d60;
    return 1;
  }
  return VAR_0;
}

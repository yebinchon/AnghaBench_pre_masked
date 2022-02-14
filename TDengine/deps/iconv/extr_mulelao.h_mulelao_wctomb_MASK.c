
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucs4_t ;
typedef int conv_t ;


 int VAR_0 ;
 unsigned char* VAR_1 ;

__attribute__((used)) static int
FUNC_0 (conv_t VAR_2, unsigned char *VAR_3, ucs4_t VAR_4, int VAR_5)
{
  unsigned char VAR_6 = 0;
  if (VAR_4 < 0x00a0) {
    *VAR_3 = VAR_4;
    return 1;
  }
  else if (VAR_4 == 0x00a0)
    VAR_6 = 0xa0;
  else if (VAR_4 >= 0x0e80 && VAR_4 < 0x0ee0)
    VAR_6 = VAR_1[VAR_4-0x0e80];
  if (VAR_6 != 0) {
    *VAR_3 = VAR_6;
    return 1;
  }
  return VAR_0;
}

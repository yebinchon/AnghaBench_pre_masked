
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucs4_t ;
typedef int conv_t ;


 int VAR_0 ;
 unsigned char* VAR_1 ;
 unsigned char* VAR_2 ;

__attribute__((used)) static int
FUNC_0 (conv_t VAR_3, unsigned char *VAR_4, ucs4_t VAR_5, int VAR_6)
{
  unsigned char VAR_7 = 0;
  if (VAR_5 < 0x00a0) {
    *VAR_4 = VAR_5;
    return 1;
  }
  else if (VAR_5 >= 0x00a0 && VAR_5 < 0x0180)
    VAR_7 = VAR_1[VAR_5-0x00a0];
  else if (VAR_5 >= 0x02c0 && VAR_5 < 0x02e0)
    VAR_7 = VAR_2[VAR_5-0x02c0];
  if (VAR_7 != 0) {
    *VAR_4 = VAR_7;
    return 1;
  }
  return VAR_0;
}


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
  if (VAR_5 < 0x0080 && (VAR_5 >= 0x0020 || (0x42100064 & (1 << VAR_5)) == 0)) {
    *VAR_4 = VAR_5;
    return 1;
  }
  else if (VAR_5 >= 0x00c0 && VAR_5 < 0x01b8)
    VAR_7 = VAR_1[VAR_5-0x00c0];
  else if (VAR_5 >= 0x1ea0 && VAR_5 < 0x1f00)
    VAR_7 = VAR_2[VAR_5-0x1ea0];
  if (VAR_7 != 0) {
    *VAR_4 = VAR_7;
    return 1;
  }
  return VAR_0;
}

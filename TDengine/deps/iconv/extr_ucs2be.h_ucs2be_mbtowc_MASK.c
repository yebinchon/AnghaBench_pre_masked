
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char ucs4_t ;
typedef int conv_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1 (conv_t VAR_1, ucs4_t *VAR_2, const unsigned char *VAR_3, int VAR_4)
{
  if (VAR_4 >= 2) {
    if (VAR_3[0] >= 0xd8 && VAR_3[0] < 0xe0) {
      return VAR_0;
    } else {
      *VAR_2 = (VAR_3[0] << 8) + VAR_3[1];
      return 2;
    }
  }
  return FUNC_0(0);
}

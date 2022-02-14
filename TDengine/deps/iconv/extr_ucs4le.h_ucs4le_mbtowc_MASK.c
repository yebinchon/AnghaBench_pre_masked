
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char ucs4_t ;
typedef int conv_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1 (conv_t VAR_0, ucs4_t *VAR_1, const unsigned char *VAR_2, int VAR_3)
{
  if (VAR_3 >= 4) {
    *VAR_1 = VAR_2[0] + (VAR_2[1] << 8) + (VAR_2[2] << 16) + (VAR_2[3] << 24);
    return 4;
  }
  return FUNC_0(0);
}

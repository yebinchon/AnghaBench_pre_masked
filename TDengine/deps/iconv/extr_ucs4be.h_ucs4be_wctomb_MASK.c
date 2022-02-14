
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
  if (VAR_4 >= 4) {
    VAR_2[0] = (unsigned char) (VAR_3 >> 24);
    VAR_2[1] = (unsigned char) (VAR_3 >> 16);
    VAR_2[2] = (unsigned char) (VAR_3 >> 8);
    VAR_2[3] = (unsigned char) VAR_3;
    return 4;
  } else
    return VAR_0;
}

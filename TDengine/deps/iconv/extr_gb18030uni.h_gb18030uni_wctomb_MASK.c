
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int ucs4_t ;
typedef int conv_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int* VAR_2 ;
 unsigned int* VAR_3 ;

__attribute__((used)) static int
FUNC_0 (conv_t VAR_4, unsigned char *VAR_5, ucs4_t VAR_6, int VAR_7)
{
  if (VAR_7 >= 4) {
    unsigned int VAR_8 = VAR_6;
    if (VAR_8 >= 0x0080 && VAR_8 <= 0xffff) {
      unsigned int VAR_9 = 0;
      unsigned int VAR_10 = 205;
      while (VAR_9 < VAR_10) {
        unsigned int VAR_11 = (VAR_9 + VAR_10) / 2;
        if (VAR_8 <= VAR_3[2*VAR_11+1])
          VAR_10 = VAR_11;
        else if (VAR_8 >= VAR_3[2*VAR_11+2])
          VAR_9 = VAR_11 + 1;
        else
          return VAR_0;
      }
      {
        unsigned int VAR_12 = VAR_2[VAR_9];
        VAR_8 -= VAR_12;
        VAR_5[3] = (VAR_8 % 10) + 0x30; VAR_8 = VAR_8 / 10;
        VAR_5[2] = (VAR_8 % 126) + 0x81; VAR_8 = VAR_8 / 126;
        VAR_5[1] = (VAR_8 % 10) + 0x30; VAR_8 = VAR_8 / 10;
        VAR_5[0] = VAR_8 + 0x81;
        return 4;
      }
    }
    return VAR_0;
  }
  return VAR_1;
}

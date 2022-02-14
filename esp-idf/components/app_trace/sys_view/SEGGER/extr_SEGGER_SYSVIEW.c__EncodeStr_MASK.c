
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U8 ;



__attribute__((used)) static U8 *FUNC_0(U8 *VAR_0, const char *VAR_1, unsigned int VAR_2) {
  unsigned int VAR_3;
  unsigned int VAR_4;



  VAR_4 = 0;
  while(*(VAR_1 + VAR_4) != 0) {
    VAR_4++;
  }
  if (VAR_4 > VAR_2) {
    VAR_4 = VAR_2;
  }



  if (VAR_4 < 255) {
    *VAR_0++ = VAR_4;
  } else {
    *VAR_0++ = 255;
    *VAR_0++ = (VAR_4 & 255);
    *VAR_0++ = ((VAR_4 >> 8) & 255);
  }



  VAR_3 = 0;
  while (VAR_3 < VAR_4) {
    *VAR_0++ = *VAR_1++;
    VAR_3++;
  }
  return VAR_0;
}

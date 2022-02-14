
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U8 ;



__attribute__((used)) static U8* FUNC_0(U8* VAR_0, const char* VAR_1, unsigned int VAR_2) {
  unsigned int VAR_3;

  VAR_3 = 0;
  *VAR_0++ = VAR_2;
  while (VAR_3 < VAR_2) {
    *VAR_0++ = *VAR_1++;
    VAR_3++;
  }
  return VAR_0;
}

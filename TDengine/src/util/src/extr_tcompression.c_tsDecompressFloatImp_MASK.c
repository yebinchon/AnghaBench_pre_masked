
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int const VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const* const,int*,int) ;
 int FUNC_2 (char* const,char const* const,int const) ;

int FUNC_3(const char *const VAR_1, const int VAR_2, char *const VAR_3) {
  float *VAR_4 = (float *)VAR_3;

  if (VAR_1[0] == 1) {
    FUNC_2(VAR_3, VAR_1 + 1, VAR_2 * VAR_0);
    return VAR_2 * VAR_0;
  }

  uint8_t VAR_5 = 0;
  int VAR_6 = 1;
  int VAR_7 = 0;
  uint32_t VAR_8 = 0;

  for (int VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
    if (VAR_9 % 2 == 0) {
      VAR_5 = VAR_1[VAR_6++];
    }

    uint8_t VAR_10 = VAR_5 & FUNC_0(4);
    VAR_5 >>= 4;

    uint32_t VAR_11 = FUNC_1(VAR_1, &VAR_6, VAR_10);
    union {
      uint32_t bits;
      float real;
    } VAR_12;

    uint32_t VAR_13 = VAR_8;
    VAR_12.bits = VAR_13 ^ VAR_11;
    VAR_8 = VAR_12.bits;

    VAR_4[VAR_7++] = VAR_12.real;
  }

  return VAR_2 * VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 char const FUNC_0 (int) ;
 char VAR_1 ;

int FUNC_1(const char *const VAR_2, const int VAR_3, char *const VAR_4) {
  int VAR_5 = -1, VAR_6 = 0;
  int VAR_7 = VAR_0 / 2;

  for (int VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
    if (VAR_8 % VAR_7 == 0) {
      VAR_5++;
    }

    uint8_t VAR_9 = (VAR_2[VAR_5] >> (2 * (VAR_8 % VAR_7))) & FUNC_0(2);
    if (VAR_9 == 1) {
      VAR_4[VAR_6++] = 1;
    } else if (VAR_9 == 2) {
      VAR_4[VAR_6++] = VAR_1;
    } else {
      VAR_4[VAR_6++] = 0;
    }
  }

  return VAR_3;
}

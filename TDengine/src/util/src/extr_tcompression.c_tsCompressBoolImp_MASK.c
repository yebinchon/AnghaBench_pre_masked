
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 char const VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;

int FUNC_2(const char *const VAR_2, const int VAR_3, char *const VAR_4) {
  int VAR_5 = -1;
  int VAR_6 = VAR_0 / 2;

  for (int VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
    if (VAR_7 % VAR_6 == 0) {
      VAR_5++;
      VAR_4[VAR_5] = 0;
    }

    uint8_t VAR_8 = 0;
    if (VAR_2[VAR_7] == 1) {
      VAR_8 = (((uint8_t)1) << (2 * (VAR_7 % VAR_6)));
      VAR_4[VAR_5] |= VAR_8;
    } else if (VAR_2[VAR_7] == 0) {
      VAR_8 = ((uint8_t)1 << (2 * (VAR_7 % VAR_6))) - 1;

      VAR_4[VAR_5] &= VAR_8;
    } else if (VAR_2[VAR_7] == VAR_1) {
      VAR_8 = ((uint8_t)2 << (2 * (VAR_7 % VAR_6)));

      VAR_4[VAR_5] |= VAR_8;
    } else {
      FUNC_1("Wrong bool value.\n");
      FUNC_0(1);
    }
  }

  return VAR_5 + 1;
}

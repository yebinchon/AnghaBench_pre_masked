
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef int int32_t ;


 scalar_t__ FUNC_0 (char*) ;

int64_t FUNC_1(char *VAR_0, int32_t VAR_1) {
  int64_t VAR_2 = 0, VAR_3, VAR_4, VAR_5 = 1;

  if (VAR_1 > (int32_t)FUNC_0(VAR_0)) {
    VAR_1 = (int32_t)FUNC_0(VAR_0);
  }

  if ((VAR_1 > 2) && (VAR_0[0] == '0') && ((VAR_0[1] == 'x') || (VAR_0[1] == 'X'))) {
    for (VAR_3 = VAR_1 - 1; VAR_3 >= 2; --VAR_3, VAR_5 *= 16) {
      if (VAR_0[VAR_3] >= '0' && VAR_0[VAR_3] <= '9') {
        VAR_4 = (VAR_0[VAR_3] - '0');
      } else if (VAR_0[VAR_3] >= 'a' && VAR_0[VAR_3] <= 'f') {
        VAR_4 = VAR_0[VAR_3] - 'a' + 10;
      } else if (VAR_0[VAR_3] >= 'A' && VAR_0[VAR_3] <= 'F') {
        VAR_4 = VAR_0[VAR_3] - 'A' + 10;
      } else {
        return 0;
      }
      VAR_2 += VAR_4 * VAR_5;
    }
  } else {
    for (VAR_3 = VAR_1 - 1; VAR_3 >= 0; --VAR_3, VAR_5 *= 10) {
      if (VAR_0[VAR_3] >= '0' && VAR_0[VAR_3] <= '9') {
        VAR_4 = (VAR_0[VAR_3] - '0');
      } else {
        return 0;
      }
      VAR_2 += VAR_4 * VAR_5;
    }
  }

  return VAR_2;
}

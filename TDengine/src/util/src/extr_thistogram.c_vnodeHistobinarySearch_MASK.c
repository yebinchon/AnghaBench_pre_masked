
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_3__ {double val; } ;
typedef TYPE_1__ SHistBin ;



int32_t FUNC_0(SHistBin* VAR_0, int32_t VAR_1, double VAR_2) {
  int32_t VAR_3 = VAR_1 - 1;
  int32_t VAR_4 = 0;

  while (VAR_4 <= VAR_3) {
    int32_t VAR_5 = (VAR_3 - VAR_4) / 2 + VAR_4;
    if (VAR_0[VAR_5].val == VAR_2) {
      return VAR_5;
    }

    if (VAR_0[VAR_5].val < VAR_2) {
      VAR_4 = VAR_5 + 1;
    } else {
      VAR_3 = VAR_5 - 1;
    }
  }

  int32_t VAR_6 = VAR_4 > VAR_3 ? VAR_4 : VAR_3;
  if (VAR_6 < 0) {
    return 0;
  } else {
    return VAR_6;
  }
}

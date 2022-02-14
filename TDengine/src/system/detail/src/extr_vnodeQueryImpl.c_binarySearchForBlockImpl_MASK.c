
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_3__ {scalar_t__ keyLast; scalar_t__ keyFirst; } ;
typedef scalar_t__ TSKEY ;
typedef TYPE_1__ SCompBlock ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int32_t FUNC_0(SCompBlock *VAR_2, int32_t VAR_3, TSKEY VAR_4, int32_t VAR_5) {
  int32_t VAR_6 = 0;
  int32_t VAR_7 = VAR_3 - 1;

  int32_t VAR_8 = VAR_6;

  while (1) {
    VAR_3 = VAR_7 - VAR_6 + 1;
    VAR_8 = (VAR_6 + (VAR_3 >> 1));

    if (VAR_3 == 1) break;

    if (VAR_4 > VAR_2[VAR_8].keyLast) {
      if (VAR_3 == 2) break;
      if ((VAR_5 == VAR_1) && (VAR_4 < VAR_2[VAR_8 + 1].keyFirst)) break;
      VAR_6 = VAR_8 + 1;
    } else if (VAR_4 < VAR_2[VAR_8].keyFirst) {
      if ((VAR_5 == VAR_0) && (VAR_4 > VAR_2[VAR_8 - 1].keyLast)) break;
      VAR_7 = VAR_8 - 1;
    } else {
      break;
    }
  }

  return VAR_8;
}

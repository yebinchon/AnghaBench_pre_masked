
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int32_t ;
typedef scalar_t__ int16_t ;
struct TYPE_5__ {int num; TYPE_1__* ids; int member_0; } ;
struct TYPE_4__ {int columnIndex; scalar_t__ tableIndex; } ;
typedef TYPE_2__ SColumnList ;


 int FUNC_0 (int) ;

__attribute__((used)) static SColumnList FUNC_1(int32_t VAR_0, int16_t VAR_1, int32_t VAR_2) {
  FUNC_0(VAR_0 == 1 && VAR_2 >= -1 && VAR_1 >= 0);

  SColumnList VAR_3 = {0};
  VAR_3.num = VAR_0;

  int32_t VAR_4 = VAR_0 - 1;
  VAR_3.ids[VAR_4].tableIndex = VAR_1;
  VAR_3.ids[VAR_4].columnIndex = VAR_2;

  return VAR_3;
}

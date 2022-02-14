
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_4__ {int rowIdx; scalar_t__ numOfRawDataInRows; } ;
typedef TYPE_1__ SInterpolationInfo ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;

int32_t FUNC_1(SInterpolationInfo* VAR_0) {
  if (VAR_0->rowIdx == -1 || VAR_0->numOfRawDataInRows == 0) {
    return 0;
  }

  return FUNC_0(VAR_0) ? (VAR_0->numOfRawDataInRows - VAR_0->rowIdx)
                                                : VAR_0->rowIdx + 1;
}

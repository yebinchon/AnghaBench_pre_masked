
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_4__ {scalar_t__ numOfRawDataInRows; scalar_t__ rowIdx; } ;
typedef TYPE_1__ SInterpolationInfo ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;

void FUNC_1(SInterpolationInfo* VAR_1, int32_t VAR_2, int32_t VAR_3) {
  if (VAR_3 == VAR_0) {
    return;
  }

  VAR_1->rowIdx = FUNC_0(VAR_1) ? 0 : VAR_2 - 1;
  VAR_1->numOfRawDataInRows = VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_4__ {scalar_t__ numOfCols; } ;
typedef int SSqlFuncExprMsg ;
typedef TYPE_1__ SQueryMeterMsg ;


 scalar_t__ FUNC_0 (TYPE_1__*,int *) ;

bool FUNC_1(SQueryMeterMsg* VAR_0, SSqlFuncExprMsg* VAR_1) {
  int32_t VAR_2 = FUNC_0(VAR_0, VAR_1);
  return VAR_2 < VAR_0->numOfCols;
}

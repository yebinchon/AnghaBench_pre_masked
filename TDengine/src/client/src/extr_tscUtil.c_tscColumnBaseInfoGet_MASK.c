
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_3__ {size_t numOfCols; int * pColList; } ;
typedef TYPE_1__ SColumnBaseInfo ;
typedef int SColumnBase ;



SColumnBase* FUNC_0(SColumnBaseInfo* VAR_0, int32_t VAR_1) {
  if (VAR_0 == ((void*)0) || VAR_0->numOfCols < VAR_1) {
    return ((void*)0);
  }

  return &VAR_0->pColList[VAR_1];
}

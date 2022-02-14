
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_7__ {int numOfOutputCols; TYPE_1__* pFields; scalar_t__* pOffset; } ;
struct TYPE_6__ {TYPE_3__ fieldsInfo; } ;
struct TYPE_5__ {scalar_t__ bytes; } ;
typedef TYPE_2__ SSqlCmd ;
typedef TYPE_3__ SFieldInfo ;



int32_t FUNC_0(SSqlCmd* VAR_0) {
  SFieldInfo* VAR_1 = &VAR_0->fieldsInfo;
  if (VAR_1->numOfOutputCols <= 0) {
    return 0;
  }

  return VAR_1->pOffset[VAR_1->numOfOutputCols - 1] +
         VAR_1->pFields[VAR_1->numOfOutputCols - 1].bytes;
}

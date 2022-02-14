
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t int32_t ;
typedef int int16_t ;
struct TYPE_4__ {size_t numOfOutputCols; int * pOffset; } ;
struct TYPE_5__ {TYPE_1__ fieldsInfo; } ;
typedef TYPE_2__ SSqlCmd ;



int16_t FUNC_0(SSqlCmd* VAR_0, int32_t VAR_1) {
  if (VAR_1 >= VAR_0->fieldsInfo.numOfOutputCols) {
    return 0;
  }

  return VAR_0->fieldsInfo.pOffset[VAR_1];
}

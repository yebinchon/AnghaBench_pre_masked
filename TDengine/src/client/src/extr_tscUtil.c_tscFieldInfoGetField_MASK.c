
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_4__ {size_t numOfOutputCols; int * pFields; } ;
struct TYPE_5__ {TYPE_1__ fieldsInfo; } ;
typedef int TAOS_FIELD ;
typedef TYPE_2__ SSqlCmd ;



TAOS_FIELD* FUNC_0(SSqlCmd* VAR_0, int32_t VAR_1) {
  if (VAR_1 >= VAR_0->fieldsInfo.numOfOutputCols) {
    return ((void*)0);
  }

  return &VAR_0->fieldsInfo.pFields[VAR_1];
}

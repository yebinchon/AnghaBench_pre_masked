
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ numOfElems; scalar_t__ data; } ;
typedef TYPE_2__ tFilePage ;
struct TYPE_8__ {scalar_t__ numOfCols; int* colOffset; TYPE_1__* pFields; } ;
typedef TYPE_3__ tColModel ;
typedef scalar_t__ int32_t ;
struct TYPE_6__ {int bytes; } ;


 int FUNC_0 (scalar_t__,scalar_t__,int) ;

void FUNC_1(tColModel *VAR_0, tFilePage *VAR_1, int32_t VAR_2) {
  if (VAR_1->numOfElems == 0 || VAR_2 == VAR_1->numOfElems) {
    return;
  }


  for (int32_t VAR_3 = 1; VAR_3 < VAR_0->numOfCols; ++VAR_3) {
    FUNC_0(VAR_1->data + VAR_0->colOffset[VAR_3] * VAR_1->numOfElems,
            VAR_1->data + VAR_0->colOffset[VAR_3] * VAR_2,
            VAR_0->pFields[VAR_3].bytes * VAR_1->numOfElems);
  }
}

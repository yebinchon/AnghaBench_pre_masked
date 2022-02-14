
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_8__ {size_t numOfCols; size_t numOfAssignedCols; int* hasVal; TYPE_1__* elems; } ;
struct TYPE_7__ {scalar_t__ bytes; } ;
struct TYPE_6__ {size_t colIndex; scalar_t__ offset; } ;
typedef TYPE_2__ SSchema ;
typedef TYPE_3__ SParsedDataColInfo ;



__attribute__((used)) static void FUNC_0(SParsedDataColInfo *VAR_0, SSchema *VAR_1, int32_t VAR_2) {
  VAR_0->numOfCols = VAR_2;
  VAR_0->numOfAssignedCols = VAR_2;

  for (int32_t VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3) {
    VAR_0->hasVal[VAR_3] = 1;
    VAR_0->elems[VAR_3].colIndex = VAR_3;

    if (VAR_3 > 0) {
      VAR_0->elems[VAR_3].offset = VAR_0->elems[VAR_3 - 1].offset + VAR_1[VAR_3 - 1].bytes;
    }
  }
}

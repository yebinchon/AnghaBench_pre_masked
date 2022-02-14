
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int numOfElems; scalar_t__ data; } ;
typedef TYPE_3__ tFilePage ;
struct TYPE_11__ {int maxCapacity; size_t numOfCols; TYPE_1__* pFields; scalar_t__* colOffset; } ;
typedef TYPE_4__ tColModel ;
typedef size_t int32_t ;
struct TYPE_12__ {int hasPrevRow; scalar_t__ prevRowOfInput; TYPE_2__* pDesc; } ;
struct TYPE_9__ {TYPE_4__* pSchema; } ;
struct TYPE_8__ {int bytes; } ;
typedef TYPE_5__ SLocalReducer ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_2(SLocalReducer *VAR_0, tFilePage *VAR_1) {
  tColModel *VAR_2 = VAR_0->pDesc->pSchema;
  FUNC_0(VAR_2->maxCapacity == 1 && VAR_1->numOfElems == 1);


  for (int32_t VAR_3 = 0; VAR_3 < VAR_0->pDesc->pSchema->numOfCols; ++VAR_3) {
    FUNC_1(VAR_0->prevRowOfInput + VAR_2->colOffset[VAR_3], VAR_1->data + VAR_2->colOffset[VAR_3],
           VAR_2->pFields[VAR_3].bytes);
  }

  VAR_1->numOfElems = 0;
  VAR_0->hasPrevRow = 1;
}

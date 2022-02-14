
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_12__ {int numOfCols; void** pNextPoint; void** pPrevPoint; } ;
struct TYPE_11__ {int numOfCols; TYPE_2__* colList; } ;
struct TYPE_9__ {size_t bytes; } ;
struct TYPE_10__ {TYPE_1__ data; } ;
typedef TYPE_3__ SQuery ;
typedef TYPE_4__ SPointInterpoSupporter ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int,size_t) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 void* FUNC_4 (int) ;

void FUNC_5(SQuery *VAR_1, SPointInterpoSupporter *VAR_2) {
  if (FUNC_3(VAR_1)) {
    VAR_2->pPrevPoint = FUNC_4(VAR_1->numOfCols * VAR_0);
    VAR_2->pNextPoint = FUNC_4(VAR_1->numOfCols * VAR_0);

    VAR_2->numOfCols = VAR_1->numOfCols;


    int32_t VAR_3 = 0;
    for (int32_t VAR_4 = 0; VAR_4 < VAR_1->numOfCols; ++VAR_4) {
      VAR_3 += VAR_1->colList[VAR_4].data.bytes;
    }

    FUNC_1(FUNC_0(VAR_1));

    void *VAR_5 = FUNC_2(1, VAR_3);
    void *VAR_6 = FUNC_2(1, VAR_3);

    int32_t VAR_7 = 0;

    for (int32_t VAR_8 = 0, VAR_9 = 0; VAR_8 < VAR_1->numOfCols; ++VAR_8, ++VAR_9) {
      VAR_2->pPrevPoint[VAR_9] = VAR_5 + VAR_7;
      VAR_2->pNextPoint[VAR_9] = VAR_6 + VAR_7;

      VAR_7 += VAR_1->colList[VAR_8].data.bytes;
    }
  }
}

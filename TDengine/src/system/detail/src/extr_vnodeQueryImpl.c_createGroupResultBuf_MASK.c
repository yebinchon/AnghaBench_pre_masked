
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int tFilePage ;
typedef size_t int32_t ;
struct TYPE_10__ {size_t nAlloc; TYPE_2__** result; int * resultInfo; } ;
struct TYPE_9__ {size_t numOfOutputCols; TYPE_1__* pSelectExpr; } ;
struct TYPE_8__ {scalar_t__ numOfElems; } ;
struct TYPE_7__ {size_t interResBytes; } ;
typedef int SResultInfo ;
typedef TYPE_3__ SQuery ;
typedef TYPE_4__ SOutputRes ;


 size_t VAR_0 ;
 int * FUNC_0 (size_t,int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int *,size_t,int) ;

void FUNC_3(SQuery *VAR_1, SOutputRes *VAR_2, bool VAR_3) {
  int32_t VAR_4 = VAR_1->numOfOutputCols;

  VAR_2->resultInfo = FUNC_0((size_t)VAR_4, sizeof(SResultInfo));

  VAR_2->result = FUNC_1(VAR_0 * VAR_4);
  for (int32_t VAR_5 = 0; VAR_5 < VAR_4; ++VAR_5) {
    size_t VAR_6 = VAR_1->pSelectExpr[VAR_5].interResBytes;
    SResultInfo *VAR_7 = &VAR_2->resultInfo[VAR_5];

    VAR_2->result[VAR_5] = FUNC_1(sizeof(tFilePage) + VAR_6 * VAR_2->nAlloc);
    VAR_2->result[VAR_5]->numOfElems = 0;

    FUNC_2(VAR_7, (int32_t)VAR_6, VAR_3);
  }
}

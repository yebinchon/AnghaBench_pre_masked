
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_16__ ;


typedef size_t int32_t ;
struct TYPE_24__ {TYPE_1__* resultInfo; } ;
struct TYPE_23__ {int hasPrevRow; TYPE_2__* pResultBuf; TYPE_9__* pCtx; } ;
struct TYPE_20__ {size_t numOfOutputCols; } ;
struct TYPE_22__ {TYPE_3__ fieldsInfo; } ;
struct TYPE_21__ {size_t functionId; } ;
struct TYPE_19__ {int numOfElems; } ;
struct TYPE_18__ {int initialized; } ;
struct TYPE_17__ {int (* xFinalize ) (TYPE_9__*) ;} ;
typedef TYPE_4__ SSqlExpr ;
typedef TYPE_5__ SSqlCmd ;
typedef TYPE_6__ SLocalReducer ;


 TYPE_16__* VAR_0 ;
 int FUNC_0 (TYPE_5__*,size_t,TYPE_6__*) ;
 int FUNC_1 (TYPE_5__*,TYPE_9__*) ;
 int FUNC_2 (TYPE_9__*) ;
 TYPE_4__* FUNC_3 (TYPE_5__*,size_t) ;

int32_t FUNC_4(SSqlCmd *VAR_1, SLocalReducer *VAR_2) {
  for (int32_t VAR_3 = 0; VAR_3 < VAR_1->fieldsInfo.numOfOutputCols; ++VAR_3) {
    SSqlExpr *VAR_4 = FUNC_3(VAR_1, VAR_3);
    VAR_0[VAR_4->functionId].xFinalize(&VAR_2->pCtx[VAR_3]);


    VAR_2->pCtx[VAR_3].resultInfo->initialized = 0;
  }

  VAR_2->hasPrevRow = 0;

  int32_t VAR_5 = (int32_t)FUNC_1(VAR_1, VAR_2->pCtx);
  VAR_2->pResultBuf->numOfElems += VAR_5;

  FUNC_0(VAR_1, VAR_5, VAR_2);
  return VAR_5;
}

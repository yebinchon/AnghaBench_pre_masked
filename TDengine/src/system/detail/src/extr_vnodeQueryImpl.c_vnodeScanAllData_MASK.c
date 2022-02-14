
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_16__ ;


typedef size_t int32_t ;
struct TYPE_26__ {TYPE_3__* resultInfo; } ;
struct TYPE_25__ {size_t numOfOutputCols; scalar_t__ skey; scalar_t__ lastKey; int pGroupbyExpr; TYPE_2__* pSelectExpr; int pos; int slot; int fileId; } ;
struct TYPE_24__ {size_t usedIndex; int * pCtx; TYPE_7__* pResult; int startPos; TYPE_6__* pQuery; } ;
struct TYPE_23__ {int complete; } ;
struct TYPE_22__ {int complete; } ;
struct TYPE_20__ {size_t functionId; } ;
struct TYPE_21__ {TYPE_1__ pBase; } ;
struct TYPE_19__ {int (* xNextStep ) (int *) ;} ;
typedef scalar_t__ TSKEY ;
typedef TYPE_4__ SResultInfo ;
typedef TYPE_5__ SQueryRuntimeEnv ;
typedef TYPE_6__ SQuery ;
typedef TYPE_7__ SOutputRes ;


 TYPE_4__* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_6__*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_16__* VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (TYPE_6__*) ;
 scalar_t__ FUNC_7 (TYPE_5__*,int *) ;
 int FUNC_8 (int *,int ,int ,int ) ;
 int FUNC_9 (TYPE_5__*,TYPE_7__*) ;
 int FUNC_10 (TYPE_6__*,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

void FUNC_13(SQueryRuntimeEnv *VAR_3) {
  SQuery *VAR_4 = VAR_3->pQuery;
  FUNC_10(VAR_4, VAR_0);


  FUNC_8(&VAR_3->startPos, VAR_4->fileId, VAR_4->slot, VAR_4->pos);

  while (1) {
    FUNC_3(VAR_3);


    bool VAR_5 = 1;

    if (FUNC_5(VAR_4->pGroupbyExpr)) {

      for (int32_t VAR_6 = 0; VAR_6 < VAR_3->usedIndex; ++VAR_6) {
        SOutputRes *VAR_7 = &VAR_3->pResult[VAR_6];
        FUNC_9(VAR_3, VAR_7);

        for (int32_t VAR_8 = 0; VAR_8 < VAR_4->numOfOutputCols; ++VAR_8) {
          VAR_2[VAR_4->pSelectExpr[VAR_8].pBase.functionId].xNextStep(&VAR_3->pCtx[VAR_8]);
          SResultInfo *VAR_9 = FUNC_0(&VAR_3->pCtx[VAR_8]);

          VAR_5 &= (VAR_9->complete);
        }
      }
    } else {
      for (int32_t VAR_10 = 0; VAR_10 < VAR_4->numOfOutputCols; ++VAR_10) {
        VAR_2[VAR_4->pSelectExpr[VAR_10].pBase.functionId].xNextStep(&VAR_3->pCtx[VAR_10]);
        SResultInfo *VAR_11 = FUNC_0(&VAR_3->pCtx[VAR_10]);

        VAR_5 &= (VAR_11->complete);
      }
    }

    if (VAR_5) {
      break;
    }


    TSKEY VAR_12 = FUNC_7(VAR_3, &VAR_3->startPos);
    FUNC_2((FUNC_1(VAR_4) && VAR_12 >= VAR_4->skey) ||
           (!FUNC_1(VAR_4) && VAR_12 <= VAR_4->skey));

    FUNC_10(VAR_4, VAR_0);
    VAR_4->lastKey = VAR_4->skey;


    if (FUNC_6(VAR_4)) {
      FUNC_10(VAR_4, VAR_1);
      return;
    }
  }

  FUNC_4(VAR_3);


  if (FUNC_5(VAR_4->pGroupbyExpr)) {
    for (int32_t VAR_13 = 0; VAR_13 < VAR_3->usedIndex; ++VAR_13) {
      SOutputRes *VAR_14 = &VAR_3->pResult[VAR_13];
      for (int32_t VAR_15 = 0; VAR_15 < VAR_4->numOfOutputCols; ++VAR_15) {
        VAR_14->resultInfo[VAR_15].complete = 0;
      }
    }
  } else {
    for (int32_t VAR_16 = 0; VAR_16 < VAR_4->numOfOutputCols; ++VAR_16) {
      SResultInfo *VAR_17 = FUNC_0(&VAR_3->pCtx[VAR_16]);
      if (VAR_17 != ((void*)0)) {
        VAR_17->complete = 0;
      }
    }
  }
}

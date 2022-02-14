
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


typedef size_t int32_t ;
struct TYPE_18__ {TYPE_4__* pCtx; } ;
struct TYPE_17__ {int currentStage; int inputType; int inputBytes; int aInputElemBuf; int tag; int * param; } ;
struct TYPE_14__ {size_t numOfOutputCols; } ;
struct TYPE_16__ {TYPE_1__ fieldsInfo; } ;
struct TYPE_15__ {size_t functionId; int * param; } ;
struct TYPE_13__ {int (* distSecondaryMergeFunc ) (TYPE_4__*) ;int (* init ) (TYPE_4__*) ;} ;
typedef TYPE_2__ SSqlExpr ;
typedef TYPE_3__ SSqlCmd ;
typedef TYPE_4__ SQLFunctionCtx ;
typedef TYPE_5__ SLocalReducer ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 TYPE_12__* VAR_4 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int FUNC_4 (int *) ;
 TYPE_2__* FUNC_5 (TYPE_3__*,size_t) ;

__attribute__((used)) static void FUNC_6(SSqlCmd* VAR_5, SLocalReducer *VAR_6, bool VAR_7) {

  for(int32_t VAR_8 = 0; VAR_8 < VAR_5->fieldsInfo.numOfOutputCols; ++VAR_8) {
    SSqlExpr * VAR_9 = FUNC_5(VAR_5, VAR_8);
    SQLFunctionCtx *VAR_10 = &VAR_6->pCtx[VAR_8];

    FUNC_2(&VAR_10->param[0], &VAR_9->param[0]);


    if (VAR_9->functionId == VAR_2 || VAR_9->functionId == VAR_1 ||
        VAR_9->functionId == VAR_3) {
      FUNC_4(&VAR_10->tag);
      FUNC_3(&VAR_10->tag, VAR_10->aInputElemBuf, VAR_10->inputBytes, VAR_10->inputType);
    }

    VAR_10->currentStage = VAR_0;

    if (VAR_7) {
      VAR_4[VAR_9->functionId].init(VAR_10);
    }
  }

  for (int32_t VAR_11 = 0; VAR_11 < VAR_5->fieldsInfo.numOfOutputCols; ++VAR_11) {
    int32_t VAR_12 = FUNC_5(VAR_5, VAR_11)->functionId;
    if (VAR_12 == VAR_2 || VAR_12 == VAR_3) {
      continue;
    }

    VAR_4[VAR_12].distSecondaryMergeFunc(&VAR_6->pCtx[VAR_11]);
  }
}

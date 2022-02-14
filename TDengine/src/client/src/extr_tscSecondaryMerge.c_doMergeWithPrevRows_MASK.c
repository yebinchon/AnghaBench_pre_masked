
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_19__ {TYPE_6__* pCtx; } ;
struct TYPE_18__ {size_t aOutputBuf; size_t outputBytes; char* ptsOutputBuf; } ;
struct TYPE_13__ {size_t numOfOutputCols; } ;
struct TYPE_17__ {TYPE_1__ fieldsInfo; } ;
struct TYPE_16__ {scalar_t__ functionId; } ;
struct TYPE_14__ {TYPE_7__* pLocalReducer; } ;
struct TYPE_15__ {TYPE_2__ res; TYPE_5__ cmd; } ;
typedef TYPE_2__ SSqlRes ;
typedef TYPE_3__ SSqlObj ;
typedef TYPE_4__ SSqlExpr ;
typedef TYPE_5__ SSqlCmd ;
typedef TYPE_6__ SQLFunctionCtx ;
typedef TYPE_7__ SLocalReducer ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (TYPE_5__*,TYPE_7__*,int) ;
 TYPE_4__* FUNC_1 (TYPE_5__*,size_t) ;

__attribute__((used)) static void FUNC_2(SSqlObj *VAR_3, int32_t VAR_4) {
  SSqlCmd * VAR_5 = &VAR_3->cmd;
  SSqlRes * VAR_6 = &VAR_3->res;
  SLocalReducer *VAR_7 = VAR_6->pLocalReducer;

  for (int32_t VAR_8 = 0; VAR_8 < VAR_5->fieldsInfo.numOfOutputCols; ++VAR_8) {
    SSqlExpr *VAR_9 = FUNC_1(VAR_5, VAR_8);
    SQLFunctionCtx *VAR_10 = &VAR_7->pCtx[VAR_8];

    VAR_10->aOutputBuf += VAR_10->outputBytes * VAR_4;


    if (VAR_9->functionId == VAR_1 || VAR_9->functionId == VAR_0) {
      VAR_10->ptsOutputBuf = ((char *)VAR_10->ptsOutputBuf + VAR_2 * VAR_4);
    }
  }

  FUNC_0(VAR_5, VAR_7, 1);
}

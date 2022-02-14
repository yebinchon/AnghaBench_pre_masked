
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_26__ {int vnodeIndex; } ;
struct TYPE_25__ {TYPE_9__ cur; } ;
struct TYPE_24__ {scalar_t__ lastResRows; TYPE_9__ cur; int tag; scalar_t__ reverseFillRes; } ;
struct TYPE_21__ {TYPE_8__* pTSBuf; TYPE_2__* pCtx; TYPE_4__* pQuery; } ;
struct TYPE_23__ {TYPE_3__ runtimeEnv; int * pMeterSidExtInfo; int pSidSet; } ;
struct TYPE_22__ {scalar_t__ numOfOutputCols; } ;
struct TYPE_19__ {int i64Key; } ;
struct TYPE_20__ {TYPE_1__ tag; } ;
typedef TYPE_3__ SQueryRuntimeEnv ;
typedef TYPE_4__ SQuery ;
typedef TYPE_5__ SMeterQuerySupportObj ;
typedef TYPE_6__ SMeterQueryInfo ;


 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_5__*,TYPE_6__*) ;
 int FUNC_3 (TYPE_5__*,TYPE_6__*) ;
 int FUNC_4 (TYPE_8__*,int ,int ) ;
 int FUNC_5 (TYPE_8__*,TYPE_9__*) ;
 int FUNC_6 (int ,TYPE_3__*,int ) ;

void FUNC_7(SMeterQuerySupportObj *VAR_0, int32_t VAR_1,
                                      SMeterQueryInfo *VAR_2) {
  SQueryRuntimeEnv *VAR_3 = &VAR_0->runtimeEnv;
  SQuery * VAR_4 = VAR_3->pQuery;

  if (FUNC_0(VAR_3)) {
    FUNC_3(VAR_0, VAR_2);

    if (VAR_2->lastResRows == 0) {
      FUNC_1(VAR_3);
    }


    for (int32_t VAR_5 = 0; VAR_5 < VAR_4->numOfOutputCols; ++VAR_5) {

    }

  } else {
    if (VAR_2->reverseFillRes) {
      FUNC_2(VAR_0, VAR_2);
    } else {






      FUNC_3(VAR_0, VAR_2);
    }
  }

  FUNC_6(VAR_0->pSidSet, VAR_3, VAR_0->pMeterSidExtInfo[VAR_1]);


  if (VAR_0->runtimeEnv.pTSBuf != ((void*)0)) {
    if (VAR_2->cur.vnodeIndex == -1) {
      VAR_2->tag = VAR_3->pCtx[0].tag.i64Key;

      FUNC_4(VAR_0->runtimeEnv.pTSBuf, 0, VAR_2->tag);


      VAR_2->cur = VAR_0->runtimeEnv.pTSBuf->cur;
    } else {
      FUNC_5(VAR_0->runtimeEnv.pTSBuf, &VAR_2->cur);
    }
  }
}

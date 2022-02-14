
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_17__ {int vnodeIndex; } ;
struct TYPE_16__ {TYPE_7__ cur; int tag; } ;
struct TYPE_14__ {int * pTSBuf; TYPE_2__* pCtx; } ;
struct TYPE_15__ {TYPE_3__ runtimeEnv; int * pMeterSidExtInfo; int pSidSet; } ;
struct TYPE_12__ {int i64Key; } ;
struct TYPE_13__ {TYPE_1__ tag; } ;
typedef TYPE_3__ SQueryRuntimeEnv ;
typedef int SOutputRes ;
typedef TYPE_4__ SMeterQuerySupportObj ;
typedef TYPE_5__ SMeterQueryInfo ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,TYPE_7__*) ;
 int FUNC_4 (int ,TYPE_3__*,int ) ;

void FUNC_5(SMeterQuerySupportObj *VAR_0, SOutputRes *VAR_1, int32_t VAR_2, int32_t VAR_3,
                         SMeterQueryInfo *VAR_4) {
  SQueryRuntimeEnv *VAR_5 = &VAR_0->runtimeEnv;

  FUNC_1(VAR_5, &VAR_1[VAR_3]);
  FUNC_0(VAR_5);

  FUNC_4(VAR_0->pSidSet, VAR_5, VAR_0->pMeterSidExtInfo[VAR_2]);


  if (VAR_0->runtimeEnv.pTSBuf != ((void*)0)) {
    if (VAR_4->cur.vnodeIndex == -1) {
      VAR_4->tag = VAR_5->pCtx[0].tag.i64Key;

      FUNC_2(VAR_0->runtimeEnv.pTSBuf, 0, VAR_4->tag);
    } else {
      FUNC_3(VAR_0->runtimeEnv.pTSBuf, &VAR_4->cur);
    }
  }
}

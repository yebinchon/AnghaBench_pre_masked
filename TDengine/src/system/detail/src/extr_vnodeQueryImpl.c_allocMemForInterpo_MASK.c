
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int tFilePage ;
typedef size_t int32_t ;
struct TYPE_14__ {int pointsPerFileBlock; } ;
struct TYPE_10__ {int * pInterpoBuf; } ;
struct TYPE_13__ {TYPE_1__ runtimeEnv; } ;
struct TYPE_12__ {scalar_t__ interpoType; scalar_t__ nAggTimeInterval; int numOfOutputCols; TYPE_2__* pSelectExpr; } ;
struct TYPE_11__ {int resBytes; } ;
typedef TYPE_3__ SQuery ;
typedef TYPE_4__ SMeterQuerySupportObj ;
typedef TYPE_5__ SMeterObj ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int * FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(SMeterQuerySupportObj *VAR_2, SQuery *VAR_3, SMeterObj *VAR_4) {
  if (VAR_3->interpoType != VAR_1) {
    FUNC_0(VAR_3->nAggTimeInterval > 0 || (VAR_3->nAggTimeInterval == 0 && FUNC_2(VAR_3)));

    if (VAR_3->nAggTimeInterval > 0) {
      VAR_2->runtimeEnv.pInterpoBuf = FUNC_3(VAR_0 * VAR_3->numOfOutputCols);

      for (int32_t VAR_5 = 0; VAR_5 < VAR_3->numOfOutputCols; ++VAR_5) {
        VAR_2->runtimeEnv.pInterpoBuf[VAR_5] =
            FUNC_1(1, sizeof(tFilePage) + VAR_3->pSelectExpr[VAR_5].resBytes * VAR_4->pointsPerFileBlock);
      }
    }
  }
}

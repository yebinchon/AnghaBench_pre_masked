
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_16__ {int queryRangeSet; scalar_t__ lastResRows; } ;
struct TYPE_13__ {TYPE_2__* pQuery; } ;
struct TYPE_15__ {int rawEKey; int rawSKey; TYPE_1__ runtimeEnv; } ;
struct TYPE_14__ {scalar_t__ lastKey; scalar_t__ skey; scalar_t__ ekey; } ;
typedef scalar_t__ TSKEY ;
typedef TYPE_1__ SQueryRuntimeEnv ;
typedef TYPE_2__ SQuery ;
typedef TYPE_3__ SMeterQuerySupportObj ;
typedef TYPE_4__ SMeterQueryInfo ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,scalar_t__,int ,int ) ;
 int FUNC_3 (TYPE_1__*,TYPE_4__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_4__*,scalar_t__) ;

void FUNC_5(SMeterQueryInfo *VAR_0, SMeterQuerySupportObj *VAR_1, TSKEY VAR_2) {
  SQueryRuntimeEnv *VAR_3 = &VAR_1->runtimeEnv;
  SQuery * VAR_4 = VAR_3->pQuery;

  if (VAR_0->queryRangeSet) {
    FUNC_1((FUNC_0(VAR_4) && VAR_4->lastKey >= VAR_4->skey) ||
           (!FUNC_0(VAR_4) && VAR_4->lastKey <= VAR_4->skey));

    if ((VAR_4->ekey < VAR_2 && FUNC_0(VAR_4)) || (VAR_4->ekey > VAR_2 && !FUNC_0(VAR_4))) {




      FUNC_2(VAR_4, VAR_2, VAR_1->rawSKey, VAR_1->rawEKey);
      FUNC_3(VAR_3, VAR_0);


      if (VAR_0->lastResRows > 0) {
        FUNC_4(VAR_1, VAR_0, VAR_0->lastResRows);
      }
    } else {

    }
  } else {
    VAR_4->skey = VAR_2;
    FUNC_1(VAR_0->lastResRows == 0);

    if ((FUNC_0(VAR_4) && (VAR_4->ekey < VAR_4->skey)) ||
        (!FUNC_0(VAR_4) && (VAR_4->skey < VAR_4->ekey))) {

      return;
    }

    FUNC_2(VAR_4, VAR_4->skey, VAR_1->rawSKey, VAR_1->rawEKey);
    FUNC_3(VAR_3, VAR_0);
    VAR_0->queryRangeSet = 1;
  }
}

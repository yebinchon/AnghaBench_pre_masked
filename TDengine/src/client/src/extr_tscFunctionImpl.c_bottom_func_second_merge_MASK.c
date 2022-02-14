
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_22__ {int currentStage; int tagInfo; int outputType; TYPE_1__* param; } ;
struct TYPE_21__ {int hasResult; } ;
struct TYPE_20__ {size_t num; TYPE_3__** res; } ;
struct TYPE_18__ {int i64Key; } ;
struct TYPE_19__ {int pTags; int timestamp; TYPE_2__ v; } ;
struct TYPE_17__ {int i64Key; } ;
typedef TYPE_4__ STopBotInfo ;
typedef TYPE_5__ SResultInfo ;
typedef TYPE_6__ SQLFunctionCtx ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_6__*) ;
 TYPE_5__* FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (TYPE_6__*,size_t,size_t) ;
 int FUNC_3 (TYPE_4__*,TYPE_6__*) ;
 int FUNC_4 (TYPE_4__*,int ,int *,int ,int ,int *,int ,int ) ;
 TYPE_4__* FUNC_5 (TYPE_6__*) ;

__attribute__((used)) static void FUNC_6(SQLFunctionCtx *VAR_1) {
  STopBotInfo *VAR_2 = (STopBotInfo *)FUNC_0(VAR_1);


  FUNC_3(VAR_2, VAR_1);

  STopBotInfo *VAR_3 = FUNC_5(VAR_1);


  for (int32_t VAR_4 = 0; VAR_4 < VAR_2->num; ++VAR_4) {
    FUNC_4(VAR_3, VAR_1->param[0].i64Key, &VAR_2->res[VAR_4]->v.i64Key, VAR_2->res[VAR_4]->timestamp,
                           VAR_1->outputType, &VAR_1->tagInfo, VAR_2->res[VAR_4]->pTags, VAR_1->currentStage);
  }

  FUNC_2(VAR_1, VAR_2->num, VAR_3->num);

  if (VAR_3->num > 0) {
    SResultInfo *VAR_5 = FUNC_1(VAR_1);
    VAR_5->hasResult = VAR_0;
  }
}

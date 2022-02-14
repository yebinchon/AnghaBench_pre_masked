
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_21__ {scalar_t__ outputType; int size; int currentStage; int tagInfo; int inputType; TYPE_1__* param; } ;
struct TYPE_20__ {scalar_t__ superTableQ; } ;
struct TYPE_19__ {scalar_t__ num; TYPE_3__** res; } ;
struct TYPE_17__ {int i64Key; } ;
struct TYPE_18__ {int pTags; int timestamp; TYPE_2__ v; } ;
struct TYPE_16__ {int i64Key; } ;
typedef TYPE_4__ STopBotInfo ;
typedef TYPE_5__ SResultInfo ;
typedef TYPE_6__ SQLFunctionCtx ;


 char* FUNC_0 (TYPE_6__*) ;
 TYPE_5__* FUNC_1 (TYPE_6__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_4__*,TYPE_6__*) ;
 int FUNC_4 (TYPE_4__*,int ,int *,int ,int ,int *,int ,int ) ;
 TYPE_4__* FUNC_5 (TYPE_6__*) ;

__attribute__((used)) static void FUNC_6(SQLFunctionCtx *VAR_1) {
  char *VAR_2 = FUNC_0(VAR_1);

  STopBotInfo *VAR_3 = (STopBotInfo *)VAR_2;
  if (VAR_3->num <= 0) {
    return;
  }


  FUNC_3(VAR_3, VAR_1);

  SResultInfo *VAR_4 = FUNC_1(VAR_1);
  FUNC_2(VAR_4->superTableQ && VAR_1->outputType == VAR_0 && VAR_1->size == 1);

  STopBotInfo *VAR_5 = FUNC_5(VAR_1);

  for (int32_t VAR_6 = 0; VAR_6 < VAR_3->num; ++VAR_6) {
    FUNC_4(VAR_5, VAR_1->param[0].i64Key, &VAR_3->res[VAR_6]->v.i64Key, VAR_3->res[VAR_6]->timestamp,
                           VAR_1->inputType, &VAR_1->tagInfo, VAR_3->res[VAR_6]->pTags, VAR_1->currentStage);
  }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_16__ {scalar_t__ size; scalar_t__ hasNull; int tagInfo; int inputType; int * ptsList; TYPE_1__* param; } ;
struct TYPE_15__ {int hasResult; } ;
struct TYPE_14__ {scalar_t__ num; } ;
struct TYPE_13__ {int i64Key; } ;
typedef TYPE_2__ STopBotInfo ;
typedef TYPE_3__ SResultInfo ;
typedef TYPE_4__ SQLFunctionCtx ;


 int VAR_0 ;
 char* FUNC_0 (TYPE_4__*,scalar_t__) ;
 TYPE_3__* FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,scalar_t__,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*,int ,char*,int ,int ,int *,int *,int ) ;
 TYPE_2__* FUNC_5 (TYPE_4__*) ;
 scalar_t__ FUNC_6 (char*,int ) ;

__attribute__((used)) static void FUNC_7(SQLFunctionCtx *VAR_1) {
  int32_t VAR_2 = 0;

  STopBotInfo *VAR_3 = FUNC_5(VAR_1);
  FUNC_3(VAR_3->num >= 0);

  for (int32_t VAR_4 = 0; VAR_4 < VAR_1->size; ++VAR_4) {
    char *VAR_5 = FUNC_0(VAR_1, VAR_4);
    if (VAR_1->hasNull && FUNC_6(VAR_5, VAR_1->inputType)) {
      continue;
    }

    VAR_2++;
    FUNC_4(VAR_3, VAR_1->param[0].i64Key, VAR_5, VAR_1->ptsList[VAR_4], VAR_1->inputType, &VAR_1->tagInfo, ((void*)0), 0);
  }

  if (!VAR_1->hasNull) {
    FUNC_3(VAR_1->size == VAR_2);
  }


  FUNC_2(VAR_1, VAR_2, 1);

  if (VAR_2 > 0) {
    SResultInfo *VAR_6 = FUNC_1(VAR_1);
    VAR_6->hasResult = VAR_0;
  }
}

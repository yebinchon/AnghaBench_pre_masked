
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_12__ {int tagInfo; int inputType; int * ptsList; TYPE_1__* param; scalar_t__ hasNull; } ;
struct TYPE_11__ {int hasResult; } ;
struct TYPE_10__ {int i64Key; } ;
typedef int STopBotInfo ;
typedef TYPE_2__ SResultInfo ;
typedef TYPE_3__ SQLFunctionCtx ;


 int VAR_0 ;
 char* FUNC_0 (TYPE_3__*,size_t) ;
 TYPE_2__* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int,int) ;
 int FUNC_3 (int *,int ,char*,int ,int ,int *,int *,int ) ;
 int * FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (char*,int ) ;

__attribute__((used)) static void FUNC_6(SQLFunctionCtx *VAR_1, int32_t VAR_2) {
  char *VAR_3 = FUNC_0(VAR_1, VAR_2);
  if (VAR_1->hasNull && FUNC_5(VAR_3, VAR_1->inputType)) {
    return;
  }

  STopBotInfo *VAR_4 = FUNC_4(VAR_1);
  FUNC_2(VAR_1, 1, 1);
  FUNC_3(VAR_4, VAR_1->param[0].i64Key, VAR_3, VAR_1->ptsList[VAR_2], VAR_1->inputType, &VAR_1->tagInfo,
                         ((void*)0), 0);

  SResultInfo *VAR_5 = FUNC_1(VAR_1);
  VAR_5->hasResult = VAR_0;
}

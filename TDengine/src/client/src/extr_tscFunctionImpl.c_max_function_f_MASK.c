
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_10__ {char* aOutputBuf; int inputBytes; int inputType; scalar_t__ hasNull; } ;
struct TYPE_9__ {char hasResult; } ;
typedef TYPE_1__ SResultInfo ;
typedef TYPE_2__ SQLFunctionCtx ;


 char VAR_0 ;
 char* FUNC_0 (TYPE_2__*,int ) ;
 TYPE_1__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int,int) ;
 scalar_t__ FUNC_3 (char*,int ) ;
 int FUNC_4 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static void FUNC_5(SQLFunctionCtx *VAR_1, int32_t VAR_2) {
  char *VAR_3 = FUNC_0(VAR_1, VAR_2);
  if (VAR_1->hasNull && FUNC_3(VAR_3, VAR_1->inputType)) {
    return;
  }

  FUNC_2(VAR_1, 1, 1);
  FUNC_4(VAR_1, VAR_2, 0);

  SResultInfo *VAR_4 = FUNC_1(VAR_1);
  if (VAR_4->hasResult == VAR_0) {
    char *VAR_5 = VAR_1->aOutputBuf + VAR_1->inputBytes;
    *VAR_5 = VAR_0;
  }
}

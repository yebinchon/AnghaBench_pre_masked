
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int inputType; int inputBytes; int aOutputBuf; int size; } ;
typedef TYPE_1__ SQLFunctionCtx ;


 char* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (int ,char*,int ,int ) ;

__attribute__((used)) static void FUNC_3(SQLFunctionCtx *VAR_0) {
  FUNC_1(VAR_0, VAR_0->size, 1);

  char *VAR_1 = FUNC_0(VAR_0);
  FUNC_2(VAR_0->aOutputBuf, VAR_1, VAR_0->inputBytes, VAR_0->inputType);
}

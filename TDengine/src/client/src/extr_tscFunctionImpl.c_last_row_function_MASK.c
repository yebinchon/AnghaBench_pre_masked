
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {void* hasResult; int ts; } ;
struct TYPE_13__ {int size; TYPE_1__* param; scalar_t__ inputBytes; scalar_t__ aOutputBuf; int inputType; } ;
struct TYPE_12__ {scalar_t__ superTableQ; scalar_t__ interResultBuf; } ;
struct TYPE_11__ {int i64Key; } ;
typedef TYPE_2__ SResultInfo ;
typedef TYPE_3__ SQLFunctionCtx ;
typedef TYPE_4__ SLastrowInfo ;


 void* VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 char* FUNC_1 (TYPE_3__*) ;
 TYPE_2__* FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (scalar_t__,char*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_6(SQLFunctionCtx *VAR_1) {
  FUNC_4(VAR_1->size == 1);

  char *VAR_2 = FUNC_1(VAR_1);
  FUNC_5(VAR_1->aOutputBuf, VAR_2, VAR_1->inputBytes, VAR_1->inputType);

  SResultInfo *VAR_3 = FUNC_2(VAR_1);

  SLastrowInfo *VAR_4 = (SLastrowInfo *)VAR_3->interResultBuf;
  VAR_4->ts = VAR_1->param[0].i64Key;
  VAR_4->hasResult = VAR_0;


  if (VAR_3->superTableQ) {
    SLastrowInfo *VAR_5 = (SLastrowInfo *)(VAR_1->aOutputBuf + VAR_1->inputBytes);
    VAR_5->ts = VAR_1->param[0].i64Key;
    VAR_5->hasResult = VAR_0;

    FUNC_0(VAR_1, 0);
  }

  FUNC_3(VAR_1, VAR_1->size, 1);
}

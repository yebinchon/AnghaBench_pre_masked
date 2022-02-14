
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ hasResult; scalar_t__ ts; } ;
struct TYPE_10__ {int size; int inputBytes; int aOutputBuf; } ;
struct TYPE_9__ {scalar_t__ superTableQ; } ;
typedef TYPE_1__ SResultInfo ;
typedef TYPE_2__ SQLFunctionCtx ;
typedef TYPE_3__ SFirstLastInfo ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 char* FUNC_1 (TYPE_2__*) ;
 TYPE_1__* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,char*,int) ;

__attribute__((used)) static void FUNC_5(SQLFunctionCtx *VAR_1) {
  char *VAR_2 = FUNC_1(VAR_1);

  SResultInfo *VAR_3 = FUNC_2(VAR_1);
  FUNC_3(VAR_1->size == 1 && VAR_3->superTableQ);

  SFirstLastInfo *VAR_4 = (SFirstLastInfo *)(VAR_2 + VAR_1->inputBytes);
  if (VAR_4->hasResult != VAR_0) {
    return;
  }

  SFirstLastInfo *VAR_5 = (SFirstLastInfo *)(VAR_1->aOutputBuf + VAR_1->inputBytes);
  if (VAR_5->hasResult != VAR_0 || VAR_4->ts < VAR_5->ts) {
    FUNC_4(VAR_1->aOutputBuf, VAR_2, VAR_1->inputBytes + sizeof(SFirstLastInfo));
    FUNC_0(VAR_1, 0);
  }
}

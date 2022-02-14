
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_11__ {int num; int sum; } ;
struct TYPE_10__ {int aOutputBuf; int inputType; scalar_t__ hasNull; } ;
struct TYPE_9__ {scalar_t__ interResultBuf; scalar_t__ superTableQ; int hasResult; } ;
typedef TYPE_1__ SResultInfo ;
typedef TYPE_2__ SQLFunctionCtx ;
typedef TYPE_3__ SAvgInfo ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (void*) ;
 void* FUNC_2 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (void*) ;
 scalar_t__ FUNC_5 (void*) ;
 scalar_t__ FUNC_6 (void*) ;
 TYPE_1__* FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_9 (void*,int ) ;
 int FUNC_10 (int ,scalar_t__,int) ;

__attribute__((used)) static void FUNC_11(SQLFunctionCtx *VAR_7, int32_t VAR_8) {
  void *VAR_9 = FUNC_2(VAR_7, VAR_8);
  if (VAR_7->hasNull && FUNC_9(VAR_9, VAR_7->inputType)) {
    return;
  }

  FUNC_8(VAR_7, 1, 1);


  SResultInfo *VAR_10 = FUNC_7(VAR_7);

  SAvgInfo *VAR_11 = (SAvgInfo *)VAR_10->interResultBuf;

  if (VAR_7->inputType == VAR_6) {
    VAR_11->sum += FUNC_6(VAR_9);
  } else if (VAR_7->inputType == VAR_5) {
    VAR_11->sum += FUNC_3(VAR_9);
  } else if (VAR_7->inputType == VAR_4) {
    VAR_11->sum += FUNC_4(VAR_9);
  } else if (VAR_7->inputType == VAR_1) {
    VAR_11->sum += FUNC_5(VAR_9);
  } else if (VAR_7->inputType == VAR_2) {
    VAR_11->sum += FUNC_0(VAR_9);
  } else if (VAR_7->inputType == VAR_3) {
    VAR_11->sum += FUNC_1(VAR_9);
  }


  VAR_11->num += 1;


  VAR_10->hasResult = VAR_0;


  if (VAR_10->superTableQ) {
    FUNC_10(VAR_7->aOutputBuf, VAR_10->interResultBuf, sizeof(SAvgInfo));
  }
}

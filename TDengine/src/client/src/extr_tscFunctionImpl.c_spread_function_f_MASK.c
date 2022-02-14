
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_12__ {int aOutputBuf; int inputType; scalar_t__ hasNull; } ;
struct TYPE_11__ {TYPE_1__* interResultBuf; scalar_t__ superTableQ; void* hasResult; } ;
struct TYPE_10__ {double max; double min; void* hasResult; } ;
typedef TYPE_1__ SSpreadInfo ;
typedef TYPE_2__ SResultInfo ;
typedef TYPE_3__ SQLFunctionCtx ;


 void* VAR_0 ;
 double FUNC_0 (void*) ;
 double FUNC_1 (void*) ;
 void* FUNC_2 (TYPE_3__*,int ) ;
 double FUNC_3 (void*) ;
 double FUNC_4 (void*) ;
 double FUNC_5 (void*) ;
 double FUNC_6 (void*) ;
 TYPE_2__* FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_9 (void*,int ) ;
 int FUNC_10 (int ,TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_11(SQLFunctionCtx *VAR_8, int32_t VAR_9) {
  void *VAR_10 = FUNC_2(VAR_8, VAR_9);
  if (VAR_8->hasNull && FUNC_9(VAR_10, VAR_8->inputType)) {
    return;
  }

  FUNC_8(VAR_8, 1, 1);

  SResultInfo *VAR_11 = FUNC_7(VAR_8);
  SSpreadInfo *VAR_12 = VAR_11->interResultBuf;

  double VAR_13 = 0.0;
  if (VAR_8->inputType == VAR_7) {
    VAR_13 = FUNC_6(VAR_10);
  } else if (VAR_8->inputType == VAR_5) {
    VAR_13 = FUNC_3(VAR_10);
  } else if (VAR_8->inputType == VAR_4) {
    VAR_13 = FUNC_4(VAR_10);
  } else if (VAR_8->inputType == VAR_1 || VAR_8->inputType == VAR_6) {
    VAR_13 = FUNC_5(VAR_10);
  } else if (VAR_8->inputType == VAR_2) {
    VAR_13 = FUNC_0(VAR_10);
  } else if (VAR_8->inputType == VAR_3) {
    VAR_13 = FUNC_1(VAR_10);
  }


  if (VAR_13 > VAR_12->max) {
    VAR_12->max = VAR_13;
  }

  if (VAR_13 < VAR_12->min) {
    VAR_12->min = VAR_13;
  }

  VAR_11->hasResult = VAR_0;
  VAR_12->hasResult = VAR_0;

  if (VAR_11->superTableQ) {
    FUNC_10(VAR_8->aOutputBuf, VAR_11->interResultBuf, sizeof(SSpreadInfo));
  }
}

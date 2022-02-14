
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef double int64_t ;
typedef int int32_t ;
struct TYPE_8__ {int hasResult; } ;
struct TYPE_7__ {double* aOutputBuf; int inputType; scalar_t__ hasNull; } ;
typedef TYPE_1__ SQLFunctionCtx ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (void*) ;
 void* FUNC_2 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (void*) ;
 scalar_t__ FUNC_5 (void*) ;
 scalar_t__ FUNC_6 (void*) ;
 TYPE_4__* FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_9 (void*,int ) ;

__attribute__((used)) static void FUNC_10(SQLFunctionCtx *VAR_7, int32_t VAR_8) {
  void *VAR_9 = FUNC_2(VAR_7, VAR_8);
  if (VAR_7->hasNull && FUNC_9(VAR_9, VAR_7->inputType)) {
    return;
  }

  FUNC_8(VAR_7, 1, 1);
  int64_t *VAR_10 = VAR_7->aOutputBuf;

  if (VAR_7->inputType == VAR_6) {
    *VAR_10 += FUNC_6(VAR_9);
  } else if (VAR_7->inputType == VAR_5) {
    *VAR_10 += FUNC_3(VAR_9);
  } else if (VAR_7->inputType == VAR_4) {
    *VAR_10 += FUNC_4(VAR_9);
  } else if (VAR_7->inputType == VAR_1) {
    *VAR_10 += FUNC_5(VAR_9);
  } else if (VAR_7->inputType == VAR_2) {
    double *VAR_11 = VAR_7->aOutputBuf;
    *VAR_11 += FUNC_0(VAR_9);
  } else if (VAR_7->inputType == VAR_3) {
    double *VAR_12 = VAR_7->aOutputBuf;
    *VAR_12 += FUNC_1(VAR_9);
  }

  FUNC_7(VAR_7)->hasResult = VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_10__ {scalar_t__ order; int inputBytes; int aOutputBuf; int inputType; scalar_t__ hasNull; } ;
struct TYPE_9__ {int complete; int hasResult; } ;
typedef TYPE_1__ SResultInfo ;
typedef TYPE_2__ SQLFunctionCtx ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 void* FUNC_1 (TYPE_2__*,int ) ;
 TYPE_1__* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_4 (void*,int ) ;
 int FUNC_5 (int ,void*,int ) ;

__attribute__((used)) static void FUNC_6(SQLFunctionCtx *VAR_2, int32_t VAR_3) {
  if (VAR_2->order == VAR_1) {
    return;
  }

  void *VAR_4 = FUNC_1(VAR_2, VAR_3);
  if (VAR_2->hasNull && FUNC_4(VAR_4, VAR_2->inputType)) {
    return;
  }

  FUNC_3(VAR_2, 1, 1);
  FUNC_5(VAR_2->aOutputBuf, VAR_4, VAR_2->inputBytes);
  FUNC_0(VAR_2, 0);

  SResultInfo *VAR_5 = FUNC_2(VAR_2);
  VAR_5->hasResult = VAR_0;
  VAR_5->complete = 1;
}

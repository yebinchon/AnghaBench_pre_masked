
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_9__ {int inputBytes; void** aOutputBuf; } ;
struct TYPE_8__ {scalar_t__ superTableQ; void* hasResult; } ;
typedef TYPE_1__ SResultInfo ;
typedef TYPE_2__ SQLFunctionCtx ;


 void* VAR_0 ;
 TYPE_1__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,scalar_t__,int) ;
 int FUNC_2 (TYPE_2__*,void**,int,scalar_t__*) ;

__attribute__((used)) static void FUNC_3(SQLFunctionCtx *VAR_1) {
  int32_t VAR_2 = 0;
  FUNC_2(VAR_1, VAR_1->aOutputBuf, 1, &VAR_2);

  FUNC_1(VAR_1, VAR_2, 1);

  if (VAR_2 > 0) {
    SResultInfo *VAR_3 = FUNC_0(VAR_1);
    VAR_3->hasResult = VAR_0;


    if (VAR_3->superTableQ) {
      *(VAR_1->aOutputBuf + VAR_1->inputBytes) = VAR_0;
    }
  }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_4__ {scalar_t__ size; scalar_t__ inputBytes; scalar_t__ outputBytes; scalar_t__ aOutputBuf; int outputType; int tag; int order; } ;
typedef TYPE_1__ SQLFunctionCtx ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_4(SQLFunctionCtx *VAR_0) {
  FUNC_1(VAR_0, VAR_0->size);

  FUNC_2(VAR_0->inputBytes == VAR_0->outputBytes);
  int32_t VAR_1 = FUNC_0(VAR_0->order);

  for (int32_t VAR_2 = 0; VAR_2 < VAR_0->size; ++VAR_2) {
    FUNC_3(&VAR_0->tag, VAR_0->aOutputBuf, VAR_0->outputType);
    VAR_0->aOutputBuf += VAR_0->outputBytes * VAR_1;
  }
}

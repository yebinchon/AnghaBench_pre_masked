
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
typedef size_t int32_t ;
struct TYPE_5__ {size_t size; scalar_t__ aOutputBuf; } ;
typedef TYPE_1__ SQLFunctionCtx ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,size_t,int) ;

__attribute__((used)) static void FUNC_2(SQLFunctionCtx *VAR_0) {
  int64_t *VAR_1 = (int64_t *)FUNC_0(VAR_0);
  for (int32_t VAR_2 = 0; VAR_2 < VAR_0->size; ++VAR_2) {
    *((int64_t *)VAR_0->aOutputBuf) += VAR_1[VAR_2];
  }

  FUNC_1(VAR_0, VAR_0->size, 1);
}

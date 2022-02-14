
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int64_t ;
typedef scalar_t__ int32_t ;
struct TYPE_10__ {scalar_t__ num; scalar_t__ sum; } ;
struct TYPE_9__ {double* aOutputBuf; scalar_t__ size; int inputBytes; } ;
struct TYPE_8__ {scalar_t__ interResultBuf; } ;
typedef TYPE_1__ SResultInfo ;
typedef TYPE_2__ SQLFunctionCtx ;
typedef TYPE_3__ SAvgInfo ;


 char* FUNC_0 (TYPE_2__*) ;
 TYPE_1__* FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(SQLFunctionCtx *VAR_0) {
  SResultInfo *VAR_1 = FUNC_1(VAR_0);

  double *VAR_2 = VAR_0->aOutputBuf;
  char * VAR_3 = FUNC_0(VAR_0);

  for (int32_t VAR_4 = 0; VAR_4 < VAR_0->size; ++VAR_4, VAR_3 += VAR_0->inputBytes) {
    SAvgInfo *VAR_5 = (SAvgInfo *)VAR_3;
    if (VAR_5->num == 0) {
      continue;
    }

    *VAR_2 += VAR_5->sum;


    *(int64_t *)VAR_1->interResultBuf += VAR_5->num;
  }
}

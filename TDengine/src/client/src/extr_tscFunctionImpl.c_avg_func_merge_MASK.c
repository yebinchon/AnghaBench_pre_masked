
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_10__ {scalar_t__ num; scalar_t__ sum; } ;
struct TYPE_9__ {scalar_t__ size; int aOutputBuf; int inputBytes; } ;
struct TYPE_8__ {scalar_t__ interResultBuf; int hasResult; int superTableQ; } ;
typedef TYPE_1__ SResultInfo ;
typedef TYPE_2__ SQLFunctionCtx ;
typedef TYPE_3__ SAvgInfo ;


 int VAR_0 ;
 char* FUNC_0 (TYPE_2__*) ;
 TYPE_1__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__,int) ;

__attribute__((used)) static void FUNC_4(SQLFunctionCtx *VAR_1) {
  SResultInfo *VAR_2 = FUNC_1(VAR_1);
  FUNC_2(VAR_2->superTableQ);

  SAvgInfo *VAR_3 = (SAvgInfo *)VAR_2->interResultBuf;
  char * VAR_4 = FUNC_0(VAR_1);

  for (int32_t VAR_5 = 0; VAR_5 < VAR_1->size; ++VAR_5, VAR_4 += VAR_1->inputBytes) {
    SAvgInfo *VAR_6 = (SAvgInfo *)VAR_4;
    if (VAR_6->num == 0) {
      continue;
    }

    VAR_3->sum += VAR_6->sum;
    VAR_3->num += VAR_6->num;
  }


  if (VAR_3->num > 0) {
    VAR_2->hasResult = VAR_0;
    FUNC_3(VAR_1->aOutputBuf, VAR_2->interResultBuf, sizeof(SAvgInfo));
  }
}

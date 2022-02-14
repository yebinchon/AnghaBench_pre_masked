
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_11__ {scalar_t__ size; int aOutputBuf; } ;
struct TYPE_10__ {scalar_t__ hasResult; TYPE_1__* interResultBuf; int superTableQ; } ;
struct TYPE_9__ {scalar_t__ hasResult; scalar_t__ min; scalar_t__ max; } ;
typedef TYPE_1__ SSpreadInfo ;
typedef TYPE_2__ SResultInfo ;
typedef TYPE_3__ SQLFunctionCtx ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*,scalar_t__) ;
 TYPE_2__* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_1__*,int) ;

void FUNC_4(SQLFunctionCtx *VAR_1) {
  SResultInfo *VAR_2 = FUNC_1(VAR_1);
  FUNC_2(VAR_2->superTableQ);

  SSpreadInfo *VAR_3 = VAR_2->interResultBuf;

  int32_t VAR_4 = 0;
  for (int32_t VAR_5 = 0; VAR_5 < VAR_1->size; ++VAR_5) {
    SSpreadInfo *VAR_6 = (SSpreadInfo *)FUNC_0(VAR_1, VAR_5);


    if (VAR_6->hasResult != VAR_0) {
      continue;
    }

    if (VAR_3->min > VAR_6->min) {
      VAR_3->min = VAR_6->min;
    }

    if (VAR_3->max < VAR_6->max) {
      VAR_3->max = VAR_6->max;
    }

    VAR_3->hasResult = VAR_0;
    VAR_4++;
  }

  if (VAR_4 > 0) {
    FUNC_3(VAR_1->aOutputBuf, VAR_2->interResultBuf, sizeof(SSpreadInfo));
    VAR_2->hasResult = VAR_0;
  }
}

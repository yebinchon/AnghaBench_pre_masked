
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int aOutputBuf; } ;
struct TYPE_10__ {int complete; TYPE_1__* interResultBuf; } ;
struct TYPE_9__ {scalar_t__ stage; scalar_t__ avg; scalar_t__ sum; scalar_t__ num; } ;
typedef TYPE_1__ SStddevInfo ;
typedef TYPE_2__ SResultInfo ;
typedef TYPE_3__ SQLFunctionCtx ;
typedef TYPE_1__ SAvgInfo ;


 scalar_t__ FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(SQLFunctionCtx *VAR_0) {




  SResultInfo *VAR_1 = FUNC_1(VAR_0);
  SStddevInfo *VAR_2 = VAR_1->interResultBuf;

  if (VAR_2->stage == 0) {






    VAR_2->stage++;
    FUNC_3(VAR_0);


    SAvgInfo *VAR_3 = VAR_1->interResultBuf;

    VAR_2->avg = FUNC_0(VAR_0->aOutputBuf);
    FUNC_2((FUNC_4(VAR_3->sum) && VAR_3->num == 0) || (VAR_2->num == VAR_3->num && VAR_2->avg == VAR_3->sum));
  } else {
    VAR_1->complete = 1;
  }
}

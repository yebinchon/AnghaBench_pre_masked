
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ hasResult; } ;
struct TYPE_10__ {TYPE_1__* param; } ;
struct TYPE_9__ {scalar_t__ hasResult; scalar_t__ min; scalar_t__ max; } ;
struct TYPE_8__ {scalar_t__ dKey; } ;
typedef TYPE_2__ SSpreadInfo ;
typedef TYPE_3__ SQLFunctionCtx ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 TYPE_5__* FUNC_1 (TYPE_3__*) ;

void FUNC_2(SQLFunctionCtx *VAR_1) {
  SSpreadInfo *VAR_2 = (SSpreadInfo *)FUNC_0(VAR_1);
  if (VAR_2->hasResult != VAR_0) {
    return;
  }

  if (VAR_1->param[0].dKey > VAR_2->min) {
    VAR_1->param[0].dKey = VAR_2->min;
  }

  if (VAR_1->param[3].dKey < VAR_2->max) {
    VAR_1->param[3].dKey = VAR_2->max;
  }


  FUNC_1(VAR_1)->hasResult = VAR_0;
}

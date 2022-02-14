
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int tValuePair ;
typedef int __compar_fn_t ;
struct TYPE_13__ {TYPE_1__* param; } ;
struct TYPE_12__ {scalar_t__ hasResult; scalar_t__ numOfRes; TYPE_2__* interResultBuf; } ;
struct TYPE_11__ {scalar_t__ num; int ** res; } ;
struct TYPE_10__ {scalar_t__ i64Key; } ;
typedef TYPE_2__ STopBotInfo ;
typedef TYPE_3__ SResultInfo ;
typedef TYPE_4__ SQLFunctionCtx ;


 scalar_t__ VAR_0 ;
 TYPE_3__* FUNC_0 (TYPE_4__*) ;
 int FUNC_1 () ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 int FUNC_4 (int **,scalar_t__,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (TYPE_3__*) ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_6(SQLFunctionCtx *VAR_9) {
  SResultInfo *VAR_10 = FUNC_0(VAR_9);


  STopBotInfo *VAR_11 = VAR_10->interResultBuf;
  if (VAR_11->num == 0) {
    FUNC_2(VAR_10->hasResult != VAR_0);

  }

  FUNC_0(VAR_9)->numOfRes = VAR_11->num;
  tValuePair **VAR_12 = VAR_11->res;


  if (VAR_9->param[1].i64Key == VAR_2) {
    __compar_fn_t VAR_13 = (VAR_9->param[2].i64Key == VAR_3) ? VAR_4 : VAR_7;
    FUNC_4(VAR_12, VAR_10->numOfRes, VAR_1, VAR_13);
  } else if (VAR_9->param[1].i64Key > VAR_2) {
    __compar_fn_t VAR_14 = (VAR_9->param[2].i64Key == VAR_3) ? VAR_5 : VAR_6;
    FUNC_4(VAR_12, VAR_10->numOfRes, VAR_1, VAR_14);
  }

  FUNC_1();
  FUNC_3(VAR_9, VAR_8);

  FUNC_5(VAR_10);
}

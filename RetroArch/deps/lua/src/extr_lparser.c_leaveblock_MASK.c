
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_21__ {scalar_t__ nactvar; size_t firstgoto; struct TYPE_21__* previous; int firstlabel; scalar_t__ isloop; scalar_t__ upval; } ;
struct TYPE_20__ {scalar_t__ nactvar; scalar_t__ freereg; TYPE_6__* bl; TYPE_4__* ls; } ;
struct TYPE_19__ {TYPE_3__* dyd; } ;
struct TYPE_17__ {size_t n; int * arr; } ;
struct TYPE_16__ {int n; } ;
struct TYPE_18__ {TYPE_2__ gt; TYPE_1__ label; } ;
typedef TYPE_4__ LexState ;
typedef TYPE_5__ FuncState ;
typedef TYPE_6__ BlockCnt ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*,int,scalar_t__) ;
 int FUNC_3 (TYPE_5__*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_5__*,TYPE_6__*) ;
 int FUNC_6 (TYPE_5__*,scalar_t__) ;
 int FUNC_7 (TYPE_4__*,int *) ;

__attribute__((used)) static void FUNC_8 (FuncState *VAR_0) {
  BlockCnt *VAR_1 = VAR_0->bl;
  LexState *VAR_2 = VAR_0->ls;
  if (VAR_1->previous && VAR_1->upval) {

    int VAR_3 = FUNC_1(VAR_0);
    FUNC_2(VAR_0, VAR_3, VAR_1->nactvar);
    FUNC_3(VAR_0, VAR_3);
  }
  if (VAR_1->isloop)
    FUNC_0(VAR_2);
  VAR_0->bl = VAR_1->previous;
  FUNC_6(VAR_0, VAR_1->nactvar);
  FUNC_4(VAR_1->nactvar == VAR_0->nactvar);
  VAR_0->freereg = VAR_0->nactvar;
  VAR_2->dyd->label.n = VAR_1->firstlabel;
  if (VAR_1->previous)
    FUNC_5(VAR_0, VAR_1);
  else if (VAR_1->firstgoto < VAR_2->dyd->gt.n)
    FUNC_7(VAR_2, &VAR_2->dyd->gt.arr[VAR_1->firstgoto]);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_19__ {scalar_t__ k; } ;
struct LHS_assign {TYPE_5__ v; struct LHS_assign* prev; } ;
typedef int expdesc ;
struct TYPE_20__ {scalar_t__ freereg; } ;
struct TYPE_18__ {TYPE_6__* fs; TYPE_1__* L; } ;
struct TYPE_17__ {scalar_t__ nCcalls; } ;
typedef TYPE_2__ LexState ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int,int,int *) ;
 int FUNC_1 (TYPE_2__*,int,char*) ;
 int FUNC_2 (TYPE_2__*,struct LHS_assign*,TYPE_5__*) ;
 int FUNC_3 (TYPE_2__*,char) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (int *,int ,scalar_t__) ;
 int FUNC_6 (TYPE_6__*,int *) ;
 int FUNC_7 (TYPE_6__*,TYPE_5__*,int *) ;
 int FUNC_8 (TYPE_6__*,int,scalar_t__,char*) ;
 int FUNC_9 (TYPE_2__*,TYPE_5__*) ;
 scalar_t__ FUNC_10 (TYPE_2__*,char) ;

__attribute__((used)) static void FUNC_11 (LexState *VAR_4, struct LHS_assign *VAR_5, int VAR_6) {
  expdesc VAR_7;
  FUNC_1(VAR_4, VAR_2 <= VAR_5->v.k && VAR_5->v.k <= VAR_1,
                      "syntax error");
  if (FUNC_10(VAR_4, ',')) {
    struct LHS_assign VAR_8;
    VAR_8.prev = VAR_5;
    FUNC_9(VAR_4, &VAR_8.v);
    if (VAR_8.v.k == VAR_2)
      FUNC_2(VAR_4, VAR_5, &VAR_8.v);
    FUNC_8(VAR_4->fs, VAR_6, VAR_0 - VAR_4->L->nCcalls,
                    "variables in assignment");
    FUNC_11(VAR_4, &VAR_8, VAR_6+1);
  }
  else {
    int VAR_9;
    FUNC_3(VAR_4, '=');
    VAR_9 = FUNC_4(VAR_4, &VAR_7);
    if (VAR_9 != VAR_6) {
      FUNC_0(VAR_4, VAR_6, VAR_9, &VAR_7);
      if (VAR_9 > VAR_6)
        VAR_4->fs->freereg -= VAR_9 - VAR_6;
    }
    else {
      FUNC_6(VAR_4->fs, &VAR_7);
      FUNC_7(VAR_4->fs, &VAR_5->v, &VAR_7);
      return;
    }
  }
  FUNC_5(&VAR_7, VAR_3, VAR_4->fs->freereg-1);
  FUNC_7(VAR_4->fs, &VAR_5->v, &VAR_7);
}

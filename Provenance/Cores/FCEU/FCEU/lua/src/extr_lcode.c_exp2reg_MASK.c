
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int info; } ;
struct TYPE_8__ {TYPE_1__ s; } ;
struct TYPE_9__ {scalar_t__ k; TYPE_2__ u; void* t; void* f; } ;
typedef TYPE_3__ expdesc ;
typedef int FuncState ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int,int,int) ;
 int FUNC_1 (int *,TYPE_3__*,int) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *,void**,int) ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (int *,void*) ;
 int FUNC_8 (int *,void*,int,int,int) ;

__attribute__((used)) static void FUNC_9 (FuncState *VAR_3, expdesc *VAR_4, int VAR_5) {
  FUNC_1(VAR_3, VAR_4, VAR_5);
  if (VAR_4->k == VAR_1)
    FUNC_3(VAR_3, &VAR_4->t, VAR_4->u.s.info);
  if (FUNC_2(VAR_4)) {
    int VAR_6;
    int VAR_7 = VAR_0;
    int VAR_8 = VAR_0;
    if (FUNC_7(VAR_3, VAR_4->t) || FUNC_7(VAR_3, VAR_4->f)) {
      int VAR_9 = (VAR_4->k == VAR_1) ? VAR_0 : FUNC_5(VAR_3);
      VAR_7 = FUNC_0(VAR_3, VAR_5, 0, 1);
      VAR_8 = FUNC_0(VAR_3, VAR_5, 1, 0);
      FUNC_6(VAR_3, VAR_9);
    }
    VAR_6 = FUNC_4(VAR_3);
    FUNC_8(VAR_3, VAR_4->f, VAR_6, VAR_5, VAR_7);
    FUNC_8(VAR_3, VAR_4->t, VAR_6, VAR_5, VAR_8);
  }
  VAR_4->f = VAR_4->t = VAR_0;
  VAR_4->u.s.info = VAR_5;
  VAR_4->k = VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int token; } ;
struct TYPE_13__ {TYPE_2__* fs; TYPE_3__ t; } ;
struct TYPE_11__ {scalar_t__ freereg; scalar_t__ nactvar; TYPE_1__* f; } ;
struct TYPE_10__ {scalar_t__ maxstacksize; } ;
typedef TYPE_4__ LexState ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*,char) ;

__attribute__((used)) static void FUNC_6 (LexState *VAR_0) {

  int VAR_1 = 0;
  FUNC_1(VAR_0);
  while (!VAR_1 && !FUNC_0(VAR_0->t.token)) {
    VAR_1 = FUNC_4(VAR_0);
    FUNC_5(VAR_0, ';');
    FUNC_3(VAR_0->fs->f->maxstacksize >= VAR_0->fs->freereg &&
               VAR_0->fs->freereg >= VAR_0->fs->nactvar);
    VAR_0->fs->freereg = VAR_0->fs->nactvar;
  }
  FUNC_2(VAR_0);
}

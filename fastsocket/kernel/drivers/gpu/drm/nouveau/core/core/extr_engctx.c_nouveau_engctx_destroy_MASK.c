
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nouveau_object {int dummy; } ;
struct nouveau_engine {int lock; } ;
struct TYPE_6__ {int base; scalar_t__ size; } ;
struct nouveau_engctx {TYPE_3__ base; int head; int vma; } ;
struct nouveau_client {TYPE_1__* vm; } ;
struct TYPE_5__ {struct nouveau_object* engine; } ;
struct TYPE_4__ {int * engref; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct nouveau_client* FUNC_2 (struct nouveau_engctx*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 size_t FUNC_6 (struct nouveau_object*) ;
 struct nouveau_engine* FUNC_7 (struct nouveau_object*) ;
 TYPE_2__* FUNC_8 (struct nouveau_engctx*) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;

void
FUNC_11(struct nouveau_engctx *VAR_0)
{
 struct nouveau_object *VAR_1 = FUNC_8(VAR_0)->engine;
 struct nouveau_engine *VAR_2 = FUNC_7(VAR_1);
 struct nouveau_client *VAR_3 = FUNC_2(VAR_0);
 unsigned long VAR_4;

 FUNC_4(&VAR_0->vma);
 FUNC_9(&VAR_2->lock, VAR_4);
 FUNC_1(&VAR_0->head);
 FUNC_10(&VAR_2->lock, VAR_4);

 if (VAR_3->vm)
  FUNC_0(&VAR_3->vm->engref[FUNC_6(VAR_1)]);

 if (VAR_0->base.size)
  FUNC_3(&VAR_0->base);
 else
  FUNC_5(&VAR_0->base.base);
}

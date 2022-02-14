
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_object {int engine; } ;
struct nouveau_engine {int lock; } ;
struct nouveau_engctx {int save; } ;


 struct nouveau_engctx* FUNC_0 (struct nouveau_object*) ;
 struct nouveau_engine* FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;

void
FUNC_3(struct nouveau_object *VAR_0)
{
 if (VAR_0) {
  struct nouveau_engine *VAR_1 = FUNC_1(VAR_0->engine);
  struct nouveau_engctx *VAR_2 = FUNC_0(VAR_0);
  FUNC_2(&VAR_1->lock, VAR_2->save);
 }
}

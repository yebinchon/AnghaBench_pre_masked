
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nouveau_object {int refcount; } ;
struct TYPE_2__ {int vm; } ;
struct nouveau_cli {TYPE_1__ base; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int *,struct nouveau_object**) ;
 int FUNC_3 (int *,int *,int *) ;
 struct nouveau_object* FUNC_4 (struct nouveau_cli*) ;

__attribute__((used)) static void
FUNC_5(struct nouveau_cli *VAR_0)
{
 struct nouveau_object *VAR_1 = FUNC_4(VAR_0);
 FUNC_3(((void*)0), &VAR_0->base.vm, ((void*)0));
 FUNC_1(&VAR_0->base, 0);
 FUNC_0(&VAR_1->refcount, 1);
 FUNC_2(((void*)0), &VAR_1);
}

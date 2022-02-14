
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_object {int dummy; } ;
struct nouveau_namedb {int lock; } ;
struct nouveau_handle {int node; struct nouveau_object* object; struct nouveau_namedb* namedb; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct nouveau_object**) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(struct nouveau_handle *VAR_0)
{
 struct nouveau_namedb *VAR_1 = VAR_0->namedb;
 struct nouveau_object *VAR_2 = VAR_0->object;
 FUNC_2(&VAR_1->lock);
 FUNC_0(&VAR_0->node);
 FUNC_3(&VAR_1->lock);
 FUNC_1(((void*)0), &VAR_2);
}

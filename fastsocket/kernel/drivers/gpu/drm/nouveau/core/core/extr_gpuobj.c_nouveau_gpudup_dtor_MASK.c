
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_object {int dummy; } ;
struct nouveau_gpuobj {int base; int parent; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void
FUNC_2(struct nouveau_object *VAR_0)
{
 struct nouveau_gpuobj *VAR_1 = (void *)VAR_0;
 FUNC_1(((void*)0), &VAR_1->parent);
 FUNC_0(&VAR_1->base);
}

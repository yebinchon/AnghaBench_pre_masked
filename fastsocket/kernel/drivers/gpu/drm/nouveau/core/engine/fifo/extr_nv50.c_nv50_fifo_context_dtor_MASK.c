
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv50_fifo_base {int base; int cache; int ramfc; int eng; int pgd; int vm; } ;
struct nouveau_object {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int ) ;

void
FUNC_3(struct nouveau_object *VAR_0)
{
 struct nv50_fifo_base *VAR_1 = (void *)VAR_0;
 FUNC_2(((void*)0), &VAR_1->vm, VAR_1->pgd);
 FUNC_1(((void*)0), &VAR_1->pgd);
 FUNC_1(((void*)0), &VAR_1->eng);
 FUNC_1(((void*)0), &VAR_1->ramfc);
 FUNC_1(((void*)0), &VAR_1->cache);
 FUNC_0(&VAR_1->base);
}

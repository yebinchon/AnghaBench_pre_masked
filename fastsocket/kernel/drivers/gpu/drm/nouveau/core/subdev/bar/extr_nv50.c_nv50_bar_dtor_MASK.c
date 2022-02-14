
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nv50_bar_priv {int base; int mem; int pad; int pgd; TYPE_2__* bar3_vm; int bar3; TYPE_2__* bar1_vm; int bar1; } ;
struct nouveau_object {int dummy; } ;
struct TYPE_4__ {TYPE_1__* pgt; } ;
struct TYPE_3__ {int * obj; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,TYPE_2__**,int ) ;

__attribute__((used)) static void
FUNC_3(struct nouveau_object *VAR_0)
{
 struct nv50_bar_priv *VAR_1 = (void *)VAR_0;
 FUNC_1(((void*)0), &VAR_1->bar1);
 FUNC_2(((void*)0), &VAR_1->bar1_vm, VAR_1->pgd);
 FUNC_1(((void*)0), &VAR_1->bar3);
 if (VAR_1->bar3_vm) {
  FUNC_1(((void*)0), &VAR_1->bar3_vm->pgt[0].obj[0]);
  FUNC_2(((void*)0), &VAR_1->bar3_vm, VAR_1->pgd);
 }
 FUNC_1(((void*)0), &VAR_1->pgd);
 FUNC_1(((void*)0), &VAR_1->pad);
 FUNC_1(((void*)0), &VAR_1->mem);
 FUNC_0(&VAR_1->base);
}

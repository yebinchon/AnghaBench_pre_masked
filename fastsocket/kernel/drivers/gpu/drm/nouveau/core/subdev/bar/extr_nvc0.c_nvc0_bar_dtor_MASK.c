
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvc0_bar_priv {int base; TYPE_2__* bar; } ;
struct nouveau_object {int dummy; } ;
struct TYPE_6__ {TYPE_1__* pgt; } ;
struct TYPE_5__ {int mem; int pgd; TYPE_3__* vm; } ;
struct TYPE_4__ {int * obj; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,TYPE_3__**,int ) ;

__attribute__((used)) static void
FUNC_3(struct nouveau_object *VAR_0)
{
 struct nvc0_bar_priv *VAR_1 = (void *)VAR_0;

 FUNC_2(((void*)0), &VAR_1->bar[1].vm, VAR_1->bar[1].pgd);
 FUNC_1(((void*)0), &VAR_1->bar[1].pgd);
 FUNC_1(((void*)0), &VAR_1->bar[1].mem);

 if (VAR_1->bar[0].vm) {
  FUNC_1(((void*)0), &VAR_1->bar[0].vm->pgt[0].obj[0]);
  FUNC_2(((void*)0), &VAR_1->bar[0].vm, VAR_1->bar[0].pgd);
 }
 FUNC_1(((void*)0), &VAR_1->bar[0].pgd);
 FUNC_1(((void*)0), &VAR_1->bar[0].mem);

 FUNC_0(&VAR_1->base);
}

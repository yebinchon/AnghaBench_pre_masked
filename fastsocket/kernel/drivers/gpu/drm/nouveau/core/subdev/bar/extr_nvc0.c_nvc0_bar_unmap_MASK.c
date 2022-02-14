
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvc0_bar_priv {TYPE_2__* bar; } ;
struct nouveau_vma {scalar_t__ vm; } ;
struct nouveau_bar {int dummy; } ;
struct TYPE_4__ {scalar_t__ vm; TYPE_1__* pgd; } ;
struct TYPE_3__ {int addr; } ;


 int FUNC_0 (struct nouveau_vma*) ;
 int FUNC_1 (struct nouveau_vma*) ;
 int FUNC_2 (struct nouveau_bar*) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct nouveau_bar *VAR_0, struct nouveau_vma *VAR_1)
{
 struct nvc0_bar_priv *VAR_2 = (void *)VAR_0;
 int VAR_3 = !(VAR_1->vm == VAR_2->bar[0].vm);

 FUNC_1(VAR_1);
 FUNC_3(FUNC_2(VAR_0), VAR_2->bar[VAR_3].pgd->addr, 5);
 FUNC_0(VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nvc0_bar_priv {TYPE_2__* bar; } ;
struct nouveau_vma {int dummy; } ;
struct nouveau_mem {int size; } ;
struct nouveau_bar {int dummy; } ;
struct TYPE_4__ {TYPE_1__* pgd; int vm; } ;
struct TYPE_3__ {int addr; } ;


 int FUNC_0 (int ,int,int,int ,struct nouveau_vma*) ;
 int FUNC_1 (struct nouveau_vma*,struct nouveau_mem*) ;
 int FUNC_2 (struct nouveau_bar*) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_4(struct nouveau_bar *VAR_0, struct nouveau_mem *VAR_1,
       u32 VAR_2, struct nouveau_vma *VAR_3)
{
 struct nvc0_bar_priv *VAR_4 = (void *)VAR_0;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_4->bar[0].vm, VAR_1->size << 12, 12, VAR_2, VAR_3);
 if (VAR_5)
  return VAR_5;

 FUNC_1(VAR_3, VAR_1);
 FUNC_3(FUNC_2(VAR_0), VAR_4->bar[0].pgd->addr, 5);
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nv50_bar_priv {int bar3_vm; } ;
struct nouveau_vma {int dummy; } ;
struct nouveau_mem {int size; } ;
struct nouveau_bar {int dummy; } ;


 int FUNC_0 (int ,int,int,int ,struct nouveau_vma*) ;
 int FUNC_1 (struct nouveau_vma*,struct nouveau_mem*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct nouveau_bar*) ;

__attribute__((used)) static int
FUNC_4(struct nouveau_bar *VAR_0, struct nouveau_mem *VAR_1,
       u32 VAR_2, struct nouveau_vma *VAR_3)
{
 struct nv50_bar_priv *VAR_4 = (void *)VAR_0;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_4->bar3_vm, VAR_1->size << 12, 12, VAR_2, VAR_3);
 if (VAR_5)
  return VAR_5;

 FUNC_1(VAR_3, VAR_1);
 FUNC_2(FUNC_3(VAR_0), 6);
 return 0;
}

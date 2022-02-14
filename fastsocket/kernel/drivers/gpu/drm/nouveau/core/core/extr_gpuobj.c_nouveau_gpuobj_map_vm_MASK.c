
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nouveau_vma {int dummy; } ;
struct nouveau_vm {int dummy; } ;
struct nouveau_mem {int dummy; } ;
struct nouveau_instobj {int dummy; } ;
struct nouveau_gpuobj {int size; } ;


 int VAR_0 ;
 int FUNC_0 (struct nouveau_vm*,int ,int,int ,struct nouveau_vma*) ;
 int FUNC_1 (struct nouveau_vma*,struct nouveau_mem*) ;
 int FUNC_2 (struct nouveau_gpuobj*) ;
 scalar_t__ FUNC_3 (int ,int ) ;

int
FUNC_4(struct nouveau_gpuobj *VAR_1, struct nouveau_vm *VAR_2,
        u32 VAR_3, struct nouveau_vma *VAR_4)
{
 struct nouveau_instobj *VAR_5 = (void *)
  FUNC_3(FUNC_2(VAR_1), VAR_0);
 struct nouveau_mem **VAR_6 = (void *)(VAR_5 + 1);
 int VAR_7;

 VAR_7 = FUNC_0(VAR_2, VAR_1->size, 12, VAR_3, VAR_4);
 if (VAR_7)
  return VAR_7;

 FUNC_1(VAR_4, *VAR_6);
 return 0;
}

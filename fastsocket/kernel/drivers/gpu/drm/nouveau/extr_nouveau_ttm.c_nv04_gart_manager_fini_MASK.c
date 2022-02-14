
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_mem_type_manager {struct nouveau_vm* priv; } ;
struct nouveau_vm {int dummy; } ;


 int FUNC_0 (int *,struct nouveau_vm**,int *) ;

__attribute__((used)) static int
FUNC_1(struct ttm_mem_type_manager *VAR_0)
{
 struct nouveau_vm *VAR_1 = VAR_0->priv;
 FUNC_0(((void*)0), &VAR_1, ((void*)0));
 VAR_0->priv = ((void*)0);
 return 0;
}

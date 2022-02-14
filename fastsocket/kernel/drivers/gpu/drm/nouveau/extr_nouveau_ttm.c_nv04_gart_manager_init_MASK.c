
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_mem_type_manager {struct nouveau_vm* priv; int bdev; } ;
struct nv04_vmmgr_priv {int vm; } ;
struct nouveau_vmmgr {int dummy; } ;
struct nouveau_vm {int dummy; } ;
struct nouveau_drm {int device; } ;


 struct nouveau_drm* FUNC_0 (int ) ;
 int FUNC_1 (int ,struct nouveau_vm**,int *) ;
 struct nouveau_vmmgr* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct ttm_mem_type_manager *VAR_0, unsigned long VAR_1)
{
 struct nouveau_drm *VAR_2 = FUNC_0(VAR_0->bdev);
 struct nouveau_vmmgr *VAR_3 = FUNC_2(VAR_2->device);
 struct nv04_vmmgr_priv *VAR_4 = (void *)VAR_3;
 struct nouveau_vm *VAR_5 = ((void*)0);
 FUNC_1(VAR_4->vm, &VAR_5, ((void*)0));
 VAR_0->priv = VAR_5;
 return 0;
}

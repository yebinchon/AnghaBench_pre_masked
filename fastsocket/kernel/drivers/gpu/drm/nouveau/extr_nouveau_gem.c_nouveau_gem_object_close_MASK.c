
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nouveau_vma {scalar_t__ refcount; } ;
struct TYPE_2__ {int vm; } ;
struct nouveau_cli {TYPE_1__ base; } ;
struct nouveau_bo {int bo; } ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;


 int FUNC_0 (struct nouveau_vma*) ;
 int FUNC_1 (struct nouveau_bo*,struct nouveau_vma*) ;
 struct nouveau_vma* FUNC_2 (struct nouveau_bo*,int ) ;
 struct nouveau_cli* FUNC_3 (struct drm_file*) ;
 struct nouveau_bo* FUNC_4 (struct drm_gem_object*) ;
 int FUNC_5 (int *,int,int,int,int ) ;
 int FUNC_6 (int *) ;

void
FUNC_7(struct drm_gem_object *VAR_0, struct drm_file *VAR_1)
{
 struct nouveau_cli *VAR_2 = FUNC_3(VAR_1);
 struct nouveau_bo *VAR_3 = FUNC_4(VAR_0);
 struct nouveau_vma *VAR_4;
 int VAR_5;

 if (!VAR_2->base.vm)
  return;

 VAR_5 = FUNC_5(&VAR_3->bo, 0, 0, 0, 0);
 if (VAR_5)
  return;

 VAR_4 = FUNC_2(VAR_3, VAR_2->base.vm);
 if (VAR_4) {
  if (--VAR_4->refcount == 0) {
   FUNC_1(VAR_3, VAR_4);
   FUNC_0(VAR_4);
  }
 }
 FUNC_6(&VAR_3->bo);
}

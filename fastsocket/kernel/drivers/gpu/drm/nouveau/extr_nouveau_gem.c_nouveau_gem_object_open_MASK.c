
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nouveau_vma {int refcount; } ;
struct TYPE_2__ {int vm; } ;
struct nouveau_cli {TYPE_1__ base; } ;
struct nouveau_bo {int bo; } ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nouveau_vma*) ;
 struct nouveau_vma* FUNC_1 (int,int ) ;
 int FUNC_2 (struct nouveau_bo*,int ,struct nouveau_vma*) ;
 struct nouveau_vma* FUNC_3 (struct nouveau_bo*,int ) ;
 struct nouveau_cli* FUNC_4 (struct drm_file*) ;
 struct nouveau_bo* FUNC_5 (struct drm_gem_object*) ;
 int FUNC_6 (int *,int,int,int,int ) ;
 int FUNC_7 (int *) ;

int
FUNC_8(struct drm_gem_object *VAR_2, struct drm_file *VAR_3)
{
 struct nouveau_cli *VAR_4 = FUNC_4(VAR_3);
 struct nouveau_bo *VAR_5 = FUNC_5(VAR_2);
 struct nouveau_vma *VAR_6;
 int VAR_7;

 if (!VAR_4->base.vm)
  return 0;

 VAR_7 = FUNC_6(&VAR_5->bo, 0, 0, 0, 0);
 if (VAR_7)
  return VAR_7;

 VAR_6 = FUNC_3(VAR_5, VAR_4->base.vm);
 if (!VAR_6) {
  VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_1);
  if (!VAR_6) {
   VAR_7 = -VAR_0;
   goto out;
  }

  VAR_7 = FUNC_2(VAR_5, VAR_4->base.vm, VAR_6);
  if (VAR_7) {
   FUNC_0(VAR_6);
   goto out;
  }
 } else {
  VAR_6->refcount++;
 }

out:
 FUNC_7(&VAR_5->bo);
 return VAR_7;
}

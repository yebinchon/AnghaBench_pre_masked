
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nouveau_fb {int (* memtype_valid ) (struct nouveau_fb*,int ) ;} ;
struct TYPE_5__ {int dev_mapping; } ;
struct TYPE_6__ {TYPE_1__ bdev; } ;
struct nouveau_drm {TYPE_3__* dev; TYPE_2__ ttm; int device; } ;
struct nouveau_cli {int dummy; } ;
struct nouveau_bo {int gem; } ;
struct TYPE_8__ {int handle; int tile_flags; int tile_mode; int domain; int size; } ;
struct drm_nouveau_gem_new {TYPE_4__ info; int align; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;
struct TYPE_7__ {int dev_mapping; } ;


 int VAR_0 ;
 int FUNC_0 (struct nouveau_cli*,char*,int ) ;
 int FUNC_1 (struct drm_file*,int ,int *) ;
 int FUNC_2 (struct drm_file*,int ) ;
 int FUNC_3 (int ) ;
 struct nouveau_cli* FUNC_4 (struct drm_file*) ;
 struct nouveau_drm* FUNC_5 (struct drm_device*) ;
 struct nouveau_fb* FUNC_6 (int ) ;
 int FUNC_7 (struct drm_file*,int ,TYPE_4__*) ;
 int FUNC_8 (struct drm_device*,int ,int ,int ,int ,int ,struct nouveau_bo**) ;
 int FUNC_9 (struct nouveau_fb*,int ) ;

int
FUNC_10(struct drm_device *VAR_1, void *VAR_2,
        struct drm_file *VAR_3)
{
 struct nouveau_drm *VAR_4 = FUNC_5(VAR_1);
 struct nouveau_cli *VAR_5 = FUNC_4(VAR_3);
 struct nouveau_fb *VAR_6 = FUNC_6(VAR_4->device);
 struct drm_nouveau_gem_new *VAR_7 = VAR_2;
 struct nouveau_bo *VAR_8 = ((void*)0);
 int VAR_9 = 0;

 VAR_4->ttm.bdev.dev_mapping = VAR_4->dev->dev_mapping;

 if (!VAR_6->memtype_valid(VAR_6, VAR_7->info.tile_flags)) {
  FUNC_0(VAR_5, "bad page flags: 0x%08x\n", VAR_7->info.tile_flags);
  return -VAR_0;
 }

 VAR_9 = FUNC_8(VAR_1, VAR_7->info.size, VAR_7->align,
         VAR_7->info.domain, VAR_7->info.tile_mode,
         VAR_7->info.tile_flags, &VAR_8);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_1(VAR_3, VAR_8->gem, &VAR_7->info.handle);
 if (VAR_9 == 0) {
  VAR_9 = FUNC_7(VAR_3, VAR_8->gem, &VAR_7->info);
  if (VAR_9)
   FUNC_2(VAR_3, VAR_7->info.handle);
 }


 FUNC_3(VAR_8->gem);
 return VAR_9;
}

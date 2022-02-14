
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sg_table {int dummy; } ;
struct TYPE_3__ {int size; } ;
struct TYPE_4__ {TYPE_1__ mem; } ;
struct nouveau_bo {struct drm_gem_object* gem; TYPE_2__ bo; int valid_domains; } ;
struct drm_gem_object {struct nouveau_bo* driver_private; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 struct drm_gem_object* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 struct drm_gem_object* FUNC_1 (struct drm_device*,int ) ;
 int FUNC_2 (struct drm_device*,size_t,int ,int ,int ,int ,struct sg_table*,struct nouveau_bo**) ;
 int FUNC_3 (int *,struct nouveau_bo**) ;

struct drm_gem_object *FUNC_4(struct drm_device *VAR_3,
        size_t VAR_4,
        struct sg_table *VAR_5)
{
 struct nouveau_bo *VAR_6;
 u32 VAR_7 = 0;
 int VAR_8;

 VAR_7 = VAR_2;

 VAR_8 = FUNC_2(VAR_3, VAR_4, 0, VAR_7, 0, 0,
        VAR_5, &VAR_6);
 if (VAR_8)
  return FUNC_0(VAR_8);

 VAR_6->valid_domains = VAR_1;
 VAR_6->gem = FUNC_1(VAR_3, VAR_6->bo.mem.size);
 if (!VAR_6->gem) {
  FUNC_3(((void*)0), &VAR_6);
  return FUNC_0(-VAR_0);
 }

 VAR_6->gem->driver_private = VAR_6;
 return VAR_6->gem;
}

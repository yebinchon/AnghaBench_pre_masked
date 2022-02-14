
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sg_table {int dummy; } ;
struct TYPE_2__ {int mutex; int objects; } ;
struct radeon_device {TYPE_1__ gem; } ;
struct drm_gem_object {struct radeon_bo* driver_private; } ;
struct radeon_bo {struct drm_gem_object gem_base; int list; } ;
struct drm_device {struct radeon_device* dev_private; } ;


 struct drm_gem_object* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct radeon_device*,size_t,int ,int,int ,struct sg_table*,struct radeon_bo**) ;

struct drm_gem_object *FUNC_5(struct drm_device *VAR_2,
       size_t VAR_3,
       struct sg_table *VAR_4)
{
 struct radeon_device *VAR_5 = VAR_2->dev_private;
 struct radeon_bo *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_4(VAR_5, VAR_3, VAR_0, 0,
          VAR_1, VAR_4, &VAR_6);
 if (VAR_7)
  return FUNC_0(VAR_7);
 VAR_6->gem_base.driver_private = VAR_6;

 FUNC_2(&VAR_5->gem.mutex);
 FUNC_1(&VAR_6->list, &VAR_5->gem.objects);
 FUNC_3(&VAR_5->gem.mutex);

 return &VAR_6->gem_base;
}

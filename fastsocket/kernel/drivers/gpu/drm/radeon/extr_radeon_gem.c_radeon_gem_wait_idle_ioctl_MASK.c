
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct radeon_device {TYPE_1__* asic; } ;
struct radeon_bo {TYPE_3__* rdev; } ;
struct drm_radeon_gem_wait_idle {int handle; } ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct TYPE_6__ {TYPE_2__* asic; } ;
struct TYPE_5__ {int (* ioctl_wait_idle ) (struct radeon_device*,struct radeon_bo*) ;} ;
struct TYPE_4__ {scalar_t__ ioctl_wait_idle; } ;


 int VAR_0 ;
 struct drm_gem_object* FUNC_0 (struct drm_device*,struct drm_file*,int ) ;
 int FUNC_1 (struct drm_gem_object*) ;
 struct radeon_bo* FUNC_2 (struct drm_gem_object*) ;
 int FUNC_3 (struct radeon_bo*,int *,int) ;
 int FUNC_4 (struct radeon_device*,int) ;
 int FUNC_5 (struct radeon_device*,struct radeon_bo*) ;

int FUNC_6(struct drm_device *VAR_1, void *VAR_2,
         struct drm_file *VAR_3)
{
 struct radeon_device *VAR_4 = VAR_1->dev_private;
 struct drm_radeon_gem_wait_idle *VAR_5 = VAR_2;
 struct drm_gem_object *VAR_6;
 struct radeon_bo *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_0(VAR_1, VAR_3, VAR_5->handle);
 if (VAR_6 == ((void*)0)) {
  return -VAR_0;
 }
 VAR_7 = FUNC_2(VAR_6);
 VAR_8 = FUNC_3(VAR_7, ((void*)0), 0);

 if (VAR_4->asic->ioctl_wait_idle)
  VAR_7->rdev->asic->ioctl_wait_idle(VAR_4, VAR_7);
 FUNC_1(VAR_6);
 VAR_8 = FUNC_4(VAR_4, VAR_8);
 return VAR_8;
}

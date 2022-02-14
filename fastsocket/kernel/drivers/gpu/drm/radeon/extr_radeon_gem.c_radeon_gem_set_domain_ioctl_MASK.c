
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int exclusive_lock; } ;
struct radeon_bo {int rdev; } ;
struct drm_radeon_gem_set_domain {int write_domain; int read_domains; int handle; } ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {struct radeon_device* dev_private; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct drm_gem_object* FUNC_1 (struct drm_device*,struct drm_file*,int ) ;
 int FUNC_2 (struct drm_gem_object*) ;
 struct radeon_bo* FUNC_3 (struct drm_gem_object*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct drm_gem_object*,int ,int ) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct drm_device *VAR_1, void *VAR_2,
    struct drm_file *VAR_3)
{


 struct radeon_device *VAR_4 = VAR_1->dev_private;
 struct drm_radeon_gem_set_domain *VAR_5 = VAR_2;
 struct drm_gem_object *VAR_6;
 struct radeon_bo *VAR_7;
 int VAR_8;



 FUNC_0(&VAR_4->exclusive_lock);


 VAR_6 = FUNC_1(VAR_1, VAR_3, VAR_5->handle);
 if (VAR_6 == ((void*)0)) {
  FUNC_6(&VAR_4->exclusive_lock);
  return -VAR_0;
 }
 VAR_7 = FUNC_3(VAR_6);

 VAR_8 = FUNC_5(VAR_6, VAR_5->read_domains, VAR_5->write_domain);

 FUNC_2(VAR_6);
 FUNC_6(&VAR_4->exclusive_lock);
 VAR_8 = FUNC_4(VAR_7->rdev, VAR_8);
 return VAR_8;
}

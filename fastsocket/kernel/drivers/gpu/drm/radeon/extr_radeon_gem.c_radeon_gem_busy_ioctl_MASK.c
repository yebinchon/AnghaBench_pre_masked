
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct radeon_device {int dummy; } ;
struct radeon_bo {int dummy; } ;
struct drm_radeon_gem_busy {int domain; int handle; } ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {struct radeon_device* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 struct drm_gem_object* FUNC_0 (struct drm_device*,struct drm_file*,int ) ;
 int FUNC_1 (struct drm_gem_object*) ;
 struct radeon_bo* FUNC_2 (struct drm_gem_object*) ;
 int FUNC_3 (struct radeon_bo*,int*,int) ;
 int FUNC_4 (struct radeon_device*,int) ;

int FUNC_5(struct drm_device *VAR_4, void *VAR_5,
     struct drm_file *VAR_6)
{
 struct radeon_device *VAR_7 = VAR_4->dev_private;
 struct drm_radeon_gem_busy *VAR_8 = VAR_5;
 struct drm_gem_object *VAR_9;
 struct radeon_bo *VAR_10;
 int VAR_11;
 uint32_t VAR_12 = 0;

 VAR_9 = FUNC_0(VAR_4, VAR_6, VAR_8->handle);
 if (VAR_9 == ((void*)0)) {
  return -VAR_0;
 }
 VAR_10 = FUNC_2(VAR_9);
 VAR_11 = FUNC_3(VAR_10, &VAR_12, 1);
 switch (VAR_12) {
 case 128:
  VAR_8->domain = VAR_3;
  break;
 case 129:
  VAR_8->domain = VAR_2;
  break;
 case 130:
  VAR_8->domain = VAR_1;
 default:
  break;
 }
 FUNC_1(VAR_9);
 VAR_11 = FUNC_4(VAR_7, VAR_11);
 return VAR_11;
}

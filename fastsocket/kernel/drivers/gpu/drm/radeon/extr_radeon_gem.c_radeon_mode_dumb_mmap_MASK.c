
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct radeon_bo {int dummy; } ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 struct drm_gem_object* FUNC_0 (struct drm_device*,struct drm_file*,int ) ;
 int FUNC_1 (struct drm_gem_object*) ;
 struct radeon_bo* FUNC_2 (struct drm_gem_object*) ;
 int FUNC_3 (struct radeon_bo*) ;

int FUNC_4(struct drm_file *VAR_1,
     struct drm_device *VAR_2,
     uint32_t VAR_3, uint64_t *VAR_4)
{
 struct drm_gem_object *VAR_5;
 struct radeon_bo *VAR_6;

 VAR_5 = FUNC_0(VAR_2, VAR_1, VAR_3);
 if (VAR_5 == ((void*)0)) {
  return -VAR_0;
 }
 VAR_6 = FUNC_2(VAR_5);
 *VAR_4 = FUNC_3(VAR_6);
 FUNC_1(VAR_5);
 return 0;
}

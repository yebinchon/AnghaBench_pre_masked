
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct drm_i915_gem_set_domain {int read_domains; int write_domain; int handle; } ;
struct drm_i915_gem_object {int base; } ;
struct drm_file {int dummy; } ;
struct drm_device {int struct_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct drm_device*,struct drm_file*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct drm_i915_gem_object*,int) ;
 int FUNC_3 (struct drm_i915_gem_object*,int) ;
 int FUNC_4 (struct drm_i915_gem_object*,int) ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (int *) ;
 struct drm_i915_gem_object* FUNC_7 (int ) ;

int
FUNC_8(struct drm_device *VAR_4, void *VAR_5,
     struct drm_file *VAR_6)
{
 struct drm_i915_gem_set_domain *VAR_7 = VAR_5;
 struct drm_i915_gem_object *VAR_8;
 uint32_t VAR_9 = VAR_7->read_domains;
 uint32_t VAR_10 = VAR_7->write_domain;
 int VAR_11;


 if (VAR_10 & VAR_3)
  return -VAR_0;

 if (VAR_9 & VAR_3)
  return -VAR_0;




 if (VAR_10 != 0 && VAR_9 != VAR_10)
  return -VAR_0;

 VAR_11 = FUNC_5(VAR_4);
 if (VAR_11)
  return VAR_11;

 VAR_8 = FUNC_7(FUNC_0(VAR_4, VAR_6, VAR_7->handle));
 if (&VAR_8->base == ((void*)0)) {
  VAR_11 = -VAR_1;
  goto unlock;
 }





 VAR_11 = FUNC_4(VAR_8, !VAR_10);
 if (VAR_11)
  goto unref;

 if (VAR_9 & VAR_2) {
  VAR_11 = FUNC_3(VAR_8, VAR_10 != 0);





  if (VAR_11 == -VAR_0)
   VAR_11 = 0;
 } else {
  VAR_11 = FUNC_2(VAR_8, VAR_10 != 0);
 }

unref:
 FUNC_1(&VAR_8->base);
unlock:
 FUNC_6(&VAR_4->struct_mutex);
 return VAR_11;
}

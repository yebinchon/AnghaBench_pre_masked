
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_nouveau_gem_info {int handle; } ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 struct drm_gem_object* FUNC_0 (struct drm_device*,struct drm_file*,int ) ;
 int FUNC_1 (struct drm_gem_object*) ;
 int FUNC_2 (struct drm_file*,struct drm_gem_object*,struct drm_nouveau_gem_info*) ;

int
FUNC_3(struct drm_device *VAR_1, void *VAR_2,
         struct drm_file *VAR_3)
{
 struct drm_nouveau_gem_info *VAR_4 = VAR_2;
 struct drm_gem_object *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0(VAR_1, VAR_3, VAR_4->handle);
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_2(VAR_3, VAR_5, VAR_4);
 FUNC_1(VAR_5);
 return VAR_6;
}

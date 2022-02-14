
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {struct drm_gem_object* vm_private_data; } ;
struct drm_gem_object {struct drm_device* dev; } ;
struct drm_device {int struct_mutex; } ;


 int FUNC_0 (struct drm_gem_object*) ;
 int FUNC_1 (struct drm_device*,struct vm_area_struct*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct vm_area_struct *VAR_0)
{
 struct drm_gem_object *VAR_1 = VAR_0->vm_private_data;
 struct drm_device *VAR_2 = VAR_1->dev;

 FUNC_2(&VAR_2->struct_mutex);
 FUNC_1(VAR_1->dev, VAR_0);
 FUNC_0(VAR_1);
 FUNC_3(&VAR_2->struct_mutex);
}

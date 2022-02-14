
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {struct drm_gem_object* vm_private_data; } ;
struct drm_gem_object {TYPE_1__* dev; } ;
struct TYPE_2__ {int struct_mutex; } ;


 int FUNC_0 (struct drm_gem_object*) ;
 int FUNC_1 (TYPE_1__*,struct vm_area_struct*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct vm_area_struct *VAR_0)
{
 struct drm_gem_object *VAR_1 = VAR_0->vm_private_data;

 FUNC_0(VAR_1);

 FUNC_2(&VAR_1->dev->struct_mutex);
 FUNC_1(VAR_1->dev, VAR_0);
 FUNC_3(&VAR_1->dev->struct_mutex);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_gem_object {int refcount; int name; struct drm_device* dev; } ;
struct drm_device {int object_name_lock; int object_name_idr; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct drm_gem_object *VAR_1)
{
 struct drm_device *VAR_2 = VAR_1->dev;


 FUNC_2(&VAR_2->object_name_lock);
 if (VAR_1->name) {
  FUNC_0(&VAR_2->object_name_idr, VAR_1->name);
  VAR_1->name = 0;
  FUNC_3(&VAR_2->object_name_lock);






  FUNC_1(&VAR_1->refcount, VAR_0);
 } else
  FUNC_3(&VAR_2->object_name_lock);

}

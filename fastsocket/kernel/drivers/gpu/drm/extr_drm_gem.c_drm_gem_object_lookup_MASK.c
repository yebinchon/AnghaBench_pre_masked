
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int table_lock; int object_idr; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (struct drm_gem_object*) ;
 struct drm_gem_object* FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

struct drm_gem_object *
FUNC_4(struct drm_device *VAR_0, struct drm_file *VAR_1,
        u32 VAR_2)
{
 struct drm_gem_object *VAR_3;

 FUNC_2(&VAR_1->table_lock);


 VAR_3 = FUNC_1(&VAR_1->object_idr, VAR_2);
 if (VAR_3 == ((void*)0)) {
  FUNC_3(&VAR_1->table_lock);
  return ((void*)0);
 }

 FUNC_0(VAR_3);

 FUNC_3(&VAR_1->table_lock);

 return VAR_3;
}

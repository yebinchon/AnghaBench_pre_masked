
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct drm_gem_object {struct drm_device* dev; } ;
struct drm_file {int table_lock; int object_idr; } ;
struct drm_device {TYPE_1__* driver; } ;
struct TYPE_2__ {int (* gem_close_object ) (struct drm_gem_object*,struct drm_file*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct drm_gem_object*) ;
 int FUNC_1 (struct drm_gem_object*,struct drm_file*) ;
 struct drm_gem_object* FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct drm_gem_object*,struct drm_file*) ;

int
FUNC_7(struct drm_file *VAR_1, u32 VAR_2)
{
 struct drm_device *VAR_3;
 struct drm_gem_object *VAR_4;
 FUNC_4(&VAR_1->table_lock);


 VAR_4 = FUNC_2(&VAR_1->object_idr, VAR_2);
 if (VAR_4 == ((void*)0)) {
  FUNC_5(&VAR_1->table_lock);
  return -VAR_0;
 }
 VAR_3 = VAR_4->dev;


 FUNC_3(&VAR_1->object_idr, VAR_2);
 FUNC_5(&VAR_1->table_lock);

 FUNC_1(VAR_4, VAR_1);

 if (VAR_3->driver->gem_close_object)
  VAR_3->driver->gem_close_object(VAR_4, VAR_1);
 FUNC_0(VAR_4);

 return 0;
}

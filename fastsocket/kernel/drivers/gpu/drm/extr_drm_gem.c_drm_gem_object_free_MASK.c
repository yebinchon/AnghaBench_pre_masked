
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kref {int dummy; } ;
struct drm_gem_object {struct drm_device* dev; } ;
struct drm_device {TYPE_1__* driver; int struct_mutex; } ;
struct TYPE_2__ {int (* gem_free_object ) (struct drm_gem_object*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct drm_gem_object*) ;

void
FUNC_3(struct kref *VAR_0)
{
 struct drm_gem_object *VAR_1 = (struct drm_gem_object *) VAR_0;
 struct drm_device *VAR_2 = VAR_1->dev;

 FUNC_0(!FUNC_1(&VAR_2->struct_mutex));

 if (VAR_2->driver->gem_free_object != ((void*)0))
  VAR_2->driver->gem_free_object(VAR_1);
}

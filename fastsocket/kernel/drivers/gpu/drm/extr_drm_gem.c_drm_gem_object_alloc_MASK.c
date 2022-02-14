
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_gem_object {int filp; } ;
struct drm_device {TYPE_1__* driver; } ;
struct TYPE_2__ {scalar_t__ (* gem_init_object ) (struct drm_gem_object*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_device*,struct drm_gem_object*,size_t) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct drm_gem_object*) ;
 struct drm_gem_object* FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (struct drm_gem_object*) ;

struct drm_gem_object *
FUNC_5(struct drm_device *VAR_1, size_t VAR_2)
{
 struct drm_gem_object *VAR_3;

 VAR_3 = FUNC_3(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  goto free;

 if (FUNC_0(VAR_1, VAR_3, VAR_2) != 0)
  goto free;

 if (VAR_1->driver->gem_init_object != ((void*)0) &&
     VAR_1->driver->gem_init_object(VAR_3) != 0) {
  goto fput;
 }
 return VAR_3;
fput:

 FUNC_1(VAR_3->filp);
free:
 FUNC_2(VAR_3);
 return ((void*)0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_gem_object {size_t size; int handle_count; int refcount; int * filp; struct drm_device* dev; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct drm_device *VAR_1,
   struct drm_gem_object *VAR_2, size_t VAR_3)
{
 FUNC_0((VAR_3 & (VAR_0 - 1)) != 0);

 VAR_2->dev = VAR_1;
 VAR_2->filp = ((void*)0);

 FUNC_2(&VAR_2->refcount);
 FUNC_1(&VAR_2->handle_count, 0);
 VAR_2->size = VAR_3;

 return 0;
}

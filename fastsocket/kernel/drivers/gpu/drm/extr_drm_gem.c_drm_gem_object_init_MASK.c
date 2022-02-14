
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_gem_object {size_t size; int handle_count; int refcount; int filp; struct drm_device* dev; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,size_t,int ) ;

int FUNC_6(struct drm_device *VAR_2,
   struct drm_gem_object *VAR_3, size_t VAR_4)
{
 FUNC_0((VAR_4 & (VAR_0 - 1)) != 0);

 VAR_3->dev = VAR_2;
 VAR_3->filp = FUNC_5("drm mm object", VAR_4, VAR_1);
 if (FUNC_1(VAR_3->filp))
  return FUNC_2(VAR_3->filp);

 FUNC_4(&VAR_3->refcount);
 FUNC_3(&VAR_3->handle_count, 0);
 VAR_3->size = VAR_4;

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_plane {int * obj; int (* disable_plane ) (struct drm_plane*) ;} ;
struct drm_plane {scalar_t__ crtc; struct drm_device* dev; } ;
struct drm_device {int struct_mutex; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct drm_plane*) ;
 struct intel_plane* FUNC_5 (struct drm_plane*) ;

__attribute__((used)) static int
FUNC_6(struct drm_plane *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;
 struct intel_plane *VAR_2 = FUNC_5(VAR_0);
 int VAR_3 = 0;

 if (VAR_0->crtc)
  FUNC_0(VAR_0->crtc);
 VAR_2->disable_plane(VAR_0);

 if (!VAR_2->obj)
  goto out;

 FUNC_2(&VAR_1->struct_mutex);
 FUNC_1(VAR_2->obj);
 VAR_2->obj = ((void*)0);
 FUNC_3(&VAR_1->struct_mutex);
out:

 return VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_file_private {int context_idr; } ;
struct drm_file {struct drm_i915_file_private* driver_priv; } ;
struct drm_device {int struct_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct drm_device *VAR_1, struct drm_file *VAR_2)
{
 struct drm_i915_file_private *VAR_3 = VAR_2->driver_priv;

 FUNC_2(&VAR_1->struct_mutex);
 FUNC_1(&VAR_3->context_idr, VAR_0, ((void*)0));
 FUNC_0(&VAR_3->context_idr);
 FUNC_3(&VAR_1->struct_mutex);
}

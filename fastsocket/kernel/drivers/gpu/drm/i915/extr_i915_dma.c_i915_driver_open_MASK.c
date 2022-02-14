
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int request_list; int lock; } ;
struct drm_i915_file_private {int context_idr; TYPE_1__ mm; } ;
struct drm_file {struct drm_i915_file_private* driver_priv; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct drm_i915_file_private* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct drm_device *VAR_2, struct drm_file *VAR_3)
{
 struct drm_i915_file_private *VAR_4;

 FUNC_0("\n");
 VAR_4 = FUNC_3(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_3->driver_priv = VAR_4;

 FUNC_4(&VAR_4->mm.lock);
 FUNC_1(&VAR_4->mm.request_list);

 FUNC_2(&VAR_4->context_idr);

 return 0;
}

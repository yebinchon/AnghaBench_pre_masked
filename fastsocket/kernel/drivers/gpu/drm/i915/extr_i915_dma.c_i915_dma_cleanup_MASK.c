
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_device {int struct_mutex; scalar_t__ irq_enabled; TYPE_1__* dev_private; } ;
struct TYPE_2__ {int * ring; } ;
typedef TYPE_1__ drm_i915_private_t ;


 scalar_t__ FUNC_0 (struct drm_device*) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct drm_device * VAR_1)
{
 drm_i915_private_t *VAR_2 = VAR_1->dev_private;
 int VAR_3;





 if (VAR_1->irq_enabled)
  FUNC_1(VAR_1);

 FUNC_4(&VAR_1->struct_mutex);
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_3(&VAR_2->ring[VAR_3]);
 FUNC_5(&VAR_1->struct_mutex);


 if (FUNC_0(VAR_1))
  FUNC_2(VAR_1);

 return 0;
}

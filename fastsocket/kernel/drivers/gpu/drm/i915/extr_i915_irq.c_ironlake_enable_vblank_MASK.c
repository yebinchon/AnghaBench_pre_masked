
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct drm_device {scalar_t__ dev_private; } ;
struct TYPE_3__ {int irq_lock; } ;
typedef TYPE_1__ drm_i915_private_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct drm_device*,int) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct drm_device *VAR_3, int VAR_4)
{
 drm_i915_private_t *VAR_5 = (drm_i915_private_t *) VAR_3->dev_private;
 unsigned long VAR_6;

 if (!FUNC_0(VAR_3, VAR_4))
  return -VAR_2;

 FUNC_2(&VAR_5->irq_lock, VAR_6);
 FUNC_1(VAR_5, (VAR_4 == 0) ?
        VAR_0 : VAR_1);
 FUNC_3(&VAR_5->irq_lock, VAR_6);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct drm_device {scalar_t__ dev_private; } ;
struct TYPE_3__ {int irq_lock; } ;
typedef TYPE_1__ drm_i915_private_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*,int,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct drm_device *VAR_4, int VAR_5)
{
 drm_i915_private_t *VAR_6 = (drm_i915_private_t *) VAR_4->dev_private;
 unsigned long VAR_7;
 u32 VAR_8;

 FUNC_3(&VAR_6->irq_lock, VAR_7);
 FUNC_2(VAR_6, VAR_5,
         VAR_2);
 VAR_8 = FUNC_0(VAR_3);
 if (VAR_5 == 0)
  VAR_8 |= VAR_0;
 else
  VAR_8 |= VAR_1;
 FUNC_1(VAR_3, VAR_8);
 FUNC_4(&VAR_6->irq_lock, VAR_7);
}

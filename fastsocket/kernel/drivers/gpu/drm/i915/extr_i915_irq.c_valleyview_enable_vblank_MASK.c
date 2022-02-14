
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
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*,int,int ) ;
 int FUNC_3 (struct drm_device*,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct drm_device *VAR_5, int VAR_6)
{
 drm_i915_private_t *VAR_7 = (drm_i915_private_t *) VAR_5->dev_private;
 unsigned long VAR_8;
 u32 VAR_9;

 if (!FUNC_3(VAR_5, VAR_6))
  return -VAR_0;

 FUNC_4(&VAR_7->irq_lock, VAR_8);
 VAR_9 = FUNC_0(VAR_4);
 if (VAR_6 == 0)
  VAR_9 &= ~VAR_1;
 else
  VAR_9 &= ~VAR_2;
 FUNC_1(VAR_4, VAR_9);
 FUNC_2(VAR_7, VAR_6,
        VAR_3);
 FUNC_5(&VAR_7->irq_lock, VAR_8);

 return 0;
}

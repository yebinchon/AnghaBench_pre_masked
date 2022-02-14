
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_device {scalar_t__ dev_private; } ;
struct TYPE_2__ {int irq_mask; scalar_t__* pipestat; } ;
typedef TYPE_1__ drm_i915_private_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct drm_device *VAR_11)
{
 drm_i915_private_t *VAR_12 = (drm_i915_private_t *) VAR_11->dev_private;

 VAR_12->pipestat[0] = 0;
 VAR_12->pipestat[1] = 0;

 FUNC_0(VAR_0,
       ~(VAR_6 | VAR_5));


 VAR_12->irq_mask =
  ~(VAR_1 |
    VAR_2 |
    VAR_3 |
    VAR_4 |
    VAR_7);
 FUNC_0(VAR_10, VAR_12->irq_mask);

 FUNC_0(VAR_9,
       VAR_1 |
       VAR_2 |
       VAR_7 |
       VAR_8);
 FUNC_1(VAR_9);

 return 0;
}

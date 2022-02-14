
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct drm_device {scalar_t__ dev_private; } ;
struct TYPE_3__ {int irq_mask; int gt_irq_mask; } ;
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
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (struct drm_device*) ;
 scalar_t__ FUNC_3 (struct drm_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_7(struct drm_device *VAR_20)
{
 drm_i915_private_t *VAR_21 = (drm_i915_private_t *) VAR_20->dev_private;

 u32 VAR_22 = VAR_5 | VAR_4 | VAR_6 |
      VAR_10 | VAR_11 |
      VAR_3;
 u32 VAR_23;

 VAR_21->irq_mask = ~VAR_22;


 FUNC_1(VAR_1, FUNC_0(VAR_1));
 FUNC_1(VAR_2, VAR_21->irq_mask);
 FUNC_1(VAR_0, VAR_22 | VAR_8 | VAR_9);
 FUNC_4(VAR_0);

 VAR_21->gt_irq_mask = ~0;

 FUNC_1(VAR_15, FUNC_0(VAR_15));
 FUNC_1(VAR_16, VAR_21->gt_irq_mask);

 if (FUNC_2(VAR_20))
  VAR_23 =
   VAR_19 |
   VAR_13 |
   VAR_12;
 else
  VAR_23 =
   VAR_19 |
   VAR_18 |
   VAR_17;
 FUNC_1(VAR_14, VAR_23);
 FUNC_4(VAR_14);

 FUNC_5(VAR_20);

 if (FUNC_3(VAR_20)) {

  FUNC_1(VAR_1, VAR_7);
  FUNC_1(VAR_0, FUNC_0(VAR_0) | VAR_7);
  FUNC_6(VAR_21, VAR_7);
 }

 return 0;
}

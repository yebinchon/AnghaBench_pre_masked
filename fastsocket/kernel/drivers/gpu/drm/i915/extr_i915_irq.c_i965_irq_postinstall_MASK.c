
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct drm_device {scalar_t__ dev_private; } ;
struct TYPE_3__ {int irq_mask; scalar_t__* pipestat; } ;
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
 int FUNC_0 (int ,int) ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_1 (struct drm_device*) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 int FUNC_4 (struct drm_device*) ;

__attribute__((used)) static int FUNC_5(struct drm_device *VAR_19)
{
 drm_i915_private_t *VAR_20 = (drm_i915_private_t *) VAR_19->dev_private;
 u32 VAR_21;
 u32 VAR_22;


 VAR_20->irq_mask = ~(VAR_4 |
          VAR_10 |
          VAR_6 |
          VAR_7 |
          VAR_8 |
          VAR_9 |
          VAR_13);

 VAR_21 = ~VAR_20->irq_mask;
 VAR_21 |= VAR_14;

 if (FUNC_1(VAR_19))
  VAR_21 |= VAR_5;

 VAR_20->pipestat[0] = 0;
 VAR_20->pipestat[1] = 0;
 FUNC_3(VAR_20, 0, VAR_17);





 if (FUNC_1(VAR_19)) {
  VAR_22 = ~(VAR_3 |
          VAR_2 |
          VAR_1 |
          VAR_11);
 } else {
  VAR_22 = ~(VAR_12 |
          VAR_11);
 }
 FUNC_0(VAR_0, VAR_22);

 FUNC_0(VAR_16, VAR_20->irq_mask);
 FUNC_0(VAR_15, VAR_21);
 FUNC_2(VAR_15);

 FUNC_0(VAR_18, 0);
 FUNC_2(VAR_18);

 FUNC_4(VAR_19);

 return 0;
}

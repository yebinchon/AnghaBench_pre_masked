
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct drm_device {int pdev; scalar_t__ dev_private; } ;
struct TYPE_5__ {int irq_mask; int gt_irq_mask; TYPE_1__* dev; scalar_t__* pipestat; } ;
typedef TYPE_2__ drm_i915_private_t ;
struct TYPE_4__ {int pdev; } ;


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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_14 ;
 int FUNC_2 (int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_3 (int ) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_4 (TYPE_2__*,int,int) ;
 int FUNC_5 (int ,int,int*) ;
 int FUNC_6 (int ,int,int) ;
 int FUNC_7 (int ,int,int) ;

__attribute__((used)) static int FUNC_8(struct drm_device *VAR_22)
{
 drm_i915_private_t *VAR_23 = (drm_i915_private_t *) VAR_22->dev_private;
 u32 VAR_24;
 u32 VAR_25 = VAR_16;
 u32 VAR_26;
 u16 VAR_27;

 VAR_24 = VAR_13;
 VAR_24 |= VAR_9 |
  VAR_10 |
  VAR_11 |
  VAR_12;





 VAR_23->irq_mask = (~VAR_24) |
  VAR_10 |
  VAR_12;

 VAR_23->pipestat[0] = 0;
 VAR_23->pipestat[1] = 0;


 FUNC_6(VAR_23->dev->pdev, 0x94, 0xfee00000);
 FUNC_5(VAR_22->pdev, 0x98, &VAR_27);
 VAR_27 &= 0xff;
 VAR_27 |= (1<<14);
 FUNC_7(VAR_23->dev->pdev, 0x98, VAR_27);

 FUNC_1(VAR_17, 0);
 FUNC_3(VAR_17);

 FUNC_1(VAR_20, VAR_23->irq_mask);
 FUNC_1(VAR_18, VAR_24);
 FUNC_1(VAR_19, 0xffffffff);
 FUNC_1(FUNC_2(0), 0xffff);
 FUNC_1(FUNC_2(1), 0xffff);
 FUNC_3(VAR_18);

 FUNC_4(VAR_23, 0, VAR_25);
 FUNC_4(VAR_23, 0, VAR_15);
 FUNC_4(VAR_23, 1, VAR_25);

 FUNC_1(VAR_19, 0xffffffff);
 FUNC_1(VAR_19, 0xffffffff);

 FUNC_1(VAR_6, FUNC_0(VAR_6));
 FUNC_1(VAR_7, VAR_23->gt_irq_mask);

 VAR_26 = VAR_8 | VAR_4 |
  VAR_3;
 FUNC_1(VAR_5, VAR_26);
 FUNC_3(VAR_5);







 FUNC_1(VAR_21, VAR_14);

 return 0;
}

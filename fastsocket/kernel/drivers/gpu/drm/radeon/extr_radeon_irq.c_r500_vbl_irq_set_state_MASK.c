
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct drm_device {scalar_t__ irq_enabled; TYPE_1__* dev_private; } ;
struct TYPE_2__ {int r500_disp_irq_reg; } ;
typedef TYPE_1__ drm_radeon_private_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct drm_device *VAR_1, u32 VAR_2, int VAR_3)
{
 drm_radeon_private_t *VAR_4 = VAR_1->dev_private;

 if (VAR_3)
  VAR_4->r500_disp_irq_reg |= VAR_2;
 else
  VAR_4->r500_disp_irq_reg &= ~VAR_2;

 if (VAR_1->irq_enabled)
  FUNC_0(VAR_0, VAR_4->r500_disp_irq_reg);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vfe_irq_composite_mask_config {int ceDoneSel; int viewIrqComMask; int encIrqComMask; } ;
struct VFE_Irq_Composite_MaskType {int ceDoneSelBits; int viewIrqComMaskBits; int encIrqComMaskBits; } ;
typedef int packedData ;


 int FUNC_0 (struct VFE_Irq_Composite_MaskType*,int ,int) ;

__attribute__((used)) static uint32_t
FUNC_1(struct vfe_irq_composite_mask_config VAR_0)
{
 struct VFE_Irq_Composite_MaskType VAR_1;

 FUNC_0(&VAR_1, 0, sizeof(VAR_1));

 VAR_1.encIrqComMaskBits = VAR_0.encIrqComMask;
 VAR_1.viewIrqComMaskBits = VAR_0.viewIrqComMask;
 VAR_1.ceDoneSelBits = VAR_0.ceDoneSel;

 return *((uint32_t *)&VAR_1);
}

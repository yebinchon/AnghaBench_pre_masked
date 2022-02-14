
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ line; } ;
struct mpsc_port_info {TYPE_2__ port; TYPE_1__* shared_regs; scalar_t__ mirror_regs; } ;
struct TYPE_3__ {int SDMA_INTR_MASK_m; scalar_t__ sdma_intr_base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,scalar_t__,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static u32 FUNC_3(struct mpsc_port_info *VAR_1, u32 VAR_2)
{
 u32 VAR_3, VAR_4;

 FUNC_0("mpsc_sdma_intr_mask[%d]: mask: 0x%x\n", VAR_1->port.line, VAR_2);

 VAR_3 = VAR_4 = (VAR_1->mirror_regs) ? VAR_1->shared_regs->SDMA_INTR_MASK_m :
  FUNC_1(VAR_1->shared_regs->sdma_intr_base + VAR_0);

 VAR_2 &= 0xf;
 if (VAR_1->port.line)
  VAR_2 <<= 8;
 VAR_4 &= ~VAR_2;

 if (VAR_1->mirror_regs)
  VAR_1->shared_regs->SDMA_INTR_MASK_m = VAR_4;
 FUNC_2(VAR_4, VAR_1->shared_regs->sdma_intr_base + VAR_0);

 if (VAR_1->port.line)
  VAR_3 >>= 8;
 return VAR_3 & 0xf;
}

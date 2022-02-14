
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipr_ioadl64_desc {int dummy; } ;
struct TYPE_2__ {int ioarrin_reg; } ;
struct ipr_ioa_cfg {TYPE_1__ regs; scalar_t__ sis64; } ;
struct ipr_cmnd {int dma_addr; int dma_use_sg; struct ipr_ioa_cfg* ioa_cfg; } ;
typedef int dma_addr_t ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(struct ipr_cmnd *VAR_0)
{
 struct ipr_ioa_cfg *VAR_1 = VAR_0->ioa_cfg;
 dma_addr_t VAR_2 = VAR_0->dma_addr;

 if (VAR_1->sis64) {

  VAR_2 |= 0x1;



  if (VAR_0->dma_use_sg * sizeof(struct ipr_ioadl64_desc) > 128 )
   VAR_2 |= 0x4;
  FUNC_1(VAR_2, VAR_1->regs.ioarrin_reg);
 } else
  FUNC_0(VAR_2, VAR_1->regs.ioarrin_reg);
}

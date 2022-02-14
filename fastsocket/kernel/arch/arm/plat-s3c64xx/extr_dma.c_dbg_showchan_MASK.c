
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c2410_dma_chan {scalar_t__ regs; int number; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct s3c2410_dma_chan *VAR_6)
{
 FUNC_0("DMA%d: %08x->%08x L %08x C %08x,%08x S %08x\n",
   VAR_6->number,
   FUNC_1(VAR_6->regs + VAR_5),
   FUNC_1(VAR_6->regs + VAR_3),
   FUNC_1(VAR_6->regs + VAR_4),
   FUNC_1(VAR_6->regs + VAR_2),
   FUNC_1(VAR_6->regs + VAR_1),
   FUNC_1(VAR_6->regs + VAR_0));
}

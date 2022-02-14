
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct at_lli {int dscr; int ctrlb; int ctrla; int daddr; int saddr; } ;
struct at_dma_chan {int chan_common; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,char*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct at_dma_chan *VAR_1, struct at_lli *VAR_2)
{
 FUNC_1(VAR_0, FUNC_0(&VAR_1->chan_common),
   "  desc: s0x%x d0x%x ctrl0x%x:0x%x l0x%x\n",
   VAR_2->saddr, VAR_2->daddr,
   VAR_2->ctrla, VAR_2->ctrlb, VAR_2->dscr);
}

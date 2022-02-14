
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dw_lli {int ctllo; int ctlhi; int llp; int dar; int sar; } ;
struct dw_dma_chan {int chan; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,char*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct dw_dma_chan *VAR_1, struct dw_lli *VAR_2)
{
 FUNC_1(VAR_0, FUNC_0(&VAR_1->chan),
   "  desc: s0x%x d0x%x l0x%x c0x%x:%x\n",
   VAR_2->sar, VAR_2->dar, VAR_2->llp,
   VAR_2->ctlhi, VAR_2->ctllo);
}

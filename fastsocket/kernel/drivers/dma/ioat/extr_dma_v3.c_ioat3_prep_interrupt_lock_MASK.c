
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct dma_async_tx_descriptor {unsigned long flags; } ;
struct ioat_ring_ent {int len; struct dma_async_tx_descriptor txd; struct ioat_dma_descriptor* hw; } ;
struct TYPE_2__ {int null; int int_en; int fence; int compl_write; } ;
struct ioat_dma_descriptor {scalar_t__ dst_addr; scalar_t__ src_addr; int size; TYPE_1__ ctl_f; scalar_t__ ctl; } ;
struct ioat2_dma_chan {int dummy; } ;
struct dma_chan {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ioat2_dma_chan*,struct ioat_ring_ent*) ;
 scalar_t__ FUNC_1 (int *,struct ioat2_dma_chan*,int) ;
 struct ioat_ring_ent* FUNC_2 (struct ioat2_dma_chan*,int ) ;
 struct ioat2_dma_chan* FUNC_3 (struct dma_chan*) ;

__attribute__((used)) static struct dma_async_tx_descriptor *
FUNC_4(struct dma_chan *VAR_2, unsigned long VAR_3)
{
 struct ioat2_dma_chan *VAR_4 = FUNC_3(VAR_2);
 struct ioat_ring_ent *VAR_5;
 struct ioat_dma_descriptor *VAR_6;
 u16 VAR_7;

 if (FUNC_1(&VAR_7, VAR_4, 1) == 0)
  VAR_5 = FUNC_2(VAR_4, VAR_7);
 else
  return ((void*)0);

 VAR_6 = VAR_5->hw;
 VAR_6->ctl = 0;
 VAR_6->ctl_f.null = 1;
 VAR_6->ctl_f.int_en = 1;
 VAR_6->ctl_f.fence = !!(VAR_3 & VAR_0);
 VAR_6->ctl_f.compl_write = 1;
 VAR_6->size = VAR_1;
 VAR_6->src_addr = 0;
 VAR_6->dst_addr = 0;

 VAR_5->txd.flags = VAR_3;
 VAR_5->len = 1;

 FUNC_0(VAR_4, VAR_5);


 return &VAR_5->txd;
}

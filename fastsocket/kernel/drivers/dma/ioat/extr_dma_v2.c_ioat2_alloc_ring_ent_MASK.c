
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ioatdma_device {int dma_pool; } ;
struct TYPE_2__ {int phys; int tx_submit; } ;
struct ioat_ring_ent {TYPE_1__ txd; struct ioat_ring_ent* hw; } ;
struct ioat_dma_descriptor {TYPE_1__ txd; struct ioat_dma_descriptor* hw; } ;
struct dma_chan {int device; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;


 int FUNC_0 (TYPE_1__*,struct dma_chan*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct ioat_ring_ent* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct ioat_ring_ent*,int ,int) ;
 struct ioat_ring_ent* FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ,struct ioat_ring_ent*,int ) ;
 struct ioatdma_device* FUNC_5 (int ) ;

__attribute__((used)) static struct ioat_ring_ent *FUNC_6(struct dma_chan *VAR_2, gfp_t VAR_3)
{
 struct ioat_dma_descriptor *VAR_4;
 struct ioat_ring_ent *VAR_5;
 struct ioatdma_device *VAR_6;
 dma_addr_t VAR_7;

 VAR_6 = FUNC_5(VAR_2->device);
 VAR_4 = FUNC_3(VAR_6->dma_pool, VAR_3, &VAR_7);
 if (!VAR_4)
  return ((void*)0);
 FUNC_2(VAR_4, 0, sizeof(*VAR_4));

 VAR_5 = FUNC_1(VAR_0, VAR_3);
 if (!VAR_5) {
  FUNC_4(VAR_6->dma_pool, VAR_4, VAR_7);
  return ((void*)0);
 }
 FUNC_2(VAR_5, 0, sizeof(*VAR_5));

 FUNC_0(&VAR_5->txd, VAR_2);
 VAR_5->txd.tx_submit = VAR_1;
 VAR_5->hw = VAR_4;
 VAR_5->txd.phys = VAR_7;
 return VAR_5;
}

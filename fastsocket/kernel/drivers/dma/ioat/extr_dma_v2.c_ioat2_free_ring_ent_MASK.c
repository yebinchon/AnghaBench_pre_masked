
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ioatdma_device {int dma_pool; } ;
struct TYPE_2__ {int phys; } ;
struct ioat_ring_ent {TYPE_1__ txd; int hw; } ;
struct dma_chan {int device; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct ioat_ring_ent*) ;
 int FUNC_1 (int ,int ,int ) ;
 struct ioatdma_device* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct ioat_ring_ent *VAR_1, struct dma_chan *VAR_2)
{
 struct ioatdma_device *VAR_3;

 VAR_3 = FUNC_2(VAR_2->device);
 FUNC_1(VAR_3->dma_pool, VAR_1->hw, VAR_1->txd.phys);
 FUNC_0(VAR_0, VAR_1);
}
